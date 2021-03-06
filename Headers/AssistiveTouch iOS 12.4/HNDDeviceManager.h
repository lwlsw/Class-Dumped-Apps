//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HNDDeviceDelegate-Protocol.h"
#import "HNDDeviceDetectorDelegate-Protocol.h"

@class AXDispatchTimer, NSMutableArray, NSString;

@interface HNDDeviceManager : NSObject <HNDDeviceDetectorDelegate, HNDDeviceDelegate>
{
    _Bool _detectDevices;
    NSMutableArray *_devices;
    double _lastMoveTimeX;
    double _lastMoveTimeY;
    double _allowedMoveRate;
    AXDispatchTimer *_scrollHysteresisTimer;
    long long _scrollAmount;
}

+ (void)initialize;
+ (id)sharedManager;
@property(nonatomic) _Bool detectDevices; // @synthesize detectDevices=_detectDevices;
- (void).cxx_destruct;
- (long long)deviceCount;
- (_Bool)mainDeviceIsMouse;
- (long long)deviceCountWithSecondaryButtons;
- (void)device:(id)arg1 didPostEvent:(id)arg2;
- (void)device:(id)arg1 didUnload:(_Bool)arg2;
- (void)deviceDetector:(id)arg1 unloadDevicesPassingTest:(CDUnknownBlockType)arg2;
- (void)deviceDetector:(id)arg1 didFindDevice:(struct __IOHIDDevice *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

