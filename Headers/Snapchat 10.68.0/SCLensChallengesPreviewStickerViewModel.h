//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCLensChallengesSectionMusicMetadata;

@interface SCLensChallengesPreviewStickerViewModel : NSObject <NSCopying, NSCoding>
{
    SCLensChallengesSectionMusicMetadata *_musicMetadata;
    NSString *_artistName;
    NSString *_songName;
    NSURL *_songIconURL;
}

@property(readonly, copy, nonatomic) NSURL *songIconURL; // @synthesize songIconURL=_songIconURL;
@property(readonly, copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) SCLensChallengesSectionMusicMetadata *musicMetadata; // @synthesize musicMetadata=_musicMetadata;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicMetadata:(id)arg1 artistName:(id)arg2 songName:(id)arg3 songIconURL:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithMusicMetadata:(id)arg1;

@end

