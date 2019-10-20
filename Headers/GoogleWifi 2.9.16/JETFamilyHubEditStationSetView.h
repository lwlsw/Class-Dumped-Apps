//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOTextFieldValidator-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class GOOTextField, GTLRAccesspoints_StationSet, JETButtonFooter, NSString, UILabel, UIScrollView;
@protocol JETFamilyHubEditStationSetViewDelegate;

@interface JETFamilyHubEditStationSetView : UIView <UITextViewDelegate, GOOTextFieldValidator>
{
    UILabel *_setNameLabel;
    GOOTextField *_setNameField;
    UIScrollView *_scrollView;
    JETButtonFooter *_footer;
    GTLRAccesspoints_StationSet *_stationSet;
    id <JETFamilyHubEditStationSetViewDelegate> _delegate;
    UIView *_assignableStationsView;
}

@property(nonatomic) __weak UIView *assignableStationsView; // @synthesize assignableStationsView=_assignableStationsView;
- (void).cxx_destruct;
- (id)validationResultsForTextField:(id)arg1;
@property(readonly, nonatomic) NSString *stationSetName;
- (void)addDevicesTapped;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithStationSet:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
