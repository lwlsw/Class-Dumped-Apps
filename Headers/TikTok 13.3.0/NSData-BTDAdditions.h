//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (BTDAdditions)
- (id)btd_jsonValueDecoded:(id *)arg1;
- (id)btd_jsonValueDecoded;
- (id)btd_aes256DecryptWithkey:(id)arg1 iv:(id)arg2;
- (id)btd_aes256EncryptWithKey:(id)arg1 iv:(id)arg2;
- (id)btd_sha256String;
- (id)btd_sha1String;
- (id)btd_md5String;
@end

