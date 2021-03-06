//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEUserContext;

@interface AWEUserContextManager : NSObject
{
    AWEUserContext *_context;
    CDUnknownBlockType _completion;
    unsigned long long _platform;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AWEUserContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)showAlertForRevertDelete:(id)arg1 platform:(unsigned long long)arg2;
- (void)setContextPlatform:(unsigned long long)arg1;
- (id)userContext;
- (_Bool)processError:(id)arg1 routerContext:(id)arg2 isFromH5:(_Bool)arg3 ticketModel:(id)arg4;
- (_Bool)processError:(id)arg1 routerContext:(id)arg2 ticketModel:(id)arg3;
- (_Bool)processError:(id)arg1;
- (void)sendMessageWithError:(id)arg1;
- (void)finishUserContextWithError:(id)arg1;
- (void)trackInfoWithPlatform:(unsigned long long)arg1;
- (void)finishUserContext:(id)arg1 platform:(unsigned long long)arg2;
- (void)startUserContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

