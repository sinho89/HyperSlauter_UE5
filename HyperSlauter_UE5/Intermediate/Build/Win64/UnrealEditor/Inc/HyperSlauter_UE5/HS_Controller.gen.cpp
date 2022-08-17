// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperSlauter_UE5/HS_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHS_Controller() {}
// Cross Module References
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHS_Controller_NoRegister();
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHS_Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HyperSlauter_UE5();
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHS_Player_NoRegister();
// End Cross Module References
	void AHS_Controller::StaticRegisterNativesAHS_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHS_Controller);
	UClass* Z_Construct_UClass_AHS_Controller_NoRegister()
	{
		return AHS_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AHS_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__gameOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__gameOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHS_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperSlauter_UE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHS_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HS_Controller.h" },
		{ "ModuleRelativePath", "HS_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHS_Controller_Statics::NewProp__gameOwner_MetaData[] = {
		{ "ModuleRelativePath", "HS_Controller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHS_Controller_Statics::NewProp__gameOwner = { "_gameOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHS_Controller, _gameOwner), Z_Construct_UClass_AHS_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHS_Controller_Statics::NewProp__gameOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Controller_Statics::NewProp__gameOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHS_Controller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHS_Controller_Statics::NewProp__gameOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHS_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHS_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHS_Controller_Statics::ClassParams = {
		&AHS_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHS_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHS_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHS_Controller()
	{
		if (!Z_Registration_Info_UClass_AHS_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHS_Controller.OuterSingleton, Z_Construct_UClass_AHS_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHS_Controller.OuterSingleton;
	}
	template<> HYPERSLAUTER_UE5_API UClass* StaticClass<AHS_Controller>()
	{
		return AHS_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHS_Controller);
	struct Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHS_Controller, AHS_Controller::StaticClass, TEXT("AHS_Controller"), &Z_Registration_Info_UClass_AHS_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHS_Controller), 1870832764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Controller_h_272041480(TEXT("/Script/HyperSlauter_UE5"),
		Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
