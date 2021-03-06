//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"
#import "FBNativeAdBaseView-Protocol.h"
#import "FBNativeAdDelegate-Protocol.h"

@class FBAdBodyView, FBAdIconView, FBAdOptionsView, FBNativeAdBase, FBNativeAdViewAttributes, NSArray, NSHashTable, NSString, UIButton, UILabel, UIViewController;

@interface FBNativeAdBaseView : UIView <FBNativeAdDelegate, FBNativeAdBaseView, FBAdUpdatableView>
{
    _Bool _loaded;
    UIViewController *_rootViewController;
    long long _type;
    FBNativeAdViewAttributes *_attributes;
    UIButton *_callToActionButton;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_socialContextLabel;
    FBAdIconView *_iconView;
    FBAdOptionsView *_adOptionsView;
    FBAdBodyView *_bodyView;
    UIView *_containerView;
    NSHashTable *_clickableViews;
    NSHashTable *_excludedClickableViews;
}

+ (id)defaultAttributes;
@property(retain, nonatomic) NSHashTable *excludedClickableViews; // @synthesize excludedClickableViews=_excludedClickableViews;
@property(retain, nonatomic) NSHashTable *clickableViews; // @synthesize clickableViews=_clickableViews;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak FBAdBodyView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak FBAdOptionsView *adOptionsView; // @synthesize adOptionsView=_adOptionsView;
@property(nonatomic) __weak FBAdIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *socialContextLabel; // @synthesize socialContextLabel=_socialContextLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(copy, nonatomic) FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (struct CGRect)bounds;
- (id)fixedHeight;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allInteractableTargets;
- (void)resetViews;
- (void)reset;
- (void)layoutSubviews;
- (void)updateView:(_Bool)arg1;
- (void)constructView;
- (_Bool)implementsSelector:(SEL)arg1;
- (void)updateClickableViews;
- (void)constructBodyView;
- (void)constructAdOptionsView;
- (void)constructIconView;
- (void)constructCallToActionButton;
- (void)initializeView;
- (void)updateAttributes:(id)arg1;
- (void)populate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)registerView;
@property(readonly, nonatomic) FBNativeAdBase *nativeAdBase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

