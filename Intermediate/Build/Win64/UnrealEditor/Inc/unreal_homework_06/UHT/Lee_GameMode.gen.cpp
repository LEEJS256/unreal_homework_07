// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unreal_homework_06/Public/Lee_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLee_GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UNREAL_HOMEWORK_06_API UClass* Z_Construct_UClass_ALee_GameMode();
UNREAL_HOMEWORK_06_API UClass* Z_Construct_UClass_ALee_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_unreal_homework_06();
// End Cross Module References

// Begin Class ALee_GameMode
void ALee_GameMode::StaticRegisterNativesALee_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALee_GameMode);
UClass* Z_Construct_UClass_ALee_GameMode_NoRegister()
{
	return ALee_GameMode::StaticClass();
}
struct Z_Construct_UClass_ALee_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lee_GameMode.h" },
		{ "ModuleRelativePath", "Public/Lee_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALee_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALee_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_unreal_homework_06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALee_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALee_GameMode_Statics::ClassParams = {
	&ALee_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALee_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALee_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALee_GameMode()
{
	if (!Z_Registration_Info_UClass_ALee_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALee_GameMode.OuterSingleton, Z_Construct_UClass_ALee_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALee_GameMode.OuterSingleton;
}
template<> UNREAL_HOMEWORK_06_API UClass* StaticClass<ALee_GameMode>()
{
	return ALee_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALee_GameMode);
ALee_GameMode::~ALee_GameMode() {}
// End Class ALee_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Lee_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALee_GameMode, ALee_GameMode::StaticClass, TEXT("ALee_GameMode"), &Z_Registration_Info_UClass_ALee_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALee_GameMode), 1497467176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Lee_GameMode_h_1527828270(TEXT("/Script/unreal_homework_06"),
	Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Lee_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_Lee_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
