//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CHRMetricSiriInfo : NSObject
{
    int _totalVoiceShortcuts;
    NSString *_shortcutType;
}

@property(readonly, nonatomic) int totalVoiceShortcuts; // @synthesize totalVoiceShortcuts=_totalVoiceShortcuts;
@property(readonly, copy, nonatomic) NSString *shortcutType; // @synthesize shortcutType=_shortcutType;
- (void).cxx_destruct;
- (id)initWithShortcutType:(id)arg1 totalVoiceShortcuts:(int)arg2;

@end

