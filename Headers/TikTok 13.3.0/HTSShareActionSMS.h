//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSShareAction-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface HTSShareActionSMS : NSObject <MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, HTSShareAction>
{
    CDUnknownBlockType _shareCompletion;
}

+ (void)__awe__codeRunnerRun_24;
@property(copy, nonatomic) CDUnknownBlockType shareCompletion; // @synthesize shareCompletion=_shareCompletion;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)shareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shareActionAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
