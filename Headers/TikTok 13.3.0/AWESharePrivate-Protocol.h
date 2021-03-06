//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, AWEShareContext, AWEUserModel, NSArray, NSString;

@protocol AWESharePrivate <NSObject>
- (void)shareWithContext:(AWEShareContext *)arg1 coverURLArray:(NSArray *)arg2 needWatermark:(_Bool)arg3 shareAction:(void (^)(AWEShareContext *))arg4;
- (void)shareWithContext:(AWEShareContext *)arg1 user:(AWEUserModel *)arg2 shareAction:(void (^)(AWEShareContext *))arg3;
- (void)addShareParamsToContext:(AWEShareContext *)arg1 type:(long long)arg2 shareWeiboDesc:(NSString *)arg3 completion:(void (^)(void))arg4;
- (AWEShareContext *)_createContextFromAweme:(AWEAwemeModel *)arg1;
- (AWEShareContext *)_createContextFromUser:(AWEUserModel *)arg1;
@end

