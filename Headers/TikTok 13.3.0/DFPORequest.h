//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADORequest.h"

@class NSArray, NSDictionary, NSString;

@interface DFPORequest : GADORequest
{
    NSString *_publisherProvidedID;
    NSArray *_categoryExclusions;
}

+ (void)updateCorrelator;
@property(copy, nonatomic) NSArray *categoryExclusions; // @synthesize categoryExclusions=_categoryExclusions;
@property(copy, nonatomic) NSString *publisherProvidedID; // @synthesize publisherProvidedID=_publisherProvidedID;
- (void).cxx_destruct;
- (id)threadSafeParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSDictionary *customTargeting; // @dynamic customTargeting;

@end
