//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AWEYAMSceneRecordProtocol;

@interface AWEYamMainSceneObserver : NSObject
{
    id <AWEYAMSceneRecordProtocol> _scene;
    unsigned long long _type;
}

+ (id)shareInstance;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <AWEYAMSceneRecordProtocol> scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (id)sceneNameWithType:(unsigned long long)arg1;
- (_Bool)isSupportType:(unsigned long long)arg1;
- (void)changeTabBarWithType:(long long)arg1;
- (void)onTabBarDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

