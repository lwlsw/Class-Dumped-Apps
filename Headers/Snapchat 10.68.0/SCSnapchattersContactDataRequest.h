//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapchattersContactDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    long long _fetchContacts_source;
    _Bool _fetchContacts_shouldRecommend;
    _Bool _fetchContacts_isAllUpdate;
    _Bool _fetchContacts_isDelta;
    _Bool _updateSyncEnable_isContactSyncEnabled;
}

+ (id)updateSyncEnableWithIsContactSyncEnabled:(_Bool)arg1;
+ (id)fetchContactsWithSource:(long long)arg1 shouldRecommend:(_Bool)arg2 isAllUpdate:(_Bool)arg3 isDelta:(_Bool)arg4;
+ (id)deleteAllContacts;
- (void)matchFetchContacts:(CDUnknownBlockType)arg1 updateSyncEnable:(CDUnknownBlockType)arg2 deleteAllContacts:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asDeleteAllContacts;
- (id)asUpdateSyncEnable;
- (id)asFetchContacts;

@end

