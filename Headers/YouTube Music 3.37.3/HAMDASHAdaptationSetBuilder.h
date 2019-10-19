//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMBuildableObjectBuilder-Protocol.h"

@class NSMutableArray, NSString;

@interface HAMDASHAdaptationSetBuilder : NSObject <HAMBuildableObjectBuilder>
{
    int _contentType;
    NSMutableArray *_representations;
}

@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSMutableArray *representations; // @synthesize representations=_representations;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)build;
- (void)addRepresentations:(id)arg1;
- (void)addRepresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
