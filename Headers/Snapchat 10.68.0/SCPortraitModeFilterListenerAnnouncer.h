//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPortraitModeFilterListener-Protocol.h"

@class NSString;

@interface SCPortraitModeFilterListenerAnnouncer : NSObject <SCPortraitModeFilterListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCPortraitModeFilterListener>, std::__1::allocator<__weak id<SCPortraitModeFilterListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)portraitModeFilter:(id)arg1 didUpdatePortraitPercentage:(float)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
