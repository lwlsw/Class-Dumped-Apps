//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol XLSICll <NSObject>
+ (void)apiSignInEvent:(_Bool)arg1 withState:(NSString *)arg2;
+ (id)sharedTelemetryManager;
- (NSString *)getAppBundleName;
- (NSString *)getAppSessionId;
- (void)setPreviousPage:(NSString *)arg1;
- (void)setCurrentPage:(NSString *)arg1;
- (void)setTitleSessionId:(NSString *)arg1;
- (void)setCurrentUser:(NSString *)arg1;
- (int)serviceErrorEvent:(NSString *)arg1 errorText:(NSString *)arg2 errorCode:(NSString *)arg3 withData:(NSDictionary *)arg4 onPage:(NSString *)arg5;
- (int)serviceErrorEvent:(NSString *)arg1 errorText:(NSString *)arg2 errorCode:(NSString *)arg3 withData:(NSDictionary *)arg4;
- (int)serviceErrorEvent:(NSString *)arg1 errorText:(NSString *)arg2 errorCode:(NSString *)arg3;
- (int)clientErrorEvent:(NSString *)arg1 errorText:(NSString *)arg2 errorCode:(NSString *)arg3 callStack:(NSString *)arg4 withData:(NSDictionary *)arg5 onPage:(NSString *)arg6;
- (int)clientErrorEvent:(NSString *)arg1 errorText:(NSString *)arg2 errorCode:(NSString *)arg3 callStack:(NSString *)arg4 withData:(NSDictionary *)arg5;
- (int)clientErrorEvent:(NSString *)arg1 errorText:(NSString *)arg2 errorCode:(NSString *)arg3 callStack:(NSString *)arg4;
- (int)pageActionEvent:(NSString *)arg1 withData:(NSDictionary *)arg2 onPage:(NSString *)arg3;
- (int)pageActionEvent:(NSString *)arg1 withData:(NSDictionary *)arg2;
- (int)pageActionEvent:(NSString *)arg1;
- (int)pageViewEvent:(NSString *)arg1 withData:(NSDictionary *)arg2 fromPage:(NSString *)arg3;
- (int)pageViewEvent:(NSString *)arg1 withData:(NSDictionary *)arg2;
- (int)pageViewEvent:(NSString *)arg1;
@end

