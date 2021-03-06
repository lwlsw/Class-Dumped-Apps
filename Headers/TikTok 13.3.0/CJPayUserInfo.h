//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CJPayUserInfo : NSObject
{
    NSString *_authStatus;
    NSString *_authUrl;
    NSString *_certificateNum;
    NSString *_certificateType;
    NSString *_mName;
    NSString *_mid;
    NSString *_uid;
    NSString *_uidType;
    NSString *_findPwdURL;
    NSString *_pwdStatus;
    NSString *_bindUrl;
    NSString *_decLiveUrl;
    NSString *_pwdCheckWay;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *pwdCheckWay; // @synthesize pwdCheckWay=_pwdCheckWay;
@property(copy, nonatomic) NSString *decLiveUrl; // @synthesize decLiveUrl=_decLiveUrl;
@property(copy, nonatomic) NSString *bindUrl; // @synthesize bindUrl=_bindUrl;
@property(copy, nonatomic) NSString *pwdStatus; // @synthesize pwdStatus=_pwdStatus;
@property(copy, nonatomic) NSString *findPwdURL; // @synthesize findPwdURL=_findPwdURL;
@property(copy, nonatomic) NSString *uidType; // @synthesize uidType=_uidType;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *mName; // @synthesize mName=_mName;
@property(copy, nonatomic) NSString *certificateType; // @synthesize certificateType=_certificateType;
@property(copy, nonatomic) NSString *certificateNum; // @synthesize certificateNum=_certificateNum;
@property(copy, nonatomic) NSString *authUrl; // @synthesize authUrl=_authUrl;
@property(copy, nonatomic) NSString *authStatus; // @synthesize authStatus=_authStatus;
- (void).cxx_destruct;
- (long long)currentPwdCheckWay;
- (_Bool)hasValidAuthStatus;
- (_Bool)hasValidPwdStatus;

@end

