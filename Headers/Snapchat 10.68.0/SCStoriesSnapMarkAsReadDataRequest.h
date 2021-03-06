//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCStoriesSnapReadReceiptSnapMetadata;

@interface SCStoriesSnapMarkAsReadDataRequest : NSObject <NSCopying>
{
    _Bool _needFlushUnsentReadReceipts;
    NSString *_snapId;
    NSString *_storyId;
    unsigned long long _action;
    long long _source;
    double _expirationTime;
    NSString *_creatorUsername;
    SCStoriesSnapReadReceiptSnapMetadata *_metadata;
}

@property(readonly, copy, nonatomic) SCStoriesSnapReadReceiptSnapMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *creatorUsername; // @synthesize creatorUsername=_creatorUsername;
@property(readonly, nonatomic) _Bool needFlushUnsentReadReceipts; // @synthesize needFlushUnsentReadReceipts=_needFlushUnsentReadReceipts;
@property(readonly, nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 storyId:(id)arg2 action:(unsigned long long)arg3 source:(long long)arg4 expirationTime:(double)arg5 needFlushUnsentReadReceipts:(_Bool)arg6 creatorUsername:(id)arg7 metadata:(id)arg8;

@end

