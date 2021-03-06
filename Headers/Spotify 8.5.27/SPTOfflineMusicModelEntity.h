//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SPTOfflineContentModelEntity-Protocol.h"

@class NSArray, NSString;

@interface SPTOfflineMusicModelEntity : NSObject <SPTOfflineContentModelEntity, NSCoding>
{
    NSArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (_Bool)isAlbumItem:(id)arg1;
- (_Bool)isPlaylistItem:(id)arg1;
- (id)addDateFromItem:(id)arg1;
- (id)entityItemsFromPlaylists:(id)arg1 albums:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaylists:(id)arg1 albums:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

