//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMGameAction.h"

@class IESMMARAnchor, NSDictionary;

@interface IESMMGameAnchorUpdateAction : IESMMGameAction
{
    IESMMARAnchor *_anchor;
    unsigned long long _operation;
    NSDictionary *_extraInfo;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) IESMMARAnchor *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAnchor:(id)arg1 operation:(unsigned long long)arg2;
- (id)initWithAnchor:(id)arg1 operation:(unsigned long long)arg2 extraInfo:(id)arg3;

@end
