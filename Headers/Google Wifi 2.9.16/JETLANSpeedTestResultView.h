//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JETAccessPointGroup, JETButtonFooter, JETLocalSpeedTestResult, UIImageView, UILabel, UIScrollView;

@interface JETLANSpeedTestResultView : UIView
{
    JETButtonFooter *_buttonFooter;
    UIScrollView *_contentScrollView;
    UIView *_resultBackground;
    UILabel *_resultLabel;
    UILabel *_resultCaption;
    UIImageView *_verbalizationImage;
    UILabel *_verbalizationTitle;
    UIImageView *_positionImage;
    UIView *_positionOuterCircle;
    UIView *_positionMiddleCircle;
    UIView *_positionInnerCircle;
    JETLocalSpeedTestResult *_LANDownloadTestResult;
    JETAccessPointGroup *_group;
    double _navigationBarHeight;
}

@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) JETLocalSpeedTestResult *LANDownloadTestResult; // @synthesize LANDownloadTestResult=_LANDownloadTestResult;
@property(retain, nonatomic) UIView *positionInnerCircle; // @synthesize positionInnerCircle=_positionInnerCircle;
@property(retain, nonatomic) UIView *positionMiddleCircle; // @synthesize positionMiddleCircle=_positionMiddleCircle;
@property(retain, nonatomic) UIView *positionOuterCircle; // @synthesize positionOuterCircle=_positionOuterCircle;
@property(retain, nonatomic) UIImageView *positionImage; // @synthesize positionImage=_positionImage;
@property(retain, nonatomic) UILabel *verbalizationTitle; // @synthesize verbalizationTitle=_verbalizationTitle;
@property(retain, nonatomic) UIImageView *verbalizationImage; // @synthesize verbalizationImage=_verbalizationImage;
@property(retain, nonatomic) UILabel *resultCaption; // @synthesize resultCaption=_resultCaption;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(retain, nonatomic) UIView *resultBackground; // @synthesize resultBackground=_resultBackground;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) JETButtonFooter *buttonFooter; // @synthesize buttonFooter=_buttonFooter;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 LANDownloadTestResult:(id)arg2 group:(id)arg3;

@end

