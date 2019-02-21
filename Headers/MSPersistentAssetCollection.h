//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSAssetCollection.h>

@class MSVersionedArchive;

@interface MSPersistentAssetCollection : MSAssetCollection
{
    MSVersionedArchive *_archive;
}

+ (id)assetCollectionFromCurrentBundleWithName:(id)arg1;
+ (Class)immutableClass;
+ (id)assetCollectionWithName:(id)arg1;
+ (id)sharedGlobalAssets;
+ (id)assetCollectionByMigratingPresetsFromSources:(id)arg1;
+ (id)defaultMigrationArchiveForPresetNamed:(id)arg1;
+ (id)defaultMigrationSources;
@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (void)addNoiseImagesIfNeededForVersion:(long long)arg1 withName:(id)arg2;
- (void)migrateForLocalizationIfNeeded:(long long)arg1;
- (id)resourceNeedingMigration;
- (void)cleanupAfterTesting;
- (void)save;

@end
