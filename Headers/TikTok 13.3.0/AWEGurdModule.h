//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAppAwemeSettingMessage-Protocol.h"
#import "AWEAppBytedSettingMessage-Protocol.h"
#import "HTSModule-Protocol.h"

@class NSString, UIWindow;

@interface AWEGurdModule : NSObject <AWEAppAwemeSettingMessage, AWEAppBytedSettingMessage, HTSModule>
{
}

+ (void)setGurdEnable:(_Bool)arg1;
+ (_Bool)gurdEnable;
+ (void)load;
- (void)bytedSettingDidChange;
- (void)awemeSettingDidChange;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationRootViewDidAppear:(id)arg1;
- (void)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

