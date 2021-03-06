//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MetaStoryFeatures, SCRSnapClusterSpamFeatures;

@interface SnapClusterFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCRSnapClusterSpamFeatures *clusterSpamFeatures; // @dynamic clusterSpamFeatures;
@property(nonatomic) _Bool hasClusterSpamFeatures; // @dynamic hasClusterSpamFeatures;
@property(nonatomic) _Bool hasMetaStoryFeatures; // @dynamic hasMetaStoryFeatures;
@property(nonatomic) _Bool isAttraction; // @dynamic isAttraction;
@property(nonatomic) _Bool isConcept; // @dynamic isConcept;
@property(nonatomic) _Bool isRepeating; // @dynamic isRepeating;
@property(nonatomic) long long maxSnapTimestamp; // @dynamic maxSnapTimestamp;
@property(retain, nonatomic) MetaStoryFeatures *metaStoryFeatures; // @dynamic metaStoryFeatures;
@property(nonatomic) long long minSnapTimestamp; // @dynamic minSnapTimestamp;
@property(nonatomic) double newsinessScore; // @dynamic newsinessScore;
@property(nonatomic) unsigned int numUsers; // @dynamic numUsers;
@property(nonatomic) unsigned int numberOfSnaps; // @dynamic numberOfSnaps;
@property(nonatomic) long long pcile95Timestamp; // @dynamic pcile95Timestamp;
@property(nonatomic) double qualityScore; // @dynamic qualityScore;
@property(nonatomic) double s2PProb50Percentile; // @dynamic s2PProb50Percentile;
@property(nonatomic) double s2PProb95Percentile; // @dynamic s2PProb95Percentile;

@end

