//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEPersonalizedAdResponse : AWEBaseApiModel
{
    _Bool _needTerms;
    _Bool _haveSet;
    _Bool _followSystemConfig;
    long long _adPersonalityMode;
    NSString *_toastDescription;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *toastDescription; // @synthesize toastDescription=_toastDescription;
@property(nonatomic) _Bool followSystemConfig; // @synthesize followSystemConfig=_followSystemConfig;
@property(nonatomic) long long adPersonalityMode; // @synthesize adPersonalityMode=_adPersonalityMode;
@property(nonatomic) _Bool haveSet; // @synthesize haveSet=_haveSet;
@property(nonatomic) _Bool needTerms; // @synthesize needTerms=_needTerms;
- (void).cxx_destruct;

@end

