//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEAccessoryIconButton, GLUETrackPreview, SPTYourLibraryMusicSongCellConfigurator, SPTYourLibraryMusicSongsEntitySectionHeaderView, UITableViewCell;
@protocol SPTYourLibraryMusicSongsSectionViewModel;

@protocol SPTYourLibraryMusicSongCellConfiguratorDelegate <NSObject>
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didTapOnEntitySectionHeader:(SPTYourLibraryMusicSongsEntitySectionHeaderView *)arg2 withViewModel:(id <SPTYourLibraryMusicSongsSectionViewModel>)arg3;
- (void)actionForSectionHeaderWithSongCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didSwipeCell:(UITableViewCell *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didEndAudioPreview:(GLUETrackPreview *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didStartAudioPreview:(GLUETrackPreview *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 trackPreview:(GLUETrackPreview *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 banButton:(GLUEAccessoryIconButton *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 likeButton:(GLUEAccessoryIconButton *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 contextMenuButton:(GLUEAccessoryIconButton *)arg2;
@end
