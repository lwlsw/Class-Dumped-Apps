//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordCloseComponentProtocol-Protocol.h"

@class AWEAnimatedButton, NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCRecordRootComponentProtocol;

@interface ACCRecordCloseComponent : NSObject <ACCRecordCloseComponentProtocol>
{
    id <ACCComponentBusProtocol> _componentBus;
    AWEAnimatedButton *_closeButton;
    id <ACCRecordRootComponentProtocol> _rootComponent;
}

@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) AWEAnimatedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)saveTheOriginalDraft;
- (void)showCancelShootAlertBtn:(id)arg1;
- (void)transferToUrl:(id)arg1;
- (void)showShootGuideAlertWithLink:(id)arg1;
- (void)btd_pop:(CDUnknownBlockType)arg1 isEnterLive:(_Bool)arg2;
- (void)quitRecordPageBtn:(CDUnknownBlockType)arg1 isEnterLive:(_Bool)arg2;
- (void)clickBackBtn:(id)arg1;
- (void)closeRecordPage:(_Bool)arg1;
- (id)componentContentView;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

