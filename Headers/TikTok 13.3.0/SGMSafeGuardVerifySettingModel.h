//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SGMSafeGuardVerifySettingModel : NSObject
{
    float _maskAlpha;
    NSString *_urlString;
    NSDictionary *_aspectRatioDic;
    NSString *_maskRGB;
}

+ (id)modelWithJSONDic:(id)arg1;
@property(nonatomic) float maskAlpha; // @synthesize maskAlpha=_maskAlpha;
@property(retain, nonatomic) NSString *maskRGB; // @synthesize maskRGB=_maskRGB;
@property(retain, nonatomic) NSDictionary *aspectRatioDic; // @synthesize aspectRatioDic=_aspectRatioDic;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;

@end

