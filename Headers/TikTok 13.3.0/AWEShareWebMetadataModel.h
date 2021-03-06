//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface AWEShareWebMetadataModel : MTLModel <MTLJSONSerializing>
{
    _Bool _showsQRCode;
    NSString *_tips;
    NSString *_title;
    NSString *_content;
    NSURL *_imageURL;
    NSURL *_shareURL;
    NSURL *_internalURL;
    NSArray *_customShareItems;
}

+ (id)customShareItemsJSONTransformer;
+ (id)showsQRCodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *customShareItems; // @synthesize customShareItems=_customShareItems;
@property(nonatomic) _Bool showsQRCode; // @synthesize showsQRCode=_showsQRCode;
@property(retain, nonatomic) NSURL *internalURL; // @synthesize internalURL=_internalURL;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

