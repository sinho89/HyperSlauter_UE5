// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperSlauter_UE5/HyperSlauter_UE5GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperSlauter_UE5GameModeBase() {}
// Cross Module References
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_NoRegister();
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHyperSlauter_UE5GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HyperSlauter_UE5();
// End Cross Module References
	void AHyperSlauter_UE5GameModeBase::StaticRegisterNativesAHyperSlauter_UE5GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHyperSlauter_UE5GameModeBase);
	UClass* Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_NoRegister()
	{
		return AHyperSlauter_UE5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperSlauter_UE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HyperSlauter_UE5GameModeBase.h" },
		{ "ModuleRelativePath", "HyperSlauter_UE5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHyperSlauter_UE5GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::ClassParams = {
		&AHyperSlauter_UE5GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHyperSlauter_UE5GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHyperSlauter_UE5GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHyperSlauter_UE5GameModeBase.OuterSingleton, Z_Construct_UClass_AHyperSlauter_UE5GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHyperSlauter_UE5GameModeBase.OuterSingleton;
	}
	template<> HYPERSLAUTER_UE5_API UClass* StaticClass<AHyperSlauter_UE5GameModeBase>()
	{
		return AHyperSlauter_UE5GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHyperSlauter_UE5GameModeBase);
	struct Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HyperSlauter_UE5GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HyperSlauter_UE5GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHyperSlauter_UE5GameModeBase, AHyperSlauter_UE5GameModeBase::StaticClass, TEXT("AHyperSlauter_UE5GameModeBase"), &Z_Registration_Info_UClass_AHyperSlauter_UE5GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHyperSlauter_UE5GameModeBase), 4041580264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HyperSlauter_UE5GameModeBase_h_1189883008(TEXT("/Script/HyperSlauter_UE5"),
		Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HyperSlauter_UE5GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HyperSlauter_UE5GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
