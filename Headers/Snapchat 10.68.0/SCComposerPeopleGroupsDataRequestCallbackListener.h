//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataRequestListener-Protocol.h"

@interface SCComposerPeopleGroupsDataRequestCallbackListener : NSObject <SCGroupsDataRequestListener>
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (id)initWithUpdateCallback:(CDUnknownBlockType)arg1;

@end

