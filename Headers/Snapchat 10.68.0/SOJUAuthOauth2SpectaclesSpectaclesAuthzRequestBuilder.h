//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUAuthOauth2SpectaclesSpectaclesAuthzRequestBuilder : NSObject
{
    NSString *_authzCode;
    NSString *_codeVerifier;
    NSString *_redirectUri;
}

+ (id)withJUAuthOauth2SpectaclesSpectaclesAuthzRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setRedirectUri:(id)arg1;
- (id)setCodeVerifier:(id)arg1;
- (id)setAuthzCode:(id)arg1;
- (id)build;

@end
