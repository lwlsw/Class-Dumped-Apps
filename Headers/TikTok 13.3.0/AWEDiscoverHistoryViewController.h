//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIrregularWordsBaseViewController.h"

@class NSArray;

@interface AWEDiscoverHistoryViewController : AWEIrregularWordsBaseViewController
{
    NSArray *_historyWords;
}

+ (double)wordHeight;
@property(copy, nonatomic) NSArray *historyWords; // @synthesize historyWords=_historyWords;
- (void).cxx_destruct;
- (id)flowLayout;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)refreshData;
- (void)viewDidLoad;

@end

