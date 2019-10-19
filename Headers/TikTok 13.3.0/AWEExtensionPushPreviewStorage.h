//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEExtensionStorage.h"

@class NSArray, NSMutableArray;

@interface AWEExtensionPushPreviewStorage : AWEExtensionStorage
{
    NSMutableArray *_options;
}

+ (unsigned long long)previewTypeFromOption:(id)arg1;
+ (id)sharedPushPreviewStorage;
@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)reset;
- (id)pushPreviewUrlKey;
@property(readonly, nonatomic) NSArray *pushPreviewOptions;
- (void)addPushPreviewOption:(id)arg1 previewType:(unsigned long long)arg2;
- (void)trackPushPreviewWithOption:(id)arg1 previewType:(unsigned long long)arg2;

@end
