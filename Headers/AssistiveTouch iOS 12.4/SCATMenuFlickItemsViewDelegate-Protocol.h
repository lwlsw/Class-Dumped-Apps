//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATMenuGestureSheetViewDelegate-Protocol.h"

@class SCATModernMenuGestureFlickSheet;

@protocol SCATMenuFlickItemsViewDelegate <SCATMenuGestureSheetViewDelegate>
- (void)didChooseArbitraryFlick:(SCATModernMenuGestureFlickSheet *)arg1;
- (void)didChooseFlickDown:(SCATModernMenuGestureFlickSheet *)arg1;
- (void)didChooseFlickUp:(SCATModernMenuGestureFlickSheet *)arg1;
- (void)didChooseFlickRight:(SCATModernMenuGestureFlickSheet *)arg1;
- (void)didChooseFlickLeft:(SCATModernMenuGestureFlickSheet *)arg1;
@end
