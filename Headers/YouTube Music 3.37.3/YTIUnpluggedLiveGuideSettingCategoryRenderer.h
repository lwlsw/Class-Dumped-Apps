//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTICommand, YTIFormattedString, YTIIcon;

@interface YTIUnpluggedLiveGuideSettingCategoryRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int categoryId; // @dynamic categoryId;
@property(nonatomic) _Bool hasCategoryId; // @dynamic hasCategoryId;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUnpluggedUpdateLiveGuideOrderCommand; // @dynamic hasUnpluggedUpdateLiveGuideOrderCommand;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTICommand *unpluggedUpdateLiveGuideOrderCommand; // @dynamic unpluggedUpdateLiveGuideOrderCommand;

@end

