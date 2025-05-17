// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Items/Inv_InventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_InventoryItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInv_InventoryItem
void UInv_InventoryItem::StaticRegisterNativesUInv_InventoryItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInv_InventoryItem);
UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister()
{
	return UInv_InventoryItem::StaticClass();
}
struct Z_Construct_UClass_UInv_InventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Inv_InventoryItem.h" },
		{ "ModuleRelativePath", "Public/Items/Inv_InventoryItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_InventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryItem_Statics::ClassParams = {
	&UInv_InventoryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryItem()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton, Z_Construct_UClass_UInv_InventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInv_InventoryItem>()
{
	return UInv_InventoryItem::StaticClass();
}
UInv_InventoryItem::UInv_InventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryItem);
UInv_InventoryItem::~UInv_InventoryItem() {}
// End Class UInv_InventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryItem, UInv_InventoryItem::StaticClass, TEXT("UInv_InventoryItem"), &Z_Registration_Info_UClass_UInv_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryItem), 3526918381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_3469470786(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
