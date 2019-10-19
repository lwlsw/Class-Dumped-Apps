//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class Friend, NSString, SCScanCardButton, SCSnapcodeView, UILabel;

@interface SCScanCardAddFriend : SCScanCardTableViewCell
{
    Friend *_friend;
    _Bool _hasDisplayName;
    SCSnapcodeView *_snapcodeView;
    UILabel *_displayNameLabel;
    UILabel *_usernameLabel;
    SCScanCardButton *_addFriendButton;
    SCScanCardButton *_dismissButton;
    _Bool _isAddingFriend;
    NSString *_scanData;
    NSString *_scannableId;
    UILabel *_emojiLabel;
    NSString *_emojiString;
    _Bool _hasEmoji;
    int _version;
    long long _page;
    unsigned long long _scanFriendState;
    _Bool _addedWithDiscoverCard;
    _Bool _addedWithUnlockCard;
}

@property(readonly, nonatomic) Friend *friend; // @synthesize friend=_friend;
@property(nonatomic) _Bool addedWithUnlockCard; // @synthesize addedWithUnlockCard=_addedWithUnlockCard;
@property(nonatomic) _Bool addedWithDiscoverCard; // @synthesize addedWithDiscoverCard=_addedWithDiscoverCard;
- (void).cxx_destruct;
- (void)_addFriendDidComplete;
- (void)_didTapCancelButton;
- (void)_didTapAddFriend;
- (void)_didTapSnapcode;
- (id)_buttonTitle;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)refreshEmoji:(id)arg1;
- (id)initWithFriend:(id)arg1 scanData:(id)arg2 scannableId:(id)arg3 emojiString:(id)arg4 version:(int)arg5 pageType:(long long)arg6 userSession:(id)arg7;

@end
