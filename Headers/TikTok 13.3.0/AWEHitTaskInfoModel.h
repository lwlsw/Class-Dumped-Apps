//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@interface AWEHitTaskInfoModel : AWEBaseApiModel
{
    long long _completedTaskCount;
    long long _totalTaskCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long totalTaskCount; // @synthesize totalTaskCount=_totalTaskCount;
@property(nonatomic) long long completedTaskCount; // @synthesize completedTaskCount=_completedTaskCount;
- (id)initWithDict:(id)arg1;

@end

