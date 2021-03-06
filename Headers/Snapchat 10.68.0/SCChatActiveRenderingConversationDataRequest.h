//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol SCChatRenderingConversation;

@interface SCChatActiveRenderingConversationDataRequest : NSObject <NSCopying>
{
    id <SCChatRenderingConversation> _conversation;
    NSString *_token;
}

@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) id <SCChatRenderingConversation> conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversation:(id)arg1 token:(id)arg2;

@end

