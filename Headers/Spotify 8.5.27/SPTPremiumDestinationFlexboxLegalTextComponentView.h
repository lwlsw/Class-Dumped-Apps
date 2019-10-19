//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUELabel, SPTPremiumDestinationFlexboxLegalTextStyle, SPTPremiumDestinationGLUETheme, UITapGestureRecognizer;
@protocol HUBComponentEventHandler;

@interface SPTPremiumDestinationFlexboxLegalTextComponentView : HUBComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTPremiumDestinationGLUETheme *_theme;
    SPTPremiumDestinationFlexboxLegalTextStyle *_style;
    GLUELabel *_legalTextLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)attributedLegalTextFrom:(id)arg1 style:(id)arg2;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) GLUELabel *legalTextLabel; // @synthesize legalTextLabel=_legalTextLabel;
@property(retain, nonatomic) SPTPremiumDestinationFlexboxLegalTextStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)addTapGestureRecognizer;
- (void)addLayoutConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
