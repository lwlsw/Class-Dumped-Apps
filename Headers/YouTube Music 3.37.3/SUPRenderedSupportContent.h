//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString, NSURL;

@interface SUPRenderedSupportContent : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_HTML;
    NSURL *_canonicalURL;
    NSString *_ETag;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
@property(readonly, copy, nonatomic) NSURL *canonicalURL; // @synthesize canonicalURL=_canonicalURL;
@property(readonly, copy, nonatomic) NSString *HTML; // @synthesize HTML=_HTML;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)overridePlaceholder:(id)arg1 withValue:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 HTML:(id)arg2 canonicalURL:(id)arg3 ETag:(id)arg4;

@end
