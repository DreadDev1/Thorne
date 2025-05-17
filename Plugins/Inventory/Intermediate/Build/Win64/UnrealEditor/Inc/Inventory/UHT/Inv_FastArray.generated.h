// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManagement/FastArray/Inv_FastArray.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_Inv_FastArray_generated_h
#error "Inv_FastArray.generated.h already included, missing '#pragma once' in Inv_FastArray.h"
#endif
#define INVENTORY_Inv_FastArray_generated_h

#define FID_Thorne_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FInv_InventoryEntry>();

#define FID_Thorne_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FInv_InventoryFastArray, Entries, INVENTORY_API );


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FInv_InventoryFastArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Thorne_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
