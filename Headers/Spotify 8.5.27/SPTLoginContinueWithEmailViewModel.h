//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginContinueWithEmailViewLogger;
@protocol SPTNavigationRouter;

@interface SPTLoginContinueWithEmailViewModel : NSObject
{
    id <SPTNavigationRouter> _navigationRouter;
    SPTLoginContinueWithEmailViewLogger *_logger;
}

@property(retain, nonatomic) SPTLoginContinueWithEmailViewLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
- (void).cxx_destruct;
- (void)logUserDidTapLogIn;
- (void)logUserDidTapSignup;
- (void)logUserDidSeeView;
- (void)loginButtonPressed;
- (void)signupButtonPressed;
- (id)loginButtonTitle;
- (id)orLabelTitle;
- (id)signupButtonTitle;
- (id)title;
- (id)initWithNavigationRouter:(id)arg1 logger:(id)arg2;

@end
