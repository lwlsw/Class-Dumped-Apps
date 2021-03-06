//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel, YTThumbnailController;

@interface YTMAccountIdentityView : UIView
{
    YTThumbnailController *_bannerController;
    _Bool _shortStackEnabled;
    UIImage *_avatar;
    NSString *_name;
    NSString *_email;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIView *_nameEmailContainer;
}

@property(readonly, nonatomic) UIView *nameEmailContainer; // @synthesize nameEmailContainer=_nameEmailContainer;
@property(readonly, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) _Bool shortStackEnabled; // @synthesize shortStackEnabled=_shortStackEnabled;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

