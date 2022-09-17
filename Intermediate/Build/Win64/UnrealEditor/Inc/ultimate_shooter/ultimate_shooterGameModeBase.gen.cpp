// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ultimate_shooter/ultimate_shooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeultimate_shooterGameModeBase() {}
// Cross Module References
	ULTIMATE_SHOOTER_API UClass* Z_Construct_UClass_Aultimate_shooterGameModeBase_NoRegister();
	ULTIMATE_SHOOTER_API UClass* Z_Construct_UClass_Aultimate_shooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ultimate_shooter();
// End Cross Module References
	void Aultimate_shooterGameModeBase::StaticRegisterNativesAultimate_shooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aultimate_shooterGameModeBase);
	UClass* Z_Construct_UClass_Aultimate_shooterGameModeBase_NoRegister()
	{
		return Aultimate_shooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ultimate_shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ultimate_shooterGameModeBase.h" },
		{ "ModuleRelativePath", "ultimate_shooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aultimate_shooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::ClassParams = {
		&Aultimate_shooterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aultimate_shooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_Aultimate_shooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aultimate_shooterGameModeBase.OuterSingleton, Z_Construct_UClass_Aultimate_shooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aultimate_shooterGameModeBase.OuterSingleton;
	}
	template<> ULTIMATE_SHOOTER_API UClass* StaticClass<Aultimate_shooterGameModeBase>()
	{
		return Aultimate_shooterGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aultimate_shooterGameModeBase);
	struct Z_CompiledInDeferFile_FID_ultimate_shooter_Source_ultimate_shooter_ultimate_shooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ultimate_shooter_Source_ultimate_shooter_ultimate_shooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aultimate_shooterGameModeBase, Aultimate_shooterGameModeBase::StaticClass, TEXT("Aultimate_shooterGameModeBase"), &Z_Registration_Info_UClass_Aultimate_shooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aultimate_shooterGameModeBase), 1578384003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ultimate_shooter_Source_ultimate_shooter_ultimate_shooterGameModeBase_h_1906762671(TEXT("/Script/ultimate_shooter"),
		Z_CompiledInDeferFile_FID_ultimate_shooter_Source_ultimate_shooter_ultimate_shooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ultimate_shooter_Source_ultimate_shooter_ultimate_shooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
