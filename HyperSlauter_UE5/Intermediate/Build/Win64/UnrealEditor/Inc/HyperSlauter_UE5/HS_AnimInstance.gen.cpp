// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperSlauter_UE5/HS_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHS_AnimInstance() {}
// Cross Module References
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_UHS_AnimInstance_NoRegister();
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_UHS_AnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_HyperSlauter_UE5();
	HYPERSLAUTER_UE5_API UClass* Z_Construct_UClass_AHS_Player_NoRegister();
// End Cross Module References
	void UHS_AnimInstance::StaticRegisterNativesUHS_AnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHS_AnimInstance);
	UClass* Z_Construct_UClass_UHS_AnimInstance_NoRegister()
	{
		return UHS_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHS_AnimInstance_Statics
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
	UObject* (*const Z_Construct_UClass_UHS_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperSlauter_UE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHS_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HS_AnimInstance.h" },
		{ "ModuleRelativePath", "HS_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHS_AnimInstance_Statics::NewProp__gameOwner_MetaData[] = {
		{ "ModuleRelativePath", "HS_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHS_AnimInstance_Statics::NewProp__gameOwner = { "_gameOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHS_AnimInstance, _gameOwner), Z_Construct_UClass_AHS_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHS_AnimInstance_Statics::NewProp__gameOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHS_AnimInstance_Statics::NewProp__gameOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHS_AnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHS_AnimInstance_Statics::NewProp__gameOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHS_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHS_AnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHS_AnimInstance_Statics::ClassParams = {
		&UHS_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHS_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHS_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHS_AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHS_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHS_AnimInstance()
	{
		if (!Z_Registration_Info_UClass_UHS_AnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHS_AnimInstance.OuterSingleton, Z_Construct_UClass_UHS_AnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHS_AnimInstance.OuterSingleton;
	}
	template<> HYPERSLAUTER_UE5_API UClass* StaticClass<UHS_AnimInstance>()
	{
		return UHS_AnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHS_AnimInstance);
	struct Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_AnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHS_AnimInstance, UHS_AnimInstance::StaticClass, TEXT("UHS_AnimInstance"), &Z_Registration_Info_UClass_UHS_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHS_AnimInstance), 2796335833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_AnimInstance_h_855028051(TEXT("/Script/HyperSlauter_UE5"),
		Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HyperSlauter_UE5_Source_HyperSlauter_UE5_HS_AnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
