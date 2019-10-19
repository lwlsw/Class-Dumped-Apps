//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAbuseWarningWorkflowDelegate-Protocol.h"
#import "SCActiveUserSessionWorkflowDelegate-Protocol.h"
#import "SCPostRegistrationDelegate-Protocol.h"
#import "SCTermsOfUseWorkflowDelegate-Protocol.h"

@class NSString, SCUserSession, SCUserSessionContext;
@protocol SCAbuseWarningRepository, SCPrivacyPolicyService, SCTermsOfUseService, SCUserSessionRouter, SCUserSessionWorkflowDelegate;

@interface SCUserSessionWorkflow : NSObject <SCPostRegistrationDelegate, SCActiveUserSessionWorkflowDelegate, SCAbuseWarningWorkflowDelegate, SCTermsOfUseWorkflowDelegate>
{
    id <SCUserSessionRouter> _subWorkflowsDelegate;
    id <SCUserSessionWorkflowDelegate> _delegate;
    SCUserSession *_userSession;
    SCUserSessionContext *_userSessionContext;
    id <SCAbuseWarningRepository> _abuseWarningRepository;
    id <SCTermsOfUseService> _termsOfUseService;
    id <SCPrivacyPolicyService> _privacyPolicyService;
    _Bool _enableTermsOfServiceV8Experience;
}

- (void).cxx_destruct;
- (_Bool)_shouldBeginTermsOfUseWorkflow;
- (void)postRegistrationCompleted;
- (void)termsOfUseWorkflowEnded;
- (void)termsOfUseWorkflowDeclinedTermsOfUse;
- (void)abuseWarningWorkflowShowedAbuseWarning;
- (void)activeUserSessionReceivedAbuseWarningWithId:(id)arg1 message:(id)arg2;
- (void)_startNextStepInWorkflow;
- (void)beginWorkflow;
- (id)initWithUserSession:(id)arg1 userSessionContext:(id)arg2 abuseWarningRepository:(id)arg3 termsOfUseService:(id)arg4 privacyPolicyService:(id)arg5 subWorkflowsDelegate:(id)arg6 workflowDelegate:(id)arg7 enableTermsOfServiceV8Experience:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
