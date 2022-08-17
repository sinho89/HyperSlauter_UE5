// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperSlauter_UE5/HS_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHS_Player() {}
// Cross Module References
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHS_Player_NoRegister();
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHS_Player();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HyperSlauter_UE5();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AHS_Player::StaticRegisterNativesAHS_Player()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHS_Player);
	UClass* Z_Construct_UClass_AHS_Player_NoRegister()
	{
		return AHS_Player::StaticClass();
	}
	struct Z_Construct_UClass_AHS_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__cameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__cameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__springArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__springArmComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHS_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperSlauter_UE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHS_Player_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HS_Player.h" },
		{ "ModuleRelativePath", "HS_Player.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHS_Player_Statics::NewProp__cameraComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HS_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHS_Player_Statics::NewProp__cameraComp = { "_cameraComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHS_Player, _cameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHS_Player_Statics::NewProp__cameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Player_Statics::NewProp__cameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHS_Player_Statics::NewProp__springArmComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HS_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHS_Player_Statics::NewProp__springArmComp = { "_springArmComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHS_Player, _springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHS_Player_Statics::NewProp__springArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Player_Statics::NewProp__springArmComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHS_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHS_Player_Statics::NewProp__cameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHS_Player_Statics::NewProp__springArmComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHS_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHS_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHS_Player_Statics::ClassParams = {
		&AHS_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHS_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHS_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHS_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHS_Player()
	{
		if (!Z_Registration_Info_UClass_AHS_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHS_Player.OuterSingleton, Z_Construct_UClass_AHS_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHS_Player.OuterSingleton;
	}
	template<> HYPERSLAUTER_UE5_API UClass* StaticClass<AHS_Player>()
	{
		return AHS_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHS_Player);
	struct Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHS_Player, AHS_Player::StaticClass, TEXT("AHS_Player"), &Z_Registration_Info_UClass_AHS_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHS_Player), 3863901542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Player_h_879611249(TEXT("/Script/HyperSlauter_UE5"),
		Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
