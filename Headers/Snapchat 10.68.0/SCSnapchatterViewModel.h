//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatterAccessoryViewModel, SCSnapchatterInfoViewModel, SCSnapchatterThumbnailViewModel;

@interface SCSnapchatterViewModel : NSObject <NSCopying>
{
    SCSnapchatterThumbnailViewModel *_thumbnailViewModel;
    SCSnapchatterInfoViewModel *_infoViewModel;
    SCSnapchatterAccessoryViewModel *_accessoryViewModel;
}

@property(readonly, copy, nonatomic) SCSnapchatterAccessoryViewModel *accessoryViewModel; // @synthesize accessoryViewModel=_accessoryViewModel;
@property(readonly, copy, nonatomic) SCSnapchatterInfoViewModel *infoViewModel; // @synthesize infoViewModel=_infoViewModel;
@property(readonly, copy, nonatomic) SCSnapchatterThumbnailViewModel *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithThumbnailViewModel:(id)arg1 infoViewModel:(id)arg2 accessoryViewModel:(id)arg3;

@end
