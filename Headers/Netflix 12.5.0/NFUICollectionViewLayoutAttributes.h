//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSMutableDictionary;

@interface NFUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    NSMutableDictionary *_userInfo;
    double _percentFromDesiredPosition;
    long long _directionModifier;
}

@property(nonatomic) long long directionModifier; // @synthesize directionModifier=_directionModifier;
@property(nonatomic) double percentFromDesiredPosition; // @synthesize percentFromDesiredPosition=_percentFromDesiredPosition;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributes:(id)arg1;

@end
