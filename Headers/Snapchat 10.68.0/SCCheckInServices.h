//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCCheckInServices : NSObject
{
    SCLazy *_optionFetcher;
    SCLazy *_optionReporter;
    SCLazy *_updater;
}

@property(readonly, nonatomic) SCLazy *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) SCLazy *optionReporter; // @synthesize optionReporter=_optionReporter;
@property(readonly, nonatomic) SCLazy *optionFetcher; // @synthesize optionFetcher=_optionFetcher;
- (void).cxx_destruct;
- (id)initWithOptionFetcher:(id)arg1 optionReporter:(id)arg2 updater:(id)arg3;

@end

