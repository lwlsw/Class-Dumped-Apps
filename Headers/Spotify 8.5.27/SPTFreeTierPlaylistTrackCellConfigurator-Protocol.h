//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTSwipeableTableViewCell, UIView;
@protocol GLUEEntityRow, SPTFreeTierPlaylistTrackCellConfiguratorDelegate, SPTFreeTierPlaylistTrackViewModel;

@protocol SPTFreeTierPlaylistTrackCellConfigurator <NSObject>
@property(nonatomic) __weak id <SPTFreeTierPlaylistTrackCellConfiguratorDelegate> delegate;
- (Class)trackCellClass;
- (void)configureCell:(UIView<GLUEEntityRow> *)arg1 withTrackViewModel:(id <SPTFreeTierPlaylistTrackViewModel>)arg2 configureContent:(_Bool)arg3 configureLeadingAccessory:(_Bool)arg4 configureTrailingAccessory:(_Bool)arg5 swipeableCell:(SPTSwipeableTableViewCell *)arg6;
- (double)preferredCellHeight;
@end
