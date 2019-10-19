//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface IESMMVideoDataClipRange : NSObject <NSCoding>
{
    double _startSeconds;
    double _durationSeconds;
    double _attachSeconds;
    long long _repeatCount;
}

@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double attachSeconds; // @synthesize attachSeconds=_attachSeconds;
@property(nonatomic) double durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double startSeconds; // @synthesize startSeconds=_startSeconds;
- (id)description;
- (double)endSeconds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
