//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWESearchPushModel : AWEBaseApiModel
{
    NSString *_keyword;
    NSString *_displayKeyword;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *displayKeyword; // @synthesize displayKeyword=_displayKeyword;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end
