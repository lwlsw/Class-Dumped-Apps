//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLoginReactivationStatus : NSObject <NSCopying>
{
    _Bool _needsToConfirm;
    NSString *_message;
}

@property(readonly, nonatomic) _Bool needsToConfirm; // @synthesize needsToConfirm=_needsToConfirm;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1 needsToConfirm:(_Bool)arg2;

@end

