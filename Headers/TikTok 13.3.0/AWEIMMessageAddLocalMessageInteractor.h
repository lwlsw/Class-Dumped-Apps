//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMInteractorObject.h"

@interface AWEIMMessageAddLocalMessageInteractor : AWEIMInteractorObject
{
    _Bool _isAlreadyExecuteAddFakeGroupGreetingMsg;
}

@property(nonatomic) _Bool isAlreadyExecuteAddFakeGroupGreetingMsg; // @synthesize isAlreadyExecuteAddFakeGroupGreetingMsg=_isAlreadyExecuteAddFakeGroupGreetingMsg;
- (void)addFakeMessageWithAWEIMMessage:(id)arg1;
- (void)addFakeGroupGreetingMsgWithMsg:(id)arg1;
- (void)addFakePrivateTipsMsg;
- (void)setCurrentAlreadyShowGroupGreetingMsg;
- (void)tryAddGroupGreetingFromClientMsg;
- (void)tryAddPrivateTipsMsg;
- (void)viewDidLoad;
- (id)vcParent;

@end

