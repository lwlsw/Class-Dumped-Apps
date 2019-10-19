//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SCStoryMediaMessageViewModel : NSObject
{
    long long _indexOfMediaForStoryThumbnail;
    NSArray *_mediaProviderList;
    NSMutableArray *_cachedStoryThumbnail;
    NSMutableArray *_storyThumbnailFetchingActions;
    _Bool _sentByUser;
    _Bool _isSent;
    _Bool _isSending;
}

- (void).cxx_destruct;
- (_Bool)containsMediaId:(id)arg1;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)shouldDisplaySendingOverlay;
- (void)_resetCachedStoryThumbnail;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_fetchNextCachedImage:(CDUnknownBlockType)arg1;
- (void)fetchNextImageToDisplay:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)readyForDisplay;
- (_Bool)isProcessingOrUploadingMedia;
- (_Bool)isLoadingFirstMedia;
- (_Bool)_requiredMediaLoaded:(long long)arg1;
- (_Bool)allMediaLoaded;
- (_Bool)normallyRequiredMediaLoaded;
- (_Bool)minimumRequiredMediaLoaded;
- (id)initWithStoryMediaMessageV3:(id)arg1 messageMetadata:(id)arg2 currentUserName:(id)arg3;

@end
