//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPixelClient-Protocol.h"

@class SCRequestManager;

@interface SCPixelRequestClientImpl : NSObject <SCPixelClient>
{
    SCRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)sendPixelRequest:(id)arg1 completionQueue:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithRequestManager:(id)arg1;

@end
