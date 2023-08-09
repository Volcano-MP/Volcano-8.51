#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KismetProceduralMeshLibrary");
		return Clss;
	}

	void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing);
	void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles);
	void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing);
	void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	void CalculateTangentsForMesh(TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector2D>& UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
};

// 0x68 (0x480 - 0x418)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_2BA2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseComplexAsSimpleCollision;                      // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncCooking;                                  // 0x421(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x430(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x440(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x450(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x470(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralMeshComponent");
		return Clss;
	}

	void UpdateMeshSection_LinearColor(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FVector2D>& UV1, TArray<struct FVector2D>& UV2, TArray<struct FVector2D>& UV3, TArray<struct FLinearColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents);
	void UpdateMeshSection(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int32 SectionIndex);
	int32 GetNumSections();
	void CreateMeshSection_LinearColor(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FVector2D>& UV1, TArray<struct FVector2D>& UV2, TArray<struct FVector2D>& UV3, TArray<struct FLinearColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void CreateMeshSection(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
