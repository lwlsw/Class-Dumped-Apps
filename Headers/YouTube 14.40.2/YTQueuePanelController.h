//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTQueuePanelControllerProtocol.h"

@class GIMMe, NSString, YTQueuePanelViewController;

@interface YTQueuePanelController : NSObject <YTQueuePanelControllerProtocol>
{
    YTQueuePanelViewController *_queuePanelViewController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)removeQueuePanelTabObserver:(id)arg1 tabToken:(id)arg2;
- (void)addQueuePanelTabObserver:(id)arg1 tabToken:(id)arg2;
- (void)removeQueuePanelObserver:(id)arg1;
- (void)addQueuePanelObserver:(id)arg1;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)queuePanelState;
- (void)removeHeaderViewController:(id)arg1;
- (id)setHeaderViewController:(id)arg1;
- (_Bool)isQueueTabSelected;
- (void)selectQueueTab;
- (_Bool)isTabSelected:(id)arg1;
- (void)selectTabToken:(id)arg1;
- (void)removeTabWithToken:(id)arg1;
- (void)updateTabWithToken:(id)arg1 tabHeaderText:(id)arg2 tabAccessibilityText:(id)arg3;
- (id)addTabWithTabContentViewController:(id)arg1 tabHeaderText:(id)arg2 tabAccessibilityText:(id)arg3 tabPriority:(long long)arg4;
- (id)queuePanelControllerWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

