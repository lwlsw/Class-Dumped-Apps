//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCShakeToReportServices : NSObject
{
    SCLazy *_shakePresenter;
    SCLazy *_autoShakeToReporter;
}

@property(readonly, nonatomic) SCLazy *autoShakeToReporter; // @synthesize autoShakeToReporter=_autoShakeToReporter;
@property(readonly, nonatomic) SCLazy *shakePresenter; // @synthesize shakePresenter=_shakePresenter;
- (void).cxx_destruct;
- (id)initWithShakeToReportPresenter:(id)arg1 autoShakeToReporter:(id)arg2;

@end
