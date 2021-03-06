//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCBeautyConfigurationComponentProtocol-Protocol.h"

@class AWEBeautyConfigurationHelper, AWEUlikeBeautyConfiguration, NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol;

@interface ACCBeautyConfigurationComponent : NSObject <ACCBeautyConfigurationComponentProtocol>
{
    id <ACCComponentBusProtocol> _componentBus;
    AWEBeautyConfigurationHelper *_beautyConfigurationHelper;
    AWEUlikeBeautyConfiguration *_ulikeBeautyConfiguration;
}

@property(retain, nonatomic) AWEUlikeBeautyConfiguration *ulikeBeautyConfiguration; // @synthesize ulikeBeautyConfiguration=_ulikeBeautyConfiguration;
@property(retain, nonatomic) AWEBeautyConfigurationHelper *beautyConfigurationHelper; // @synthesize beautyConfigurationHelper=_beautyConfigurationHelper;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (_Bool)hasFetchedFaceMakeupResources;
@property(nonatomic) float blusherValue;
@property(nonatomic) float lipstickValue;
@property(nonatomic) float bigEyeValue;
@property(nonatomic) float faceLiftValue;
@property(nonatomic) float sharpenValue;
@property(nonatomic) float smoothValue;
- (float)valueForItem:(unsigned long long)arg1 gender:(unsigned long long)arg2;
- (float)valueForItem:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

