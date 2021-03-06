//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SGMSafeGuardLoggerManager : NSObject
{
    NSMutableArray *_loggerArr;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *loggerArr; // @synthesize loggerArr=_loggerArr;
- (void).cxx_destruct;
- (void)clearLegacyLogs;
- (void)upload:(unsigned long long)arg1;
- (void)logEvent:(id)arg1 infos:(id)arg2 details:(id)arg3;
- (void)logEventsFromArray:(id)arg1 additionInfos:(id)arg2;
- (void)logEvent:(id)arg1 category:(unsigned long long)arg2 customInfos:(id)arg3;
- (void)registLogger:(id)arg1;
- (void)didEndBackground;
- (void)willEnterForeground;
- (void)dealloc;
- (void)tryToRegistLoggers;
- (id)init;

@end

