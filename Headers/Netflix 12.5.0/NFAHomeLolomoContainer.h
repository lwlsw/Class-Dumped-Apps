//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFALolomoContainer.h"

#import "NFUIAROCategoriesHeaderViewDelegate-Protocol.h"

@interface NFAHomeLolomoContainer : NFALolomoContainer <NFUIAROCategoriesHeaderViewDelegate>
{
    _Bool _mdxButtonEnabled;
}

@property(nonatomic) _Bool mdxButtonEnabled; // @synthesize mdxButtonEnabled=_mdxButtonEnabled;
- (id)lolomoTransition:(_Bool)arg1;
- (void)showModalPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)itemSelected:(id)arg1 navigationView:(id)arg2;
- (void)handleSearchButtonAction;
- (void)viewDidLoad;
- (id)createLolomoViewController:(id)arg1;
- (id)init;

@end

