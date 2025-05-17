// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ThorneCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THORNE_ThorneCharacter_generated_h
#error "ThorneCharacter.generated.h already included, missing '#pragma once' in ThorneCharacter.h"
#endif
#define THORNE_ThorneCharacter_generated_h

#define FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThorneCharacter(); \
	friend struct Z_Construct_UClass_AThorneCharacter_Statics; \
public: \
	DECLARE_CLASS(AThorneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Thorne"), NO_API) \
	DECLARE_SERIALIZER(AThorneCharacter)


#define FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThorneCharacter(AThorneCharacter&&); \
	AThorneCharacter(const AThorneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThorneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThorneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThorneCharacter) \
	NO_API virtual ~AThorneCharacter();


#define FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h_18_PROLOG
#define FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THORNE_API UClass* StaticClass<class AThorneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Thorne_Source_Thorne_Public_Character_ThorneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
