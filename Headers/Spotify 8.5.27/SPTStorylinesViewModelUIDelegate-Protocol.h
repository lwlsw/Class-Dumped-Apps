//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;

@protocol SPTStorylinesViewModelUIDelegate <NSObject>
- (UIView *)getStorylinesViewControllerView;
- (void)updateStorylinesFollowText:(NSString *)arg1;
- (void)updateProgressBarForStorylinesWithProgress:(double)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)updateStorylinesArtistAttributionWithName:(NSString *)arg1 image:(UIImage *)arg2;
@end

