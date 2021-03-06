//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWEURLModel : MTLModel <MTLJSONSerializing>
{
    NSArray *URLList;
    _Bool needsParametersWhenInitialized;
    NSArray *_originURLList;
    NSArray *_whiteKeys;
    double _imageWidth;
    double _imageHeight;
    double _sizeByte;
    NSString *_URI;
}

+ (void)setShouldChangeCommonParamsBlock:(CDUnknownBlockType)arg1;
+ (void)setDidFinishInitBlock:(CDUnknownBlockType)arg1;
+ (id)URLString:(id)arg1 appendCommonParams:(id)arg2;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *URI; // @synthesize URI=_URI;
@property(nonatomic) double sizeByte; // @synthesize sizeByte=_sizeByte;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSArray *whiteKeys; // @synthesize whiteKeys=_whiteKeys;
@property(retain, nonatomic) NSArray *originURLList; // @synthesize originURLList=_originURLList;
- (void).cxx_destruct;
- (id)JSONDictionaryWithoutCommonParameters;
- (id)getURLDict;
- (void)setNeedsParametersWhenInitializedWithWhiteList:(id)arg1;
- (void)convertUrlListAddCommonParams;
- (id)recommendUrl;
- (id)URLList;
- (id)initWithURLList:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)init;
- (_Bool)needsCommonParametersForURL:(id)arg1;
- (void)convertUrlListAddCommonParams;
- (_Bool)isEqualByURI:(id)arg1;
- (void)filterPlayURLList;
@property(copy, nonatomic) NSString *currentLanguage; // @dynamic currentLanguage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

