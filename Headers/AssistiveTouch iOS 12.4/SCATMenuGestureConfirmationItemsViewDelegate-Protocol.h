//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATMenuGestureSheetViewDelegate-Protocol.h"

@class NSString, SCATModernMenuConfirmGestureSheet;

@protocol SCATMenuGestureConfirmationItemsViewDelegate <SCATMenuGestureSheetViewDelegate>
- (void)didCancelGesture:(SCATModernMenuConfirmGestureSheet *)arg1;
- (void)didRequestRedoGesture:(SCATModernMenuConfirmGestureSheet *)arg1;
- (void)didConfirmGesture:(SCATModernMenuConfirmGestureSheet *)arg1;
- (NSString *)nameForConfirmationButton:(SCATModernMenuConfirmGestureSheet *)arg1;
@end

