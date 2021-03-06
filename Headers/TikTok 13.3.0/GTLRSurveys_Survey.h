//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSurveys_SurveyAudience, GTLRSurveys_SurveyCost, GTLRSurveys_SurveyRejection, NSArray, NSNumber, NSString;

@interface GTLRSurveys_Survey : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRSurveys_SurveyAudience *audience; // @dynamic audience;
@property(retain, nonatomic) GTLRSurveys_SurveyCost *cost; // @dynamic cost;
@property(copy, nonatomic) NSString *customerData; // @dynamic customerData;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) NSArray *owners; // @dynamic owners;
@property(retain, nonatomic) NSArray *questions; // @dynamic questions;
@property(retain, nonatomic) GTLRSurveys_SurveyRejection *rejectionReason; // @dynamic rejectionReason;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *surveyUrlId; // @dynamic surveyUrlId;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSNumber *wantedResponseCount; // @dynamic wantedResponseCount;

@end

