//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SCOnDemandGeofilterGeofenceUtil, UIButton, UILabel, UITableView, UITextField;
@protocol SCOnDemandGeofilterMapSearchViewDelegate, SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterMapSearchView : UIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    UITableView *_tableView;
    NSArray *_dataModels;
    UITextField *_textField;
    UILabel *_textLabel;
    UIButton *_backButton;
    UIButton *_cancelButton;
    UIView *_headerView;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    UIView *_separatorView;
    struct CGRect _keyboardrect;
    double _keyboardDuration;
    NSTimer *_timer;
    NSString *_lastRequestText;
    SCOnDemandGeofilterGeofenceUtil *_geofenceUtility;
    UIButton *_searchBackgroundView;
    NSArray *_lastDataModels;
    _Bool _enableV11Theme;
    UIView *_canvasViewDelegate;
    id <SCOnDemandGeofilterMapSearchViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOnDemandGeofilterMapSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *canvasViewDelegate; // @synthesize canvasViewDelegate=_canvasViewDelegate;
- (void).cxx_destruct;
- (double)tableViewTopOffset;
- (void)_updateTextLabelBasedOnTextField:(id)arg1;
- (id)_transformToAttributedString:(id)arg1;
- (void)_resetTableView;
- (void)_updateHeaderSperatorLineColor;
- (id)transformDataModelToViewModel:(id)arg1;
- (void)_keyboardWillShown:(id)arg1;
- (void)_keyboardDidShown:(id)arg1;
- (double)_heightForTableView:(long long)arg1;
- (void)_endEditing;
- (void)_didPressHeader:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_setupHeaderView;
- (void)_updateTableViewBasedOnDataModels;
- (void)searchWithQuery:(id)arg1;
- (void)requestQuery;
- (void)editingChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)didTapCancelButton;
- (void)didTapBackButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateSearchFieldTextContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 geofilterSession:(id)arg2 enableV11Theme:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 geofilterSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

