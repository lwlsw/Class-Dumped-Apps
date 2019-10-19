//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SCLens;

@interface SCLensUnlockerResult : NSObject
{
    SCLens *_lens;
    unsigned long long _resultType;
    unsigned long long _unlockType;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long unlockType; // @synthesize unlockType=_unlockType;
@property(readonly, nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1;
- (id)initWithLens:(id)arg1 resultType:(unsigned long long)arg2 unlockType:(unsigned long long)arg3;

@end
