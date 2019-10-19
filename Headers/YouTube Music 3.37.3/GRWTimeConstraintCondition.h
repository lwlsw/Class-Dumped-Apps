//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface GRWTimeConstraintCondition : NSObject <NSSecureCoding>
{
    int _daysSet;
    struct {
        double startTime;
        double endTime;
    } _hoursRange;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDStruct_c3b9c2ee hoursRange; // @synthesize hoursRange=_hoursRange;
@property(nonatomic) int daysSet; // @synthesize daysSet=_daysSet;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTimeConstraintCondition:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)shouldAllowDateComponent:(id)arg1;
- (id)initWithRangeOfDays:(int)arg1 rangeOfHours:(CDStruct_c3b9c2ee)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;

@end
