//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol SPTYourLibraryMusicSongsHeaderViewModelActionDelegate, SPTYourLibraryMusicSongsHeaderViewModelDelegate;

@protocol SPTYourLibraryMusicSongsHeaderViewModel <NSObject>
@property(readonly, nonatomic, getter=isForceFilterBarVisible) _Bool forceFilterBarVisible;
@property(readonly, nonatomic, getter=isFilterAndSortingHidden) _Bool filterAndSortingHidden;
@property(readonly, nonatomic, getter=isPlayButtonHiddenWhenFiltering) _Bool playButtonHiddenWhenFiltering;
@property(readonly, nonatomic, getter=isPlayButtonHidden) _Bool playButtonHidden;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, copy, nonatomic) NSString *searchPlaceholder;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *playButtonTitle;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsHeaderViewModelActionDelegate> actionDelegate;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsHeaderViewModelDelegate> delegate;
- (void)didEndFiltering;
- (void)willStartFiltering;
- (void)presentSortingFilterPickerInTargetViewController:(UIViewController *)arg1;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)play;
@end

