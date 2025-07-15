// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unreal_homework_06/Public/Rotating_Board.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotating_Board() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREAL_HOMEWORK_06_API UClass* Z_Construct_UClass_ARotating_Board();
UNREAL_HOMEWORK_06_API UClass* Z_Construct_UClass_ARotating_Board_NoRegister();
UPackage* Z_Construct_UPackage__Script_unreal_homework_06();
// End Cross Module References

// Begin Class ARotating_Board
void ARotating_Board::StaticRegisterNativesARotating_Board()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotating_Board);
UClass* Z_Construct_UClass_ARotating_Board_NoRegister()
{
	return ARotating_Board::StaticClass();
}
struct Z_Construct_UClass_ARotating_Board_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Rotating_Board.h" },
		{ "ModuleRelativePath", "Public/Rotating_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_StaticMesh_MetaData[] = {
		{ "Category", "Rotation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rotating_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bRotate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Rotating_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bClockWise_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Rotating_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_fRotatingSpeed_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Rotating_Board.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_StaticMesh;
	static void NewProp_m_bRotate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bRotate;
	static void NewProp_m_bClockWise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bClockWise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fRotatingSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotating_Board>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_StaticMesh = { "m_StaticMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotating_Board, m_StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_StaticMesh_MetaData), NewProp_m_StaticMesh_MetaData) };
void Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bRotate_SetBit(void* Obj)
{
	((ARotating_Board*)Obj)->m_bRotate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bRotate = { "m_bRotate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARotating_Board), &Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bRotate_MetaData), NewProp_m_bRotate_MetaData) };
void Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bClockWise_SetBit(void* Obj)
{
	((ARotating_Board*)Obj)->m_bClockWise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bClockWise = { "m_bClockWise", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARotating_Board), &Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bClockWise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bClockWise_MetaData), NewProp_m_bClockWise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_fRotatingSpeed = { "m_fRotatingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotating_Board, m_fRotatingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_fRotatingSpeed_MetaData), NewProp_m_fRotatingSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotating_Board_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_bClockWise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotating_Board_Statics::NewProp_m_fRotatingSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotating_Board_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotating_Board_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_unreal_homework_06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotating_Board_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotating_Board_Statics::ClassParams = {
	&ARotating_Board::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotating_Board_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotating_Board_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotating_Board_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotating_Board_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotating_Board()
{
	if (!Z_Registration_Info_UClass_ARotating_Board.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotating_Board.OuterSingleton, Z_Construct_UClass_ARotating_Board_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotating_Board.OuterSingleton;
}
template<> UNREAL_HOMEWORK_06_API UClass* StaticClass<ARotating_Board>()
{
	return ARotating_Board::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotating_Board);
ARotating_Board::~ARotating_Board() {}
// End Class ARotating_Board

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Rotating_Board_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotating_Board, ARotating_Board::StaticClass, TEXT("ARotating_Board"), &Z_Registration_Info_UClass_ARotating_Board, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotating_Board), 76537226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Rotating_Board_h_4010594133(TEXT("/Script/unreal_homework_06"),
	Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Rotating_Board_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Rotating_Board_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
