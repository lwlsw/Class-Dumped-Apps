//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSMarkupTapItem.h"

@class GMSPolyline2D;

@interface GMSMarkupPolylineTapItem : GMSMarkupTapItem
{
    GMSPolyline2D *_polyline;
    struct Rectangle2D _bounds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 coords:(struct CGPoint)arg2 camera:(const reffed_ptr_329922e5 *)arg3;
- (id)initWithPolyline:(id)arg1 itemID:(unsigned long long)arg2 provider:(id)arg3 tapPriority:(struct GMSEntityTapPriority)arg4;

@end

