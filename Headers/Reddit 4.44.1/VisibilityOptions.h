//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface VisibilityOptions : NSObject <NSCopying>
{
    _Bool _shouldAutomaticallyManage;
    struct UIEdgeInsets _adjustedInsets;
}

+ (id)defaultVisibilityOptions;
@property(nonatomic) _Bool shouldAutomaticallyManage; // @synthesize shouldAutomaticallyManage=_shouldAutomaticallyManage;
@property(nonatomic) struct UIEdgeInsets adjustedInsets; // @synthesize adjustedInsets=_adjustedInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
