//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPushSound : NSObject
{
    _Bool _defaultSound;
    NSString *_localizedName;
    NSString *_filename;
}

@property(nonatomic, getter=isDefaultSound) _Bool defaultSound; // @synthesize defaultSound=_defaultSound;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 filename:(id)arg2;

@end

