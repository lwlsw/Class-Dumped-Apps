//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIVisualElement;

@interface YTIRenderingError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int availableItems; // @dynamic availableItems;
@property(copy, nonatomic) NSString *callerDetails; // @dynamic callerDetails;
@property(copy, nonatomic) NSString *clientScreenNonce; // @dynamic clientScreenNonce;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasAvailableItems; // @dynamic hasAvailableItems;
@property(nonatomic) _Bool hasCallerDetails; // @dynamic hasCallerDetails;
@property(nonatomic) _Bool hasClientScreenNonce; // @dynamic hasClientScreenNonce;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;
@property(nonatomic) _Bool hasModelType; // @dynamic hasModelType;
@property(nonatomic) _Bool hasRequestedIndex; // @dynamic hasRequestedIndex;
@property(nonatomic) _Bool hasTextureDescription; // @dynamic hasTextureDescription;
@property(nonatomic) _Bool hasTextureError; // @dynamic hasTextureError;
@property(nonatomic) _Bool hasViewHierarchy; // @dynamic hasViewHierarchy;
@property(nonatomic) _Bool hasVisualElement; // @dynamic hasVisualElement;
@property(copy, nonatomic) NSString *modelType; // @dynamic modelType;
@property(nonatomic) int requestedIndex; // @dynamic requestedIndex;
@property(copy, nonatomic) NSString *textureDescription; // @dynamic textureDescription;
@property(copy, nonatomic) NSString *textureError; // @dynamic textureError;
@property(copy, nonatomic) NSString *viewHierarchy; // @dynamic viewHierarchy;
@property(retain, nonatomic) YTIVisualElement *visualElement; // @dynamic visualElement;

@end
