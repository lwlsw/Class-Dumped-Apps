//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTUpdateEntryResponderEvent : YTResponderEvent
{
    id _oldEntry;
    id _entry;
}

+ (id)eventWithFirstResponder:(id)arg1 oldEntry:(id)arg2 entry:(id)arg3;
@property(readonly, nonatomic) id entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) id oldEntry; // @synthesize oldEntry=_oldEntry;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 oldEntry:(id)arg2 entry:(id)arg3;

@end
