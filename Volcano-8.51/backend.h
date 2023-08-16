#pragma once

#define CURL_STATICLIB
#include <curl/curl.h>
#include <string>

enum EReqType
{
	EReqType_POST,
	EReqType_GET,
	EReqType_DELETE
};

static size_t Write_Callback(char* contents, size_t size, size_t nmemb, void* RES)
{
	((std::string*)RES)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

class API
{
protected:
	CURL* curl = nullptr;
public:
	API()
	{
		if (curl)
			return;

		curl_global_init(CURL_GLOBAL_ALL);
		curl = curl_easy_init();
		if (curl)
		{
			curl_easy_setopt(curl, CURLOPT_HTTPHEADER, curl_slist_append(nullptr, "content-Type: application/json"));
		}
	}

	~API()
	{
		curl_global_cleanup();
		curl_easy_cleanup(curl);
	}

	FORCEINLINE bool Request(EReqType RequestType, const std::string& Endpoint, const std::string& Body, std::string* OutResponse = nullptr)
	{
		curl_easy_setopt(curl, CURLOPT_URL, Endpoint);
		if (RequestType == EReqType_DELETE)
		{
			curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "DELETE");
		}

		if (!Body.empty() || Body != "")
		{
			curl_easy_setopt(curl, CURLOPT_POSTFIELDS, Body);
		}

		std::string callback;
		if (OutResponse)
		{
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_Callback);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, callback);
		}
		
		CURLcode Res = curl_easy_perform(curl);
		if (Res != CURLE_OK)
			return false;

		if (OutResponse)
			*OutResponse = callback;
	}
};

namespace Backend
{
	static API* api = nullptr;

	void Setup() // Call this at the start of the server
	{
		if (!api)
			api = new API();
	}

	// You must call Backend::Setup() before doing anything
	void Example()
	{
		if (!api) // You didn't call the Setup Function
			return;

		// your body, if you don't want a body you can just let it ""
		auto Body = "{\"SessionId\": \"YAYAYADZADZAD_Session_Id_Example\", \"Port\": \"7777\"}";

		// the response you will get 
		std::string response;
		api->Request(EReqType_GET, "http://gay.real.ong/matchmaker/idk/stuff/", Body, &response);

		// if it is a JSON response goodluck with jsoning on c++ LOL
	}

	// this is an example of a DELETE request
	void Example_DELETE()
	{
		if (!api) 
			return;

		// your body, if you don't want a body you can just let it ""
		auto Body = "{\"SessionId\": \"YAYAYADZADZAD_Session_Id_Example\", \"Port\": \"7777\"}";

		api->Request(EReqType_DELETE, "http://gay.real.ong/matchmaker/idk/stuff/", Body);

		// if it is a JSON response goodluck with jsoning on c++ LOL
	}
}