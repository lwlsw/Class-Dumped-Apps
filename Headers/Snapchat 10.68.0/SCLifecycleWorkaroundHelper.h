//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SCLifecycleWorkaroundHelper : NSObject
{
    NSMutableSet *_methods;
    _Bool _hasPendingViewDidAppearImplCall;
}

@property(nonatomic) _Bool hasPendingViewDidAppearImplCall; // @synthesize hasPendingViewDidAppearImplCall=_hasPendingViewDidAppearImplCall;
- (void).cxx_destruct;
- (_Bool)viewWillOrDidDisappearWasCalled;
- (_Bool)viewDidAppearWasCalled;
- (_Bool)viewWillAppearWasCalled;
- (_Bool)wasCalled:(SEL)arg1;
- (void)add:(SEL)arg1;
- (id)init;

@end
