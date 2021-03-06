//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TIMCurrentUserCredentialProtocol, TIMKeyValueStoreProtocol, TIMMessageStoreProtocol;

@interface TIMPullerInserter : NSObject
{
    NSMutableDictionary *_doNotInsertIndexBeforeThis;
    id <TIMMessageStoreProtocol> _db;
    id <TIMKeyValueStoreProtocol> _kv;
    id <TIMCurrentUserCredentialProtocol> _user;
}

+ (id)appProcessor;
+ (id)sharedInstance;
@property(retain, nonatomic) id <TIMCurrentUserCredentialProtocol> user; // @synthesize user=_user;
@property(retain, nonatomic) id <TIMKeyValueStoreProtocol> kv; // @synthesize kv=_kv;
@property(retain, nonatomic) id <TIMMessageStoreProtocol> db; // @synthesize db=_db;
@property(retain, nonatomic) NSMutableDictionary *doNotInsertIndexBeforeThis; // @synthesize doNotInsertIndexBeforeThis=_doNotInsertIndexBeforeThis;
- (void).cxx_destruct;
- (_Bool)validateMessage:(id)arg1;
- (void)insertMessagesBatch:(id)arg1 inInbox:(int)arg2 reason:(id)arg3;
- (void)insertMessagePropertiesBatch:(id)arg1;
- (void)handleRealCommandMessage:(id)arg1;
- (void)handleCommandMessage:(id)arg1;
- (void)handleMinIndexMessage:(id)arg1;
- (void)insertMessages:(id)arg1 inInbox:(int)arg2 reason:(id)arg3;
- (_Bool)isCommandMessage:(id)arg1;
- (void)userDidLogout:(id)arg1;
- (void)dealloc;
- (id)init;

@end

