//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WACustomSwipeActionController;

@interface WAChatSessionCellProvider : NSObject
{
    long long _cellType;
    WACustomSwipeActionController *_actionsController;
}

- (void).cxx_destruct;
- (double)preferredHeight;
- (struct UITableViewCell *)cellWithReuseIdentifier:(id)arg1;
- (_Bool)isChatSessionCell:(id)arg1;
@property(readonly, nonatomic) WACustomSwipeActionController *actionsController;
- (id)init;

@end

