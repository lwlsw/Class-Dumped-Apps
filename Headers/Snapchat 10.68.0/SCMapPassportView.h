//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCMapPassportCharmsView, SCMapPassportViewModel, UILabel;

@interface SCMapPassportView : SCComposerView
{
}

@property(readonly, nonatomic) SCComposerView *actionSheet;
@property(readonly, nonatomic) SCComposerView *dismissButton;
@property(readonly, nonatomic) SCComposerView *pageHeader;
@property(readonly, nonatomic) UILabel *highlightsHeader;
@property(readonly, nonatomic) SCMapPassportCharmsView *charmsSection;
@property(readonly, nonatomic) UILabel *charmsHeader;
@property(readonly, nonatomic) SCComposerView *backgroundGradient;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(readonly, nonatomic) SCMapPassportView *root;
@property(retain, nonatomic) SCMapPassportViewModel *viewModel;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
- (id)bundleName;
- (id)viewName;
- (id)init;

@end
