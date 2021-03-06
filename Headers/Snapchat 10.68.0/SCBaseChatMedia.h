//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MediaDataSource-Protocol.h"
#import "MediaDelegate-Protocol.h"
#import "MediaImageProcessingDelegate-Protocol.h"
#import "MediaUploadDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "SCBaseChatMediaProtocol-Protocol.h"
#import "SnapVideoFilterDelegate-Protocol.h"

@class Media, NSNumber, NSString, SCSnapVideoFilterState, SOJUAudioStitch, SnapVideoFilter;
@protocol MediaUploadDelegate, SCChatMediaMessageStateDelegate;

@interface SCBaseChatMedia : NSObject <SnapVideoFilterDelegate, MediaImageProcessingDelegate, MediaDataSource, MediaDelegate, NSCoding, MediaUploadDelegate, SCBaseChatMediaProtocol>
{
    _Bool _mediaIsExpired;
    _Bool _isZipped;
    _Bool _isInfiniteDuration;
    _Bool _didRetryLoadingMedia;
    long long _mediaType;
    Media *_media;
    NSString *_key;
    NSString *_iv;
    NSString *_mediaId;
    NSString *_mediaUrl;
    SnapVideoFilter *_videoFilter;
    NSString *_sourceId;
    Media *_thumbnailMedia;
    Media *_contentMedia;
    Media *_overlayMedia;
    long long _uploadState;
    long long _mediaLoadState;
    id <MediaUploadDelegate> _uploadDelegate;
    NSNumber *_duration;
    unsigned long long _uploadMediaType;
    SOJUAudioStitch *_audioStitch;
    id <SCChatMediaMessageStateDelegate> _messageStateDelegate;
    SCSnapVideoFilterState *_videoFilterState;
    long long _savedUploadState;
    struct CGSize _size;
}

+ (_Bool)getIsZippedFromJSONDictionary:(id)arg1;
+ (long long)getMediaTypeFromJSONDictionary:(id)arg1;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool didRetryLoadingMedia; // @synthesize didRetryLoadingMedia=_didRetryLoadingMedia;
@property(nonatomic) long long savedUploadState; // @synthesize savedUploadState=_savedUploadState;
@property(copy, nonatomic) SCSnapVideoFilterState *videoFilterState; // @synthesize videoFilterState=_videoFilterState;
@property(nonatomic) __weak id <SCChatMediaMessageStateDelegate> messageStateDelegate; // @synthesize messageStateDelegate=_messageStateDelegate;
@property(retain, nonatomic) SOJUAudioStitch *audioStitch; // @synthesize audioStitch=_audioStitch;
@property(nonatomic) unsigned long long uploadMediaType; // @synthesize uploadMediaType=_uploadMediaType;
@property(nonatomic) _Bool isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <MediaUploadDelegate> uploadDelegate; // @synthesize uploadDelegate=_uploadDelegate;
@property(nonatomic) long long mediaLoadState; // @synthesize mediaLoadState=_mediaLoadState;
@property(nonatomic) long long uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) Media *overlayMedia; // @synthesize overlayMedia=_overlayMedia;
@property(retain, nonatomic) Media *contentMedia; // @synthesize contentMedia=_contentMedia;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) SnapVideoFilter *videoFilter; // @synthesize videoFilter=_videoFilter;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
@property(nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadRequestKeyForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (void)generateAndSaveVideoThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveMediaToDisk:(id)arg1 overlayData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)unarchiveMediaData:(CDUnknownBlockType)arg1;
- (void)requestVideoURL:(CDUnknownBlockType)arg1;
- (void)imageFromCache:(CDUnknownBlockType)arg1;
- (void)overlayImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)imageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_transitionToState:(long long)arg1;
- (_Bool)isProcessingOrUploading;
- (void)removeMediaFromCache;
- (id)imageMedia;
- (_Bool)isMediaUnarchived;
- (_Bool)isMediaDataLoadedInCache;
- (_Bool)videoExistsOnDisk;
- (id)videoFilename;
- (_Bool)containsVideo;
- (_Bool)isPsychomantis;
- (_Bool)isImage;
- (_Bool)isVideoStreaming;
- (_Bool)isAudioStitch;
- (_Bool)isVideoWithNoSound;
- (_Bool)isVideoWithSound;
- (_Bool)isVideoLaguna;
- (_Bool)isSpectaclesVideo;
- (_Bool)isVideo;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didStartDownload:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1 error:(id)arg2;
- (void)fetchMediaIsLoadingForMedia:(id)arg1;
- (void)fetchMediaWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
- (id)trackingMediaTypeForMedia:(id)arg1;
- (id)trackingTypeForMedia:(id)arg1;
- (id)trackingIdForMedia:(id)arg1;
- (id)trackingId;
- (_Bool)shouldUnzipMedia:(id)arg1;
- (id)requestContexts;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)URLForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)endpointForMedia:(id)arg1;
- (id)videoURL;
- (id)mediaIdForMedia:(id)arg1;
- (id)cacheId;
- (void)transitionToStateUploading;
- (_Bool)ableToRetry;
- (_Bool)isNotLoaded;
- (_Bool)isLoading;
- (_Bool)isLoaded;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (CDUnknownBlockType)uploadFailureBlock;
- (CDUnknownBlockType)uploadSuccessBlock;
- (void)_upload;
- (_Bool)upload;
- (id)uploadParameters;
- (void)loadPersistedFailedMediaData;
- (id)keyForMedia:(id)arg1;
- (id)failedMediaDatastore;
- (void)willEncodeObject;
- (void)willDecodeObject;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 mediaKey:(id)arg2 mediaIv:(id)arg3 isZipped:(_Bool)arg4 mediaType:(long long)arg5 mediaUrl:(id)arg6 sourceId:(id)arg7;
- (id)initWithJSONDictionary:(id)arg1;
- (void)initializeProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

