// Copyright 2016-2019 Vladimir Alyamkin. All Rights Reserved.

#pragma once

#include "AssetTypeActions_Base.h"

/**
* VtaTextureAtlasAsset actions
*/
class VATEXATLASEDITORPLUGIN_API FVtaTextureAtlasAssetActions : public FAssetTypeActions_Base
{

public:
	// IAssetTypeActions interface
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return true; }
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
	virtual uint32 GetCategories() override;
	virtual bool IsImportedAsset() const override;
	virtual void GetResolvedSourceFilePaths(const TArray<UObject*>& TypeAssets, TArray<FString>& OutSourceFilePaths) const override;
	// End of IAssetTypeActions interface
};
