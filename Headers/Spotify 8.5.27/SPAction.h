//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEImageStyle, NSString, NSURL, UIColor, UIImage;

@interface SPAction : NSObject
{
    NSString *_logContext;
}

@property(readonly, copy, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic) NSURL *logEntityURL;
@property(readonly, copy, nonatomic) NSString *logEventName;
@property(readonly, nonatomic) GLUEImageStyle *imageStyle;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) UIColor *iconColor;
@property(readonly, nonatomic) NSString *accessibilityHint;
@property(readonly, nonatomic) NSString *title;
- (id)initWithLogContext:(id)arg1;

@end

