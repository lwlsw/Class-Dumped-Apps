//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditFlairViewController, NSObject;
@protocol FlairProtocol;

@protocol EditFlairViewControllerDelegate <NSObject>
- (void)editFlairViewController:(EditFlairViewController *)arg1 didDeleteFlair:(NSObject<FlairProtocol> *)arg2;
- (void)editFlairViewController:(EditFlairViewController *)arg1 didEditFlair:(NSObject<FlairProtocol> *)arg2;
@end

