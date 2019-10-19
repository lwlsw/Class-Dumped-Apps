//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRAuthSession-Protocol.h"

@class NSString;

@interface TWTRSession : NSObject <TWTRAuthSession>
{
    NSString *_authToken;
    NSString *_authTokenSecret;
    NSString *_userName;
    NSString *_userID;
}

+ (_Bool)isValidSessionDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) NSString *authTokenSecret; // @synthesize authTokenSecret=_authTokenSecret;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqualToSession:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAuthToken:(id)arg1 authTokenSecret:(id)arg2 userName:(id)arg3 userID:(id)arg4;
- (id)initWithSessionDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
