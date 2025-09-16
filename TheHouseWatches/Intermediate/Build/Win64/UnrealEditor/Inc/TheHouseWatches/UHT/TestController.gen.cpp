// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
THEHOUSEWATCHES_API UClass* Z_Construct_UClass_ATestController();
THEHOUSEWATCHES_API UClass* Z_Construct_UClass_ATestController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheHouseWatches();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestController **********************************************************
void ATestController::StaticRegisterNativesATestController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATestController;
UClass* ATestController::GetPrivateStaticClass()
{
	using TClass = ATestController;
	if (!Z_Registration_Info_UClass_ATestController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestController"),
			Z_Registration_Info_UClass_ATestController.InnerSingleton,
			StaticRegisterNativesATestController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATestController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestController_NoRegister()
{
	return ATestController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TestController.h" },
		{ "ModuleRelativePath", "Public/TestController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheHouseWatches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestController_Statics::ClassParams = {
	&ATestController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestController()
{
	if (!Z_Registration_Info_UClass_ATestController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestController.OuterSingleton, Z_Construct_UClass_ATestController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestController.OuterSingleton;
}
ATestController::ATestController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestController);
ATestController::~ATestController() {}
// ********** End Class ATestController ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_laure_OneDrive_Desktop_TheHouseWatches_Studio_Project_TheHouseWatches_Source_TheHouseWatches_Public_TestController_h__Script_TheHouseWatches_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestController, ATestController::StaticClass, TEXT("ATestController"), &Z_Registration_Info_UClass_ATestController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestController), 1776014039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laure_OneDrive_Desktop_TheHouseWatches_Studio_Project_TheHouseWatches_Source_TheHouseWatches_Public_TestController_h__Script_TheHouseWatches_1282583126(TEXT("/Script/TheHouseWatches"),
	Z_CompiledInDeferFile_FID_Users_laure_OneDrive_Desktop_TheHouseWatches_Studio_Project_TheHouseWatches_Source_TheHouseWatches_Public_TestController_h__Script_TheHouseWatches_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laure_OneDrive_Desktop_TheHouseWatches_Studio_Project_TheHouseWatches_Source_TheHouseWatches_Public_TestController_h__Script_TheHouseWatches_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
