//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface TIMCoreBridgeManager : NSObject
{
    NSArray *_instances;
    NSMutableDictionary *_cachedMapping;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *cachedMapping; // @synthesize cachedMapping=_cachedMapping;
@property(retain, nonatomic) NSArray *instances; // @synthesize instances=_instances;
- (void).cxx_destruct;
- (Class)getClassConformsToProtocol:(id)arg1;
- (id)getInstanceConformsToProtocol:(id)arg1;
- (id)init;

@end
