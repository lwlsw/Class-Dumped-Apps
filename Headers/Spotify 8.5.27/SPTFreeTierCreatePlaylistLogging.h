//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTFreeTierCreatePlaylistLogging : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithUserIntent:(id)arg1 featureIdValue:(id)arg2 pageURI:(id)arg3;
- (void)logRenameButtonSelected;
- (void)logRenameCancelButtonSelected;
- (void)logCreateButtonSelectedWithDefaultName:(_Bool)arg1;
- (void)logCreateCancelButtonSelected;
- (id)initWithLogCenter:(id)arg1;

@end

