//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class NSString, YTICommand;

@interface YTDismissSuggestedConnectionResponderEvent : YTResponderEvent
{
    NSString *_contactId;
    YTICommand *_dismissEndpoint;
}

+ (id)eventWithContactId:(id)arg1 dismissEndpoint:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) YTICommand *dismissEndpoint; // @synthesize dismissEndpoint=_dismissEndpoint;
@property(readonly, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
- (void).cxx_destruct;
- (id)initWithContactId:(id)arg1 dismissEndpoint:(id)arg2 firstResponder:(id)arg3;

@end

