//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTIHorizontalCardListRenderer;

@protocol YTHorizontalCardListRendererInfoProvider <NSObject>
- (_Bool)isHeterogeneousForHorizontalCardListRenderer:(YTIHorizontalCardListRenderer *)arg1;
- (YTIHorizontalCardListRenderer *)horizontalCardListRendererForEntry:(id)arg1;
- (void)unRegisterHorizontalCardListRenderer:(YTIHorizontalCardListRenderer *)arg1;
- (void)registerHorizontalCardListRenderer:(YTIHorizontalCardListRenderer *)arg1;
@end
