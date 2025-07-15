// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef UNREAL_HOMEWORK_06_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define UNREAL_HOMEWORK_06_MyPlayer_generated_h

#define FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/unreal_homework_06"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayer(AMyPlayer&&); \
	AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer) \
	NO_API virtual ~AMyPlayer();


#define FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_10_PROLOG
#define FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_HOMEWORK_06_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_unreal_homework_06_Source_unreal_homework_06_Public_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
