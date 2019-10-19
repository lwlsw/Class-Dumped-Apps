//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BFExecutor : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)executorWithOperationQueue:(id)arg1;
+ (id)executorWithDispatchQueue:(id)arg1;
+ (id)executorWithBlock:(CDUnknownBlockType)arg1;
+ (id)mainThreadExecutor;
+ (id)immediateExecutor;
+ (id)defaultExecutor;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
