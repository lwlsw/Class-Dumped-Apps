//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAStatusAd;

@interface WAReportInfo : NSObject
{
    WAStatusAd *_statusAd;
    double _timeSpent;
}

@property(readonly, nonatomic) double timeSpent; // @synthesize timeSpent=_timeSpent;
@property(readonly, nonatomic) WAStatusAd *statusAd; // @synthesize statusAd=_statusAd;
- (void).cxx_destruct;
- (id)initWithStatusAd:(id)arg1 timeSpent:(double)arg2;

@end

