//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSpectaclesRemoteFile : NSObject
{
    NSString *_contentName;
    unsigned long long _type;
    long long _size;
}

@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
- (void).cxx_destruct;
- (id)description;
- (id)remoteFilename;
- (id)initWithRemoteContentName:(id)arg1 type:(unsigned long long)arg2 size:(long long)arg3;
- (id)initWithRemoteFilename:(id)arg1 size:(long long)arg2;

@end
