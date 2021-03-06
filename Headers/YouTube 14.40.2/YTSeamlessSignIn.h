//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe;

@interface YTSeamlessSignIn : NSObject
{
    id <NSObject> _autoshowActionHandle;
    id <NSObject> _showHintActionHandle;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)showSeamlessSignInHintWithAccountButton:(id)arg1 firstResponder:(id)arg2;
- (void)stopShowingHintWhenNeeded;
- (void)startShowingHintWhenNeededWithAccountButton:(id)arg1 firstResponder:(id)arg2;
- (void)stopShowingAutomatically;
- (void)startShowingAutomaticallyWithPreAction:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionBlock;
- (_Bool)showIfNeeded;

@end

