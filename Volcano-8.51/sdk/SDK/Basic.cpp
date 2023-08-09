#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{

void InitGObjects()
{
	UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + Offsets::GObjects);
}		

FName FSoftObjectPtr::GetAssetPathName()
{
	return ObjectID.AssetPathName;
}
FString FSoftObjectPtr::GetSubPathString()
{
	return ObjectID.SubPathString;
}

std::string FSoftObjectPtr::GetAssetPathNameStr()
{
	return ObjectID.AssetPathName.ToString();
}
std::string FSoftObjectPtr::GetSubPathStringStr()
{
	return ObjectID.SubPathString.ToString();
}

class UObject* FWeakObjectPtr::Get() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}

class UObject* FWeakObjectPtr::operator->() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}

bool FWeakObjectPtr::operator==(const FWeakObjectPtr& Other) const
{
	return ObjectIndex == Other.ObjectIndex;
}
bool FWeakObjectPtr::operator!=(const FWeakObjectPtr& Other) const
{
	return ObjectIndex != Other.ObjectIndex;
}

bool FWeakObjectPtr::operator==(const class UObject* Other) const
{
	return ObjectIndex == Other->Index;
}
bool FWeakObjectPtr::operator!=(const class UObject* Other) const
{
	return ObjectIndex != Other->Index;
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
