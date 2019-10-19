//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PETimer : NSObject
{
    _Bool _suspended;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    double _delay;
    CDUnknownBlockType _wrappedBlock;
    NSObject<OS_dispatch_source> *_source;
}

+ (id)scheduledTimerWithDelay:(double)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithDelay:(double)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType wrappedBlock; // @synthesize wrappedBlock=_wrappedBlock;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)reschedule;
- (void)schedule;
- (id)initWithDelay:(double)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
