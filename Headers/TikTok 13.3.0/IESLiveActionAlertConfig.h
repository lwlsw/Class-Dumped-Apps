//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface IESLiveActionAlertConfig : NSObject
{
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    unsigned long long _titleNumberOfLines;
    double _contentHeight;
    double _footerHeight;
    double _appearDuration;
    double _dismissDuration;
    UIColor *_backgroundColor;
}

+ (id)defaultConfig;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double dismissDuration; // @synthesize dismissDuration=_dismissDuration;
@property(nonatomic) double appearDuration; // @synthesize appearDuration=_appearDuration;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) unsigned long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

