//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APMScreen : NSObject
{
    _Bool _isManuallySet;
    NSString *_name;
    NSString *_className;
    long long _instanceID;
}

@property(nonatomic) _Bool isManuallySet; // @synthesize isManuallySet=_isManuallySet;
@property(readonly, nonatomic) long long instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 className:(id)arg2 instanceID:(long long)arg3;

@end

