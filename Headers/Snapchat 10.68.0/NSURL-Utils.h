//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (Utils)
+ (id)URLByPercentEscapingString:(id)arg1;
+ (id)stringFromQueryParameters:(id)arg1;
- (_Bool)isWeblink;
- (_Bool)isGCSSignedURL;
- (_Bool)isAwsSignedURL;
- (id)queryValueForQueryName:(id)arg1;
- (id)URLByUpdatingQueryName:(id)arg1 queryValue:(id)arg2;
- (id)urlByRemovingParams;
- (id)URLByUpdatingWithParameters:(id)arg1;
- (id)URLByAppendingPathComponents:(id)arg1;
- (id)queryParametersDecoded:(_Bool)arg1 lowercased:(_Bool)arg2;
- (id)absoluteStringWithoutFragment;
- (id)suffixWithoutDomain;
@end

