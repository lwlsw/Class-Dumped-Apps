//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuItem.h"

@class NSString;

@interface SCATModernMenuGestureFreehandItem : SCATModernMenuItem
{
    _Bool _shouldRotate;
    _Bool _focused;
    NSString *_imagePrefixForTouchDependentGlyph;
    unsigned long long _preferredNumberOfTitleLines;
}

+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imagePrefixForTouchDependentGlyph:(id)arg4 shouldRotate:(_Bool)arg5 activateBehavior:(unsigned long long)arg6;
+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imagePrefixForTouchDependentGlyph:(id)arg4 activateBehavior:(unsigned long long)arg5;
+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 activateBehavior:(unsigned long long)arg4;
@property(nonatomic) unsigned long long preferredNumberOfTitleLines; // @synthesize preferredNumberOfTitleLines=_preferredNumberOfTitleLines;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(retain, nonatomic) NSString *imagePrefixForTouchDependentGlyph; // @synthesize imagePrefixForTouchDependentGlyph=_imagePrefixForTouchDependentGlyph;
- (void).cxx_destruct;
- (_Bool)handleActivateWithElement:(id)arg1;

@end

