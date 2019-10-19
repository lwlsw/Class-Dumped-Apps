//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber;

@interface AWEPOIRoutingGeometry : AWEBaseApiModel
{
    NSNumber *_latitude;
    NSNumber *_longitude;
}

+ (id)geometryWithCoord:(struct CLLocationCoordinate2D)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)mapPoint;
- (id)jsonObj;

@end
