//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PRMCollectible, PRMEventContext;
@protocol PRMTransmittable;

@protocol PRMTransmitter <NSObject>

@optional
- (void)sendCollectible:(PRMCollectible *)arg1 withEventContext:(PRMEventContext *)arg2;
- (void)sendTransmittable:(id <PRMTransmittable>)arg1 eventContext:(PRMEventContext *)arg2;
@end
