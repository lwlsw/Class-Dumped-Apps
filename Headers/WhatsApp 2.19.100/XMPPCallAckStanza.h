//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPAckStanza.h>

@class WAJID;
@protocol WACallJID;

@interface XMPPCallAckStanza : XMPPAckStanza
{
}

+ (id)ackForCallStanza:(id)arg1;
- (void)setCallType:(unsigned long long)arg1;
@property(readonly, nonatomic) WAJID<WACallJID> *fromCallJID;
@property(readonly, nonatomic) unsigned long long callType;

@end
