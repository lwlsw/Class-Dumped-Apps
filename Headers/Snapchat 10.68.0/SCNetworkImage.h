//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL, NSValue, SCMedia, SCNetworkImageDownloadInfo, SCNetworkImageStoriesThumbnailInfo, UIImage;

@interface SCNetworkImage : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    SCMedia *_thumbnailMedia_thumbnailMedia;
    NSValue *_thumbnailMedia_thumbnailSize;
    SCNetworkImageDownloadInfo *_thumbnailMedia_downloadInfo;
    NSURL *_plainURL_url;
    long long _plainURL_mediaContextType;
    NSURL *_favicon_websiteURL;
    NSString *_bitmojiSelfie_userId;
    NSString *_bitmojiSelfie_avatarId;
    NSString *_bitmojiSelfie_selfieId;
    SCNetworkImageDownloadInfo *_bitmojiSelfie_downloadInfo;
    NSString *_bitmojiAvatar_templateId;
    NSString *_bitmojiAvatar_avatarId;
    NSString *_bitmojiAvatar_friendAvatarId;
    SCNetworkImageDownloadInfo *_bitmojiAvatar_downloadInfo;
    UIImage *_image_image;
    SCNetworkImageStoriesThumbnailInfo *_storiesThumbnail_storiesThumbnailInfo;
}

+ (id)thumbnailMediaWithThumbnailMedia:(id)arg1 thumbnailSize:(id)arg2 downloadInfo:(id)arg3;
+ (id)storiesThumbnailWithStoriesThumbnailInfo:(id)arg1;
+ (id)plainURLWithUrl:(id)arg1 mediaContextType:(long long)arg2;
+ (id)imageWithImage:(id)arg1;
+ (id)faviconWithWebsiteURL:(id)arg1;
+ (id)bitmojiSelfieWithUserId:(id)arg1 avatarId:(id)arg2 selfieId:(id)arg3 downloadInfo:(id)arg4;
+ (id)bitmojiAvatarWithTemplateId:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 downloadInfo:(id)arg4;
+ (id)lensChallengeSnapThumbnailWithStoryCard:(id)arg1;
- (void).cxx_destruct;
- (void)matchThumbnailMedia:(CDUnknownBlockType)arg1 plainURL:(CDUnknownBlockType)arg2 favicon:(CDUnknownBlockType)arg3 bitmojiSelfie:(CDUnknownBlockType)arg4 bitmojiAvatar:(CDUnknownBlockType)arg5 image:(CDUnknownBlockType)arg6 storiesThumbnail:(CDUnknownBlockType)arg7;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end
