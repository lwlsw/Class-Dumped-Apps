//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIColor;

@interface SCSearchEmojiMaskView : UIImageView
{
    NSString *_emojiString;
    double _fontPointSize;
    UIColor *_borderColor;
    double _borderWidth;
    CDUnknownBlockType _renderingBlock;
}

+ (id)emojiMaskRenderPerformer;
@property(copy, nonatomic) CDUnknownBlockType renderingBlock; // @synthesize renderingBlock=_renderingBlock;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double fontPointSize; // @synthesize fontPointSize=_fontPointSize;
@property(copy, nonatomic) NSString *emojiString; // @synthesize emojiString=_emojiString;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

