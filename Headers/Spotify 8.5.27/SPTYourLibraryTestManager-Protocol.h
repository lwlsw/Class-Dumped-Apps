//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal;

@protocol SPTYourLibraryTestManager <NSObject>
@property(readonly, nonatomic) NSString *persistActiveTabRawValue;
@property(readonly, nonatomic, getter=isPersistActiveTabEnabled) _Bool persistActiveTabEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> persistActiveTabEnabledSignal;
@property(readonly, nonatomic, getter=isDoubleTabYourLibraryEnabled) _Bool doubleTabYourLibraryEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> doubleTabYourLibraryEnabledSignal;
@end

