//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACSignal.h"

@interface RACDynamicSignal : RACSignal
{
    CDUnknownBlockType _didSubscribe;
}

+ (id)createSignal:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType didSubscribe; // @synthesize didSubscribe=_didSubscribe;
- (void).cxx_destruct;
- (id)subscribe:(id)arg1;

@end
