//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBLPromise, GIMMe, UIGestureRecognizer;

@protocol YTELMCommandHandler <NSObject>
- (FBLPromise *)executeWithContext:(id <ELMContext>)arg1 sender:(id <ELMController>)arg2 recognizer:(UIGestureRecognizer *)arg3 gimme:(GIMMe *)arg4;
@end
