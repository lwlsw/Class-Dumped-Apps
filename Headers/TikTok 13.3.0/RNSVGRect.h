//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGRenderable.h"

@class NSString;

@interface RNSVGRect : RNSVGRenderable
{
    NSString *_x;
    NSString *_y;
    NSString *_rectwidth;
    NSString *_rectheight;
    NSString *_rx;
    NSString *_ry;
}

@property(retain, nonatomic) NSString *ry; // @synthesize ry=_ry;
@property(retain, nonatomic) NSString *rx; // @synthesize rx=_rx;
@property(retain, nonatomic) NSString *rectheight; // @synthesize rectheight=_rectheight;
@property(retain, nonatomic) NSString *rectwidth; // @synthesize rectwidth=_rectwidth;
@property(retain, nonatomic) NSString *y; // @synthesize y=_y;
@property(retain, nonatomic) NSString *x; // @synthesize x=_x;
- (void).cxx_destruct;
- (struct CGPath *)getPath:(struct CGContext *)arg1;

@end
