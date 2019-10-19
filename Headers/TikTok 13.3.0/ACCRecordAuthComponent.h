//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordAuthComponentProtocol-Protocol.h"

@class AWEAnimatedButton, AWEStudioAuthorityView, NSString, UIImageView;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCRecordRootComponentProtocol;

@interface ACCRecordAuthComponent : NSObject <ACCRecordAuthComponentProtocol>
{
    id <ACCComponentBusProtocol> _componentBus;
    UIImageView *_cameraBlurMaskView;
    AWEStudioAuthorityView *_authorityView;
    AWEAnimatedButton *_authorityCloseBtn;
    id <ACCRecordRootComponentProtocol> _rootComponent;
}

@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) AWEAnimatedButton *authorityCloseBtn; // @synthesize authorityCloseBtn=_authorityCloseBtn;
@property(retain, nonatomic) AWEStudioAuthorityView *authorityView; // @synthesize authorityView=_authorityView;
@property(retain, nonatomic) UIImageView *cameraBlurMaskView; // @synthesize cameraBlurMaskView=_cameraBlurMaskView;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (unsigned long long)currentAuthType;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (void)clickAuthorityCloseBtn:(id)arg1;
- (_Bool)hasCameraAndMicroPhoneAuth;
- (void)buildCameraProgressIfNeeded;
- (void)pushAuthorityHelpWebController;
- (void)checkAuthorityRestricted;
- (void)setupAuthorityView;
- (void)checkAuthority;
- (void)configCameraGrant;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end
