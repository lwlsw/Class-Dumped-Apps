//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEImageInfo, AWEStoryThirdPlatformInfoModel, AWEURLModel, AWEUserModel, AWEVideoModel, NSArray, NSNumber, NSString;

@interface AWEOneDayLifeStoryModel : AWEBaseApiModel
{
    _Bool _cmtSWT;
    NSString *_storyID;
    NSNumber *_createTime;
    AWEUserModel *_author;
    AWEVideoModel *_video;
    NSString *_shareUrlString;
    NSNumber *_duration;
    long long _awemeType;
    NSString *_authorUserId;
    NSString *_stickers;
    NSString *_groupID;
    AWEURLModel *_labelThumb;
    AWEURLModel *_labelLarge;
    AWEImageInfo *_imageInfo;
    AWEStoryThirdPlatformInfoModel *_thirdPlatformInfo;
    NSArray *_interactionStickers;
}

+ (id)authorUserIdJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)labelLargeJSONTransformer;
+ (id)labelThumbJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)thirdPlatformInfoJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)interactionStickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *interactionStickers; // @synthesize interactionStickers=_interactionStickers;
@property(retain, nonatomic) AWEStoryThirdPlatformInfoModel *thirdPlatformInfo; // @synthesize thirdPlatformInfo=_thirdPlatformInfo;
@property(retain, nonatomic) AWEImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) AWEURLModel *labelLarge; // @synthesize labelLarge=_labelLarge;
@property(retain, nonatomic) AWEURLModel *labelThumb; // @synthesize labelThumb=_labelThumb;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *stickers; // @synthesize stickers=_stickers;
@property(copy, nonatomic) NSString *authorUserId; // @synthesize authorUserId=_authorUserId;
@property(nonatomic) _Bool cmtSWT; // @synthesize cmtSWT=_cmtSWT;
@property(nonatomic) long long awemeType; // @synthesize awemeType=_awemeType;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *shareUrlString; // @synthesize shareUrlString=_shareUrlString;
@property(retain, nonatomic) AWEVideoModel *video; // @synthesize video=_video;
@property(retain, nonatomic) AWEUserModel *author; // @synthesize author=_author;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRead;

@end
