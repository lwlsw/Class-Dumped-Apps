//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSArray, NSDictionary, NSNumber, NSString, PostPlaySeasonRenewalEntity;

@interface PostPlayEntity : COEntity
{
    unsigned char _autoplay;
    NSDictionary *_postplayFull;
    NSDictionary *_currentEpisodeSeamless;
    PostPlaySeasonRenewalEntity *_seasonRenewal;
    NSNumber *_autoplaySecondsBase;
    NSString *_requestId;
    long long _type;
    NSArray *_items;
    NSString *_impressionToken;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(readonly, copy, nonatomic) NSString *impressionToken; // @synthesize impressionToken=_impressionToken;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) NSNumber *autoplaySecondsBase; // @synthesize autoplaySecondsBase=_autoplaySecondsBase;
@property(readonly, nonatomic) unsigned char autoplay; // @synthesize autoplay=_autoplay;
@property(readonly, copy, nonatomic) PostPlaySeasonRenewalEntity *seasonRenewal; // @synthesize seasonRenewal=_seasonRenewal;
@property(readonly, copy, nonatomic) NSDictionary *currentEpisodeSeamless; // @synthesize currentEpisodeSeamless=_currentEpisodeSeamless;
@property(readonly, copy, nonatomic) NSDictionary *postplayFull; // @synthesize postplayFull=_postplayFull;
- (void).cxx_destruct;
- (long long)experience;
- (id)autoplaySeconds;
- (_Bool)autoPlay;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)saveType:(id)arg1;
- (void)saveItems:(id)arg1;
- (id)postPlayDict;

@end
