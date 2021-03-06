//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActiveStateProfileProcessingHelper-Protocol.h"

@class NSMutableDictionary, NSString, YTActiveStateAnimationProcessing, YTActiveStateProfile, YTActiveStateTheme, YTActiveStateTransitionOutputContext, YTScrollFocusContext;

@interface YTActiveStateProcessingHelper : NSObject <YTActiveStateProfileProcessingHelper>
{
    YTActiveStateProfile *_activeStateSelectionProfile;
    long long _activeStateProfileCategory;
    long long _activeStateEntityTrait;
    YTActiveStateTheme *_activeStateTheme;
    YTActiveStateProfile *_overrideActiveStateProfile;
    YTActiveStateAnimationProcessing *_asiAnimationProcessing;
    struct NSMutableDictionary *_originalViewPropertyMap;
    YTActiveStateProfile *_currentActiveStateProfile;
    YTScrollFocusContext *_currentScrollFocusContext;
    YTActiveStateTransitionOutputContext *_activeStateTransitionOutputContext;
    id _entity;
}

@property(readonly, nonatomic) __weak id entity; // @synthesize entity=_entity;
@property(retain, nonatomic) YTActiveStateTransitionOutputContext *activeStateTransitionOutputContext; // @synthesize activeStateTransitionOutputContext=_activeStateTransitionOutputContext;
@property(retain, nonatomic) NSMutableDictionary *originalViewPropertyMap; // @synthesize originalViewPropertyMap=_originalViewPropertyMap;
@property(retain, nonatomic) YTActiveStateAnimationProcessing *asiAnimationProcessing; // @synthesize asiAnimationProcessing=_asiAnimationProcessing;
@property(retain, nonatomic) YTActiveStateProfile *overrideActiveStateProfile; // @synthesize overrideActiveStateProfile=_overrideActiveStateProfile;
@property(nonatomic) long long activeStateEntityTrait; // @synthesize activeStateEntityTrait=_activeStateEntityTrait;
@property(nonatomic) long long activeStateProfileCategory; // @synthesize activeStateProfileCategory=_activeStateProfileCategory;
@property(retain, nonatomic) YTActiveStateProfile *activeStateSelectionProfile; // @synthesize activeStateSelectionProfile=_activeStateSelectionProfile;
- (void).cxx_destruct;
- (void)processActiveStateTransition:(id)arg1 forTransitionViewProperty:(long long)arg2 withScrollFocusContext:(id)arg3;
- (void)processActiveStateProfile:(id)arg1 withScrollFocusContext:(id)arg2;
- (void)reset;
- (void)populateOriginalMap;
- (long long)pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)activeStateSettingsDidChangeWithTheme:(id)arg1;
- (void)activeStateResetForReuse;
- (void)scrollFocusDidChangeWithContext:(id)arg1;
@property(retain, nonatomic) YTScrollFocusContext *currentScrollFocusContext; // @synthesize currentScrollFocusContext=_currentScrollFocusContext;
@property(retain, nonatomic) YTActiveStateProfile *currentActiveStateProfile; // @synthesize currentActiveStateProfile=_currentActiveStateProfile;
@property(retain, nonatomic) YTActiveStateTheme *activeStateTheme; // @synthesize activeStateTheme=_activeStateTheme;
- (id)initWithNode:(id)arg1 activeStateProfileCategory:(long long)arg2;
- (id)initWithView:(id)arg1 activeStateProfileCategory:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

