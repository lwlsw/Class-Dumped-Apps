//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCNetworkImage;

@interface SCSearchGameCardViewModel : NSObject <NSCopying>
{
    int _minPlayers;
    int _maxPlayers;
    NSString *_title;
    NSString *_subtitle;
    SCActionModel *_singleTapActionModel;
    SCNetworkImage *_thumbnailImage;
}

@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) SCActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, nonatomic) int maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(readonly, nonatomic) int minPlayers; // @synthesize minPlayers=_minPlayers;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 minPlayers:(int)arg3 maxPlayers:(int)arg4 singleTapActionModel:(id)arg5 thumbnailImage:(id)arg6;

@end
