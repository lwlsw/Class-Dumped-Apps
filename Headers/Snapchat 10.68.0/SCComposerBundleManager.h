//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerBundleManager-Protocol.h"

@interface SCComposerBundleManager : NSObject <SCNComposerBundleManager>
{
}

- (id)getUrlForPath:(id)arg1;
- (id)getLocalResource:(id)arg1 resourcePath:(id)arg2;
- (void)removeItemInDiskCache:(id)arg1;
- (id)storeDataInDiskCache:(id)arg1 data:(id)arg2;
- (id)loadDataFromDiskCache:(id)arg1;
- (id)loadBundleContent:(id)arg1;

@end
