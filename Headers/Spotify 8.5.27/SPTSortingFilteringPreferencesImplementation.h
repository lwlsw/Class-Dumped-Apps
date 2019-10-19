//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringPreferences-Protocol.h"

@class NSString, NSURL;
@protocol SPTLocalSettings;

@interface SPTSortingFilteringPreferencesImplementation : NSObject <SPTSortingFilteringPreferences>
{
    NSURL *_entityURL;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
- (void).cxx_destruct;
- (id)filterRulesKey;
- (id)sortRuleKey;
- (id)preferredFilterRulesFromAvailableFilterRules:(id)arg1;
- (void)savePreferredFilteringRules:(id)arg1;
- (id)preferredSortingRuleFromAvailableSortingRules:(id)arg1 withDefaultSortRuleIdentifier:(id)arg2;
- (id)preferredSortingRuleFromAvailableSortingRules:(id)arg1;
- (void)savePreferredSortingRule:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 entityURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
