//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CHRAppInstallTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_observationQueue;
}

+ (void)trackPotentialAppInstallWithIntentType:(int)arg1;
+ (void)beginObservingAppInstalls;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // @synthesize observationQueue=_observationQueue;
- (void).cxx_destruct;
- (void)appWasInstalled:(id)arg1;
- (void)logAppInstallWithBundleIdentifier:(id)arg1;
- (void)removeObservingIntentType:(int)arg1;
- (void)addObservingIntentType:(int)arg1 bundleIDs:(id)arg2;
- (void)persistObservingDictionaryToDefaultsCache:(id)arg1;
- (id)observingDictionary;
- (void)observeAppInstalls;
- (void)dealloc;
- (id)init;

@end

