//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANotificationSnippet.h"

@class UILabel, WANotification;

@interface WABasicNotificationSnippet : WANotificationSnippet
{
    WANotification *_notification;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WANotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)configureForNotification:(id)arg1;
- (id)initWithNotification:(id)arg1;

@end
