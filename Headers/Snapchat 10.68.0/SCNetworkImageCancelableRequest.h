//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCancelableRequest.h"

@class NSArray, SCSessionRequestManager;

@interface SCNetworkImageCancelableRequest : SCCancelableRequest
{
    NSArray *_cancelables;
    SCSessionRequestManager *_requestManager;
}

@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NSArray *cancelables; // @synthesize cancelables=_cancelables;
- (void).cxx_destruct;
- (void)cancel;

@end

