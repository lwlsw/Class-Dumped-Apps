//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEDigitalWellbeingLockViewConfiguration : NSObject
{
    _Bool _appealOnly;
    _Bool _shouldShowCloseButton;
    unsigned long long _type;
    NSString *_title;
    NSString *_hint;
}

@property(nonatomic) _Bool shouldShowCloseButton; // @synthesize shouldShowCloseButton=_shouldShowCloseButton;
@property(nonatomic) _Bool appealOnly; // @synthesize appealOnly=_appealOnly;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

