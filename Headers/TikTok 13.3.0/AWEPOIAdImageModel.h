//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber, NSString;

@interface AWEPOIAdImageModel : AWEBaseApiModel
{
    NSNumber *_width;
    NSNumber *_height;
    NSArray *_urlList;
    NSString *_uri;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (void).cxx_destruct;

@end

