//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCBeautyFeatureComponentMessageProtocol-Protocol.h"
#import "ACCBeautyPanelComponentProtocol-Protocol.h"
#import "ACCRecordToolBarComponentMessage-Protocol.h"

@class AWEBeautyViewController, AWEComposerBeautyViewController, NSString;
@protocol ACCBeautyConfigurationComponentProtocol, ACCBeautyFeatureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCRecordRootComponentProtocol;

@interface ACCBeautyPanelComponent : NSObject <ACCBeautyPanelComponentProtocol, ACCBeautyFeatureComponentMessageProtocol, ACCRecordToolBarComponentMessage>
{
    id <ACCComponentBusProtocol> componentBus;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCBeautyFeatureComponentProtocol> _beautyFeatureComponent;
    id <ACCBeautyConfigurationComponentProtocol> _beautyConfigurationComponent;
    AWEBeautyViewController *_beautyViewController;
    AWEComposerBeautyViewController *_composerBeautyViewController;
}

@property(retain, nonatomic) AWEComposerBeautyViewController *composerBeautyViewController; // @synthesize composerBeautyViewController=_composerBeautyViewController;
@property(retain, nonatomic) AWEBeautyViewController *beautyViewController; // @synthesize beautyViewController=_beautyViewController;
@property(nonatomic) __weak id <ACCBeautyConfigurationComponentProtocol> beautyConfigurationComponent; // @synthesize beautyConfigurationComponent=_beautyConfigurationComponent;
@property(nonatomic) __weak id <ACCBeautyFeatureComponentProtocol> beautyFeatureComponent; // @synthesize beautyFeatureComponent=_beautyFeatureComponent;
@property(nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (void)msg_didClickBeautyButton;
- (void)msg_applyBeautifyForSticker:(id)arg1;
- (void)applyCurrentSliderValueForBeautyType:(long long)arg1 genderMale:(_Bool)arg2;
- (void)showOnView:(id)arg1;
- (void)containerViewControllerDidLoad;
- (id)autoInjectComponentDictionaryOfbeautyConfigurationComponent;
- (id)autoInjectComponentDictionaryOfbeautyFeatureComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

