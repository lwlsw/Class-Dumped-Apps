//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CABasicAnimation, NSString;

@interface GMSx_MDMRegisteredAnimation : NSObject
{
    NSString *_key;
    CABasicAnimation *_animation;
}

@property(readonly, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKey:(id)arg1 animation:(id)arg2;

@end
