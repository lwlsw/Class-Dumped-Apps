//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRPlus_ContactGroup, GTLRPlus_ContactGroupId, NSString;

@interface GTLRPlus_ContactGroupResult : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(copy, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) GTLRPlus_ContactGroupId *identifier; // @dynamic identifier;
@property(retain, nonatomic) GTLRPlus_ContactGroup *result; // @dynamic result;
@property(copy, nonatomic) NSString *statusCode; // @dynamic statusCode;

@end
