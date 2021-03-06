//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YAMJSONable-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface YAMThreadBacktrace : NSObject <YAMJSONable>
{
    _Bool _crashed;
    NSDictionary *_registers;
    NSDictionary *_exceptionRegister;
    unsigned long long _threadIndex;
    unsigned long long _threadID;
    NSString *_threadName;
    NSString *_queueName;
    NSString *_digestMd5;
    unsigned long long _referCount;
    NSArray *_stackFrames;
}

+ (id)symboledStack:(unsigned long long)arg1;
+ (id)crashWithCursor:(struct yam_stack_cursor *)arg1;
+ (id)backtraceOfAllThreads;
+ (id)backtraceOfThread:(unsigned int)arg1;
+ (id)backtraceOfCurrentThreadSkippedDepth:(unsigned long long)arg1;
+ (id)backtraceOfCurrentThread;
+ (id)backtraceOfMainThread;
+ (void)load;
+ (void)setNeedDSymbol:(_Bool)arg1;
@property(retain, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(nonatomic) unsigned long long referCount; // @synthesize referCount=_referCount;
@property(copy, nonatomic) NSString *digestMd5; // @synthesize digestMd5=_digestMd5;
@property(retain, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(retain, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned long long threadIndex; // @synthesize threadIndex=_threadIndex;
@property(retain, nonatomic) NSDictionary *exceptionRegister; // @synthesize exceptionRegister=_exceptionRegister;
@property(retain, nonatomic) NSDictionary *registers; // @synthesize registers=_registers;
@property(nonatomic) _Bool crashed; // @synthesize crashed=_crashed;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)jsonObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

