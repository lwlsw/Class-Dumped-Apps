//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol ACCRecordTrackComponentProtocol <ACCComponentProtocol>
@property(nonatomic) _Bool reportMemoryInfo;
- (NSDictionary *)p_recordModeMap;
- (void)trackRecordVideoEvent;
- (void)trackError:(NSError *)arg1 action:(NSString *)arg2;
- (void)track_prop_music_show_isFirstEmbed:(_Bool)arg1;
@end

