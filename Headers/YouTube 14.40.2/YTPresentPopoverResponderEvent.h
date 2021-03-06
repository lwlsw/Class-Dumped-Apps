//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class UIView, UIViewController;

@interface YTPresentPopoverResponderEvent : YTResponderEvent
{
    UIViewController *_content;
    UIView *_inView;
    long long _type;
    unsigned long long _directions;
    struct CGSize _contentSize;
    struct CGRect _fromRect;
}

+ (id)eventWithViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 type:(long long)arg4 contentSize:(struct CGSize)arg5 directions:(unsigned long long)arg6 firstResponder:(id)arg7;
@property(readonly, nonatomic) unsigned long long directions; // @synthesize directions=_directions;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UIView *inView; // @synthesize inView=_inView;
@property(readonly, nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(readonly, nonatomic) UIViewController *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 type:(long long)arg4 contentSize:(struct CGSize)arg5 directions:(unsigned long long)arg6 firstResponder:(id)arg7;

@end

