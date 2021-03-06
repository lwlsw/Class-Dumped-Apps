//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveWebViewService-Protocol.h"

@class NSString;
@protocol IESLiveTracker;

@interface AWELiveWebViewServiceImp : NSObject <IESLiveWebViewService>
{
    id <IESLiveTracker> _tracker;
}

@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)unregisterUserAgent;
- (void)registerUserAgentWithWKWebView:(id)arg1;
- (id)useBtdURLEncode:(id)arg1;
- (id)getOutSideWebViewHost;
- (void)unregisterClass;
- (void)registerClass;
- (void)registerUserAgent;
- (id)jsBridgeHandlers;
- (id)whiteList;
- (id)XTokenHeaders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

