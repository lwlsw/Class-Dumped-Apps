//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTHomeUILogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)trackURIInModel:(id)arg1;
- (void)logDidChangePlayerStateInPromoV2Component:(unsigned long long)arg1 forTrackWithModel:(id)arg2;
- (void)logDidResumeTrackInPromoV2ComponentWithModel:(id)arg1;
- (void)logDidPauseTrackInPromoV2ComponentWithModel:(id)arg1;
- (void)logDidPlayTrackInPromoV2ComponentWithModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end
