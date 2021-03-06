//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveDanmukuViewProtocol-Protocol.h"

@class HTSLiveDanmukuEngineSettings, NSString, UILabel;

@interface HTSLiveDanmukuNormalView : UIView <HTSLiveDanmukuViewProtocol>
{
    UIView *_containerView;
    UILabel *_contentLabel;
    HTSLiveDanmukuEngineSettings *_settings;
    CDUnknownBlockType _leaveChannelCompletion;
    CDUnknownBlockType _endAnimationCompletion;
    struct CGSize _contentSize;
}

@property(copy, nonatomic) CDUnknownBlockType endAnimationCompletion; // @synthesize endAnimationCompletion=_endAnimationCompletion;
@property(copy, nonatomic) CDUnknownBlockType leaveChannelCompletion; // @synthesize leaveChannelCompletion=_leaveChannelCompletion;
@property(retain, nonatomic) HTSLiveDanmukuEngineSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setDanmukuSettings:(id)arg1;
- (void)updateWithNode:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (id)view;
- (void)loadUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

