//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOTextContentView.h"

@class UIView;

@interface SKTIconTextContentView : GOOTextContentView
{
    UIView *_iconBackgroundCircle;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct UIEdgeInsets)paddingFromObject:(id)arg1;
+ (double)verticalDistanceBetweenLabelsFromObject:(id)arg1;
+ (struct UIEdgeInsets)textInsetsFromObject:(id)arg1;
+ (id)detailTextFont;
@property(retain, nonatomic) UIView *iconBackgroundCircle; // @synthesize iconBackgroundCircle=_iconBackgroundCircle;
- (void).cxx_destruct;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
