//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTSearchUISearchBarDelegate-Protocol.h"

@class NSArray, NSString, SPTSearchUISearchBar, SPTSearchUISearchControlsStyle, UIButton;
@protocol SPTSearchUISearchControlsDelegate;

@interface SPTSearchUISearchControls : UIView <SPTSearchUISearchBarDelegate, GLUEStyleable>
{
    NSArray *_horizontalSpacingConstraints;
    id <SPTSearchUISearchControlsDelegate> _delegate;
    SPTSearchUISearchControlsStyle *_style;
    SPTSearchUISearchBar *_searchBar;
    UIButton *_cancelButton;
    UIButton *_scannablesButton;
}

@property(readonly, nonatomic) UIButton *scannablesButton; // @synthesize scannablesButton=_scannablesButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) SPTSearchUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(copy, nonatomic) SPTSearchUISearchControlsStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <SPTSearchUISearchControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)constraintsForViewsDistributedHorizontally:(id)arg1;
- (id)constraintsForViewsAlignedAlongFirstBaselines:(id)arg1;
- (id)verticalConstraintsForViews:(id)arg1 inContainer:(id)arg2;
- (void)cancelButtonPressed;
- (void)scannablesButtonPressed;
- (void)updateScannablesButtonAppearance;
- (void)updateCancelButtonAppearance;
- (void)updateSearchBarAppearance;
- (void)updateAppearance;
- (void)setUpConstraints;
- (void)setUpViewHierarchy;
- (void)setUpViewsWithCancelButtonTitle:(id)arg1;
- (id)arrangedViews;
- (void)searchBarDidPressReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeTextFrom:(id)arg2;
- (void)glue_applyStyle:(id)arg1;
- (_Bool)becomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) NSArray *horizontalSpacingConstraints; // @synthesize horizontalSpacingConstraints=_horizontalSpacingConstraints;
@property(copy, nonatomic) NSString *scannablesButtonAccessibilityLabel;
@property(copy, nonatomic) NSString *clearButtonAccessibilityLabel;
@property(copy, nonatomic) NSString *placeholderText;
@property(copy, nonatomic) NSString *text;
- (id)initWithCancelButtonTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
