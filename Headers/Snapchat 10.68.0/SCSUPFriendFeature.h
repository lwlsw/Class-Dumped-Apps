//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPFriendScore, SCSUPFriendStoryFeatures;

@interface SCSUPFriendFeature : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPFriendStoryFeatures *features; // @dynamic features;
@property(nonatomic) _Bool hasFeatures; // @dynamic hasFeatures;
@property(nonatomic) _Bool hasStoryScore; // @dynamic hasStoryScore;
@property(retain, nonatomic) SCSUPFriendScore *storyScore; // @dynamic storyScore;

@end
