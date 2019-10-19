//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeSectionController.h"

#import "YTInnerTubeSectionHeaderResponderProvider-Protocol.h"

@class GIMMe, NSString, YTISenderIdSectionRenderer, YTIdSelectorSectionHeaderView;

@interface YTSenderIdSectionController : YTInnerTubeSectionController <YTInnerTubeSectionHeaderResponderProvider>
{
    YTISenderIdSectionRenderer *_renderer;
    YTIdSelectorSectionHeaderView *_headerView;
}

- (void).cxx_destruct;
- (void)updateHeader:(id)arg1 forSection:(id)arg2 sectionController:(id)arg3;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1 section:(id)arg2 sectionController:(id)arg3;
- (Class)headerClassForSection:(id)arg1 sectionController:(id)arg2;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
