//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, YTICommand, YTIFormattedString, YTIIcon, YTIOfferRestrictionsRenderer, YTIThumbnailDetails;

@interface YTUpsell : NSObject
{
    _Bool _counterfactual;
    int _upsellType;
    NSString *_shortMessage;
    NSString *_dialogTitle;
    NSString *_dialogMessage;
    YTIIcon *_icon;
    YTIFormattedString *_extraButtonText;
    YTICommand *_extraButtonEndpoint;
    YTICommand *_extraButtonServiceEndpoint;
    YTIFormattedString *_dismissButtonText;
    YTICommand *_dismissButtonEndpoint;
    YTICommand *_dismissButtonServiceEndpoint;
    NSArray *_impressionServiceEndpoints;
    YTIThumbnailDetails *_headerForeground;
    YTIThumbnailDetails *_headerBackground;
    YTIOfferRestrictionsRenderer *_offerRestrictions;
    NSData *_trackingParams;
    NSString *_analyticsTag;
}

+ (id)upsellWithUpsell:(id)arg1 upsellType:(int)arg2;
+ (id)upsellWithConfirmDialogRenderer:(id)arg1 shortMessage:(id)arg2;
+ (id)upsellWithConfirmDialogRenderer:(id)arg1;
+ (id)upsellWithUpsellDialogRenderer:(id)arg1 shortMessage:(id)arg2;
+ (id)upsellWithUpsellDialogRenderer:(id)arg1;
+ (id)upsellWithDismissableDialogRenderer:(id)arg1 shortMessage:(id)arg2;
+ (id)upsellWithDismissableDialogRenderer:(id)arg1;
@property(readonly, nonatomic) NSString *analyticsTag; // @synthesize analyticsTag=_analyticsTag;
@property(readonly, nonatomic, getter=isCounterfactual) _Bool counterfactual; // @synthesize counterfactual=_counterfactual;
@property(readonly, nonatomic) NSData *trackingParams; // @synthesize trackingParams=_trackingParams;
@property(readonly, nonatomic) YTIOfferRestrictionsRenderer *offerRestrictions; // @synthesize offerRestrictions=_offerRestrictions;
@property(readonly, nonatomic) YTIThumbnailDetails *headerBackground; // @synthesize headerBackground=_headerBackground;
@property(readonly, nonatomic) YTIThumbnailDetails *headerForeground; // @synthesize headerForeground=_headerForeground;
@property(readonly, nonatomic) NSArray *impressionServiceEndpoints; // @synthesize impressionServiceEndpoints=_impressionServiceEndpoints;
@property(readonly, nonatomic) YTICommand *dismissButtonServiceEndpoint; // @synthesize dismissButtonServiceEndpoint=_dismissButtonServiceEndpoint;
@property(readonly, nonatomic) YTICommand *dismissButtonEndpoint; // @synthesize dismissButtonEndpoint=_dismissButtonEndpoint;
@property(readonly, nonatomic) YTIFormattedString *dismissButtonText; // @synthesize dismissButtonText=_dismissButtonText;
@property(readonly, nonatomic) YTICommand *extraButtonServiceEndpoint; // @synthesize extraButtonServiceEndpoint=_extraButtonServiceEndpoint;
@property(readonly, nonatomic) YTICommand *extraButtonEndpoint; // @synthesize extraButtonEndpoint=_extraButtonEndpoint;
@property(readonly, nonatomic) YTIFormattedString *extraButtonText; // @synthesize extraButtonText=_extraButtonText;
@property(readonly, nonatomic) YTIIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *dialogMessage; // @synthesize dialogMessage=_dialogMessage;
@property(readonly, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(readonly, nonatomic) NSString *shortMessage; // @synthesize shortMessage=_shortMessage;
@property(readonly, nonatomic) int upsellType; // @synthesize upsellType=_upsellType;
- (void).cxx_destruct;
- (id)initWithUpsellType:(int)arg1 shortMessage:(id)arg2 dialogTitle:(id)arg3 dialogMessage:(id)arg4 icon:(id)arg5 headerForeground:(id)arg6 headerBackground:(id)arg7 extraButtonText:(id)arg8 extraButtonEndpoint:(id)arg9 dismissButtonText:(id)arg10 dismissButtonEndpoint:(id)arg11 trackingParams:(id)arg12;
- (id)initWithUpsellType:(int)arg1 shortMessage:(id)arg2 dialogTitle:(id)arg3 dialogMessage:(id)arg4 icon:(id)arg5 extraButtonText:(id)arg6 extraButtonEndpoint:(id)arg7 trackingParams:(id)arg8;
- (id)initWithUpsellType:(int)arg1 shortMessage:(id)arg2 dialogTitle:(id)arg3 dialogMessage:(id)arg4 trackingParams:(id)arg5;
- (id)initWithUpsellType:(int)arg1 shortMessage:(id)arg2 dialogTitle:(id)arg3 dialogMessage:(id)arg4 icon:(id)arg5 headerForeground:(id)arg6 headerBackground:(id)arg7 offerRestrictions:(id)arg8 extraButtonText:(id)arg9 extraButtonEndpoint:(id)arg10 extraButtonServiceEndpoint:(id)arg11 dismissButtonText:(id)arg12 dismissButtonEndpoint:(id)arg13 dismissButtonServiceEndpoint:(id)arg14 impressionServiceEndpoints:(id)arg15 trackingParams:(id)arg16 counterfactual:(_Bool)arg17 analyticsTag:(id)arg18;

@end

