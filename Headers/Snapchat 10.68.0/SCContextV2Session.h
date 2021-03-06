//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCContextSessionParams, SCContextV2ClientSubstitutionHandler, SCContextV2Manager;
@protocol SCContextDataProviding, SCContextV2DependencyProvider, SCContextV2Logger;

@interface SCContextV2Session : NSObject
{
    NSString *_sessionId;
    SCContextV2Manager *_manager;
    id <SCContextDataProviding> _contextInfoProvider;
    id <SCContextV2DependencyProvider> _dependencyProvider;
    id <SCContextV2Logger> _logger;
    SCContextV2ClientSubstitutionHandler *_clientSubstitutionHandler;
    SCContextSessionParams *_params;
}

@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) SCContextSessionParams *params; // @synthesize params=_params;
@property(readonly, nonatomic) SCContextV2ClientSubstitutionHandler *clientSubstitutionHandler; // @synthesize clientSubstitutionHandler=_clientSubstitutionHandler;
@property(readonly, nonatomic) id <SCContextV2Logger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SCContextV2DependencyProvider> dependencyProvider; // @synthesize dependencyProvider=_dependencyProvider;
@property(readonly, nonatomic) id <SCContextDataProviding> contextInfoProvider; // @synthesize contextInfoProvider=_contextInfoProvider;
@property(readonly, nonatomic) SCContextV2Manager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 contextInfoProvider:(id)arg2 logger:(id)arg3 dependencyProvider:(id)arg4 params:(id)arg5;
- (id)_secondaryChatCapsule;
- (id)_centerCameraCapsule;
- (id)_chatInputBarJsonWithBackground:(_Bool)arg1 cameraButton:(_Bool)arg2 recipientName:(_Bool)arg3;
- (id)_locallyGeneratedCTA;
- (void)generateLocalCTA:(CDUnknownBlockType)arg1;

@end

