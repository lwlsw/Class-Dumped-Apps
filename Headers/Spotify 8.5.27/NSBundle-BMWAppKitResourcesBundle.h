//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (BMWAppKitResourcesBundle)
+ (id)bmw_BMWAppKitResourcesBundle;
+ (id)glue_resourceBundleInContainerBundle:(id)arg1;
+ (id)glue_findResourcesBundle;
+ (id)glue_resourcesBundle;
+ (id)glue_codeBundle;
+ (id)spt_localizationBundle;
- (_Bool)shouldReportNonLocalizedStrings;
- (id)cachedLocales;
- (id)cachedTables;
- (id)stringsWithContentsOfFile:(id)arg1 forLocalization:(id)arg2;
- (id)_pluralizedStringWithKey:(id)arg1 table:(id)arg2 pluralValue:(float)arg3 forLocalization:(id)arg4;
- (id)pluralizedStringWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 pluralValue:(float)arg4 forLocalization:(id)arg5;
- (id)pluralizedStringWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 pluralValue:(float)arg4;
- (_Bool)glue_isResourceBundle;
@end
