//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOperaEventListener-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSString, SCOperaViewController;
@protocol SCContextV2ModalOperaViewControllerDelegate;

@interface SCContextV2ModalOperaViewController : UIViewController <SCOperaEventListener, SCPageNameLogging>
{
    id <SCContextV2ModalOperaViewControllerDelegate> _delegate;
    SCOperaViewController *_operaViewController;
}

@property(readonly, nonatomic) SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
@property(nonatomic) __weak id <SCContextV2ModalOperaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didLeaveAppViaDeepLink:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)pageViewName;
- (void)_dismiss;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithOperaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

