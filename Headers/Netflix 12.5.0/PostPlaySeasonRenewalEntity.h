//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

@class NSNumber, NSString;

@interface PostPlaySeasonRenewalEntity : NFLXGeneratedObject
{
    unsigned char _displayUpNext;
    NSString *_message;
    NSNumber *_autoPlaySeconds;
    NSString *_logoUrl;
    NSString *_backgroundUrl;
    NSString *_trackId;
}

@property(readonly, nonatomic) unsigned char displayUpNext; // @synthesize displayUpNext=_displayUpNext;
@property(readonly, copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
@property(readonly, copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(readonly, copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(readonly, copy, nonatomic) NSNumber *autoPlaySeconds; // @synthesize autoPlaySeconds=_autoPlaySeconds;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

