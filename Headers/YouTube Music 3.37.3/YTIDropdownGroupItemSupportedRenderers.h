//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIDropdownItemRenderer, YTIShelfTypeDropdownItemRenderer;

@interface YTIDropdownGroupItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDropdownItemRenderer *dropdownItemRenderer; // @dynamic dropdownItemRenderer;
@property(nonatomic) _Bool hasDropdownItemRenderer; // @dynamic hasDropdownItemRenderer;
@property(nonatomic) _Bool hasShelfTypeDropdownItemRenderer; // @dynamic hasShelfTypeDropdownItemRenderer;
@property(retain, nonatomic) YTIShelfTypeDropdownItemRenderer *shelfTypeDropdownItemRenderer; // @dynamic shelfTypeDropdownItemRenderer;

@end
