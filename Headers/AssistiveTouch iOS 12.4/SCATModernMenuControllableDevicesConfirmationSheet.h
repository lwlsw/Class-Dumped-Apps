//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class AXSSInterDeviceSearchResult;
@protocol SCATModernMenuControllableDevicesConfirmationSheetDelegate;

@interface SCATModernMenuControllableDevicesConfirmationSheet : SCATModernMenuSheet
{
    _Bool _isPoppingToPreviousViewController;
    id <SCATModernMenuControllableDevicesConfirmationSheetDelegate> _delegate;
    AXSSInterDeviceSearchResult *_searchResult;
}

@property(nonatomic) _Bool isPoppingToPreviousViewController; // @synthesize isPoppingToPreviousViewController=_isPoppingToPreviousViewController;
@property(readonly, nonatomic) AXSSInterDeviceSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak id <SCATModernMenuControllableDevicesConfirmationSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewControllerViewWillDisappear:(_Bool)arg1;
- (_Bool)shouldKeepScannerAwake;
- (void)menuItemWasActivated:(id)arg1;
- (id)makeMenuItemsIfNeeded;
- (id)initWithMenu:(id)arg1 interDeviceSearchResult:(id)arg2;

@end
