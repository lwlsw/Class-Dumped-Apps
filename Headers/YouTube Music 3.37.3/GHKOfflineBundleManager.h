//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSHMOfflineBundleConfiguration, NSArray, NSBundle, NSDictionary, NSFileManager, NSMutableDictionary, NSString;

@interface GHKOfflineBundleManager : NSObject
{
    NSFileManager *_fileManager;
    NSBundle *_bundle;
    NSArray *_cachedAllFilePaths;
    CSHMOfflineBundleConfiguration *_cachedConfigurationProto;
    NSString *_cachedHelpcenterScriptElement;
    NSDictionary *_cachedDescriptorProtoMap;
    NSArray *_cachedDefaultRecommendationList;
    NSDictionary *_cachedContextualRecommendationMap;
    NSDictionary *_cachedFeelingLuckyRecommendationMap;
    NSMutableDictionary *_cachedContentProtoMap;
}

+ (id)filePathForBaseFileName:(id)arg1 localePreferences:(id)arg2 allFilePaths:(id)arg3;
+ (void)initialize;
- (void).cxx_destruct;
- (id)contentUnitForDescriptorProto:(id)arg1;
- (id)helpUnitsForDescriptorProtos:(id)arg1;
- (id)loadAndGunzipDataAtFilePath:(id)arg1;
- (id)filePathsContaining:(id)arg1;
- (id)getContentProtoForDescriptor:(id)arg1;
- (id)getFeelingLuckyRecommendationMap;
- (id)getContextualRecommendationMap;
- (id)getDefaultRecommendationList;
- (id)getDescriptorProtoMap;
- (id)getHelpcenterScriptElement;
- (id)getConfigurationProto;
- (id)getAllFilePaths;
- (id)renderedContentForContentUnit:(id)arg1;
- (id)feelingLuckyArticleForContext:(id)arg1;
- (id)helpUnitsForContext:(id)arg1;
- (void)setupWithBundle:(id)arg1;
- (id)init;

@end

