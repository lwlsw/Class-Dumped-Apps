//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPickerLayoutSource-Protocol.h"

@class NSString, SCStickerPickerLayoutSourceDefault;

@interface SCStickerPickerLayoutSourceChat : NSObject <SCStickerPickerLayoutSource>
{
    SCStickerPickerLayoutSourceDefault *_defaultLayoutSource;
}

@property(readonly, nonatomic) SCStickerPickerLayoutSourceDefault *defaultLayoutSource; // @synthesize defaultLayoutSource=_defaultLayoutSource;
- (void).cxx_destruct;
- (long long)numberOfColumnsForSuperCategoryType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
