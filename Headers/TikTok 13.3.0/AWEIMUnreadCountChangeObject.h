//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString;
@protocol AWEIMUnreadCountChangeDelegate;

@interface AWEIMUnreadCountChangeObject : NSObject <AWEUserMessage>
{
    NSString *_identifier;
    id <AWEIMUnreadCountChangeDelegate> _delegate;
    long long _markReadCount;
    long long _currentUnreadCount;
    NSString *_storageKey;
}

@property(retain, nonatomic) NSString *storageKey; // @synthesize storageKey=_storageKey;
@property(nonatomic) long long currentUnreadCount; // @synthesize currentUnreadCount=_currentUnreadCount;
@property(nonatomic) long long markReadCount; // @synthesize markReadCount=_markReadCount;
@property(nonatomic) __weak id <AWEIMUnreadCountChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (void)p_markAsRead;
- (void)loadMarkRead;
- (void)tryToMarkRead;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
