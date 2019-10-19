//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDCrashModel.h"

@class HMDCrashHeaderInfo, HMDCrashMetaData, HMDCrashProcessState, HMDCrashStorage, NSArray, NSDictionary, NSMutableString, NSString;

@interface HMDCrashInfo : HMDCrashModel
{
    NSMutableString *_str;
    _Bool _isJailBroken;
    _Bool _isCorrupted;
    _Bool _fileIOError;
    NSArray *_images;
    HMDCrashMetaData *_meta;
    HMDCrashHeaderInfo *_headerInfo;
    NSArray *_threads;
    HMDCrashProcessState *_processState;
    HMDCrashStorage *_storage;
    NSDictionary *_dynamicInfo;
    NSString *_sdklog;
}

@property(copy, nonatomic) NSString *sdklog; // @synthesize sdklog=_sdklog;
@property(nonatomic) _Bool fileIOError; // @synthesize fileIOError=_fileIOError;
@property(nonatomic) _Bool isCorrupted; // @synthesize isCorrupted=_isCorrupted;
@property(nonatomic) _Bool isJailBroken; // @synthesize isJailBroken=_isJailBroken;
@property(copy, nonatomic) NSDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) HMDCrashStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) HMDCrashProcessState *processState; // @synthesize processState=_processState;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) HMDCrashHeaderInfo *headerInfo; // @synthesize headerInfo=_headerInfo;
@property(retain, nonatomic) HMDCrashMetaData *meta; // @synthesize meta=_meta;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)tag:(id)arg1 format:(id)arg2 args:(char *)arg3;
- (void)error:(id)arg1;
- (void)warn:(id)arg1;
- (void)info:(id)arg1;
@property(readonly, nonatomic) NSString *processLog;
@property(readonly, nonatomic) _Bool isComplete;
- (id)init;

@end
