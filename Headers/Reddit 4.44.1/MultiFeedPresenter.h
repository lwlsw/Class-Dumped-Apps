//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class Multi;

@interface MultiFeedPresenter : FeedPresenter
{
    Multi *_multi;
}

@property(retain, nonatomic) Multi *multi; // @synthesize multi=_multi;
- (void).cxx_destruct;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (void)configureWithMulti:(id)arg1;
- (id)initWithService:(id)arg1;

@end
