//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, NSURL;

@protocol TIMClientProtocol <NSObject>
- (void)sendRequestWithMethod:(NSString *)arg1 url:(NSURL *)arg2 timeout:(double)arg3 priority:(float)arg4 headers:(NSDictionary *)arg5 body:(NSData *)arg6 withCallback:(void (^)(NSError *, long long, NSDictionary *, NSData *))arg7;
@end

