//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTPhonebookSearchBarView;

@protocol YTPhonebookSearchBarDelegate <NSObject>
- (void)searchBarCancelButtonClicked:(YTPhonebookSearchBarView *)arg1;
- (void)searchBarTextDidEndEditing:(YTPhonebookSearchBarView *)arg1;
- (void)searchBarTextDidBeginEditing:(YTPhonebookSearchBarView *)arg1;
- (void)searchBar:(YTPhonebookSearchBarView *)arg1 textDidChange:(NSString *)arg2;
@end
