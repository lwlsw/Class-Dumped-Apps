//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEPublishShareManager : NSObject
{
}

+ (void)showToast:(id)arg1;
+ (id)nameForPlatform:(long long)arg1;
+ (void)dismissRedirectToolTip:(id)arg1;
+ (void)showRedirectToolTipForSelectedPlatform:(long long)arg1 onView:(id)arg2;
+ (void)dismissRedirectToolTipIfNeeded;
+ (void)showRedirectToolTipIfNeededForSelectedPlatform:(long long)arg1 onView:(id)arg2;
+ (void)sharePublishedAweme:(id)arg1 withVideoURL:(id)arg2 onPlatform:(long long)arg3;
+ (void)sharePublishedAwemeIfNeeded:(id)arg1 viewModel:(id)arg2 delay:(double)arg3;
+ (id)platforms;
+ (void)clearLastSelectedPlatform;
+ (long long)lastSelectedPlatform;
+ (_Bool)isFeatureEnabled;

@end

