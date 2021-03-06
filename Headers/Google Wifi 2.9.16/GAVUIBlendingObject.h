//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVUIObject-Protocol.h"

@class NSString;
@protocol GAVUIObject;

@interface GAVUIBlendingObject : NSObject <GAVUIObject>
{
    int _mode;
    id <GAVUIObject> _object;
}

@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) id <GAVUIObject> object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)draw;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithObject:(id)arg1 mode:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

