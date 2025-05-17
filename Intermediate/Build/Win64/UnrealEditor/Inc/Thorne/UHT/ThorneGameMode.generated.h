// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/ThorneGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THORNE_ThorneGameMode_generated_h
#error "ThorneGameMode.generated.h already included, missing '#pragma once' in ThorneGameMode.h"
#endif
#define THORNE_ThorneGameMode_generated_h

#define FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThorneGameMode(); \
	friend struct Z_Construct_UClass_AThorneGameMode_Statics; \
public: \
	DECLARE_CLASS(AThorneGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Thorne"), THORNE_API) \
	DECLARE_SERIALIZER(AThorneGameMode)


#define FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThorneGameMode(AThorneGameMode&&); \
	AThorneGameMode(const AThorneGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THORNE_API, AThorneGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThorneGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThorneGameMode) \
	THORNE_API virtual ~AThorneGameMode();


#define FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h_9_PROLOG
#define FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THORNE_API UClass* StaticClass<class AThorneGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Thorne_Source_Thorne_Public_Framework_ThorneGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
