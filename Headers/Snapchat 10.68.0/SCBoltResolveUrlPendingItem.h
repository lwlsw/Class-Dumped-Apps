//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCBoltContentDescriptor;
@protocol SCPerforming;

@interface SCBoltResolveUrlPendingItem : NSObject
{
    id <SCPerforming> _performer;
    CDUnknownBlockType _urlBlock;
    SCBoltContentDescriptor *_contentDescriptor;
}

@property(readonly, copy, nonatomic) SCBoltContentDescriptor *contentDescriptor; // @synthesize contentDescriptor=_contentDescriptor;
- (void).cxx_destruct;
- (void)invoke:(id)arg1 debugInfo:(id)arg2;
- (id)initWithContentDescriptor:(id)arg1 allbackPerformer:(id)arg2 urlBlock:(CDUnknownBlockType)arg3;

@end

