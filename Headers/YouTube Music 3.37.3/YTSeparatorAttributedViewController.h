//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTAttributedRendererViewControllerProtocol-Protocol.h"

@class GIMMe, NSString, YTISeparatorRenderer, YTSeparatorAttributedView;
@protocol YTResponder;

@interface YTSeparatorAttributedViewController : UIViewController <YTAttributedRendererViewControllerProtocol>
{
    YTISeparatorRenderer *_renderer;
    YTSeparatorAttributedView *_separatorView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (void)loadView;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
