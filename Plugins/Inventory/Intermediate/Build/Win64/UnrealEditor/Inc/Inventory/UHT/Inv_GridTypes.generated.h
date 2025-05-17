// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/Inv_GridTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_Inv_GridTypes_generated_h
#error "Inv_GridTypes.generated.h already included, missing '#pragma once' in Inv_GridTypes.h"
#endif
#define INVENTORY_Inv_GridTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h


#define FOREACH_ENUM_EINV_ITEMCATEGORY(op) \
	op(EInv_ItemCategory::Equippable) \
	op(EInv_ItemCategory::Consumable) \
	op(EInv_ItemCategory::Craftable) \
	op(EInv_ItemCategory::None) 

enum class EInv_ItemCategory : uint8;
template<> struct TIsUEnumClass<EInv_ItemCategory> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
