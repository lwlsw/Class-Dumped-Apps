//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YTPageStyling.h"

@class GIMMe, NSString, YTIReelItemRenderer, YTLabel, YTQTMButton, YTReelRoundAvatarView, YTThumbnailController;

@interface YTReelDismissalMenuCollectionViewCell : UICollectionViewCell <YTPageStyling>
{
    YTReelRoundAvatarView *_avatarView;
    YTLabel *_titleLabel;
    YTThumbnailController *_thumbnailController;
    NSString *_disabledTitleText;
    YTQTMButton *_disabledActionButton;
    GIMMe *_gimme;
    YTIReelItemRenderer *_renderer;
    id <YTReelDismissalMenuCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <YTReelDismissalMenuCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTIReelItemRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)didTapUndoButton;
- (void)prepareForReuse;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setDisabledButtonText:(id)arg1 titleText:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
