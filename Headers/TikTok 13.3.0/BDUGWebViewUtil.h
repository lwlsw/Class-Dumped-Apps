//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDUGWebViewUtil : NSObject
{
}

+ (id)paramStringForDictionary:(id)arg1;
+ (id)paramItemsForString:(id)arg1;
+ (id)jointQueryParamsDict:(id)arg1 toURL:(id)arg2;
+ (id)jointQueryParams:(id)arg1 toURL:(id)arg2;
+ (id)jointFragmentParamsDict:(id)arg1 toURL:(id)arg2;
+ (id)jointFragmentParams:(id)arg1 toURL:(id)arg2;
+ (id)webViewReferrer;
+ (void)setWebViewReferrer:(id)arg1;
+ (id)toutiaoUA;
+ (id)origUA;
+ (id)userAgentString:(_Bool)arg1;
+ (void)registerUserAgentV2:(_Bool)arg1;
+ (void)registerUserAgent:(_Bool)arg1;
+ (id)requestWithURL:(id)arg1 httpHeaderDict:(id)arg2 cachePolicy:(unsigned long long)arg3 timeoutInterval:(double)arg4;
+ (id)requestWithURL:(id)arg1 httpHeaderDict:(id)arg2;

@end

