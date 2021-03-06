//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingBackgroundViewModelDelegate-Protocol.h"

@class GLUEGradientView, NSString, SPTNowPlayingBackgroundViewModel;

@interface SPTNowPlayingBackgroundViewController : UIViewController <SPTNowPlayingBackgroundViewModelDelegate>
{
    SPTNowPlayingBackgroundViewModel *_viewModel;
    GLUEGradientView *_gradientView;
}

@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) SPTNowPlayingBackgroundViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)backgroundViewModel:(id)arg1 didChangeColor:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

