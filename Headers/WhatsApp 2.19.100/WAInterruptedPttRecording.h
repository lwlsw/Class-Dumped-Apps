//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAChatJID;

@interface WAInterruptedPttRecording : NSObject
{
    double _duration;
    WAChatJID *_chatJID;
}

@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *path;
- (id)initWithChatJID:(id)arg1 duration:(double)arg2;

@end

