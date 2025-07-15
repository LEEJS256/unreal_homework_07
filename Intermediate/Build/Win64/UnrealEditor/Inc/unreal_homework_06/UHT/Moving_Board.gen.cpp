// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unreal_homework_06/Public/Moving_Board.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoving_Board() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREAL_HOMEWORK_06_API UClass* Z_Construct_UClass_AMoving_Board();
UNREAL_HOMEWORK_06_API UClass* Z_Construct_UClass_AMoving_Board_NoRegister();
UPackage* Z_Construct_UPackage__Script_unreal_homework_06();
// End Cross Module References

// Begin Class AMoving_Board
void AMoving_Board::StaticRegisterNativesAMoving_Board()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoving_Board);
UClass* Z_Construct_UClass_AMoving_Board_NoRegister()
{
	return AMoving_Board::StaticClass();
}
struct Z_Construct_UClass_AMoving_Board_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Moving_Board.h" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_StaticMesh_MetaData[] = {
		{ "Category", "Platform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MoveDirection_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bMove_X_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bMove_Y_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bStop_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MoveDistance_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_Speed_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/Moving_Board.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_MoveDirection;
	static void NewProp_m_bMove_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bMove_X;
	static void NewProp_m_bMove_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bMove_Y;
	static void NewProp_m_bStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bStop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_MoveDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoving_Board>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_StaticMesh = { "m_StaticMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoving_Board, m_StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_StaticMesh_MetaData), NewProp_m_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_MoveDirection = { "m_MoveDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoving_Board, m_MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MoveDirection_MetaData), NewProp_m_MoveDirection_MetaData) };
void Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_X_SetBit(void* Obj)
{
	((AMoving_Board*)Obj)->m_bMove_X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_X = { "m_bMove_X", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoving_Board), &Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_X_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bMove_X_MetaData), NewProp_m_bMove_X_MetaData) };
void Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_Y_SetBit(void* Obj)
{
	((AMoving_Board*)Obj)->m_bMove_Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_Y = { "m_bMove_Y", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoving_Board), &Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_Y_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bMove_Y_MetaData), NewProp_m_bMove_Y_MetaData) };
void Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bStop_SetBit(void* Obj)
{
	((AMoving_Board*)Obj)->m_bStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bStop = { "m_bStop", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoving_Board), &Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bStop_MetaData), NewProp_m_bStop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_MoveDistance = { "m_MoveDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoving_Board, m_MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MoveDistance_MetaData), NewProp_m_MoveDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_Speed = { "m_Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoving_Board, m_Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_Speed_MetaData), NewProp_m_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoving_Board_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_MoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bMove_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_bStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_MoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Board_Statics::NewProp_m_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_Board_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoving_Board_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_unreal_homework_06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_Board_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoving_Board_Statics::ClassParams = {
	&AMoving_Board::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoving_Board_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_Board_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_Board_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoving_Board_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoving_Board()
{
	if (!Z_Registration_Info_UClass_AMoving_Board.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoving_Board.OuterSingleton, Z_Construct_UClass_AMoving_Board_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoving_Board.OuterSingleton;
}
template<> UNREAL_HOMEWORK_06_API UClass* StaticClass<AMoving_Board>()
{
	return AMoving_Board::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoving_Board);
AMoving_Board::~AMoving_Board() {}
// End Class AMoving_Board

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Moving_Board_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoving_Board, AMoving_Board::StaticClass, TEXT("AMoving_Board"), &Z_Registration_Info_UClass_AMoving_Board, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoving_Board), 1613060389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Moving_Board_h_1411484599(TEXT("/Script/unreal_homework_06"),
	Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Moving_Board_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Moving_Board_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
