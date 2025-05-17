// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Widgets/Utils/Inv_WidgetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_WidgetUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetUtils();
INVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInv_WidgetUtils
void UInv_WidgetUtils::StaticRegisterNativesUInv_WidgetUtils()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInv_WidgetUtils);
UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister()
{
	return UInv_WidgetUtils::StaticClass();
}
struct Z_Construct_UClass_UInv_WidgetUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Utils/Inv_WidgetUtils.h" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_WidgetUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_WidgetUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_WidgetUtils_Statics::ClassParams = {
	&UInv_WidgetUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_WidgetUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_WidgetUtils()
{
	if (!Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton, Z_Construct_UClass_UInv_WidgetUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInv_WidgetUtils>()
{
	return UInv_WidgetUtils::StaticClass();
}
UInv_WidgetUtils::UInv_WidgetUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_WidgetUtils);
UInv_WidgetUtils::~UInv_WidgetUtils() {}
// End Class UInv_WidgetUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_WidgetUtils, UInv_WidgetUtils::StaticClass, TEXT("UInv_WidgetUtils"), &Z_Registration_Info_UClass_UInv_WidgetUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_WidgetUtils), 619863664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_4025899322(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Thorne_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
