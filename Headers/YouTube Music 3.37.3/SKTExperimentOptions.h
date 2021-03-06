//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHTPhenotypeFlagsSnapshot;

@interface SKTExperimentOptions : NSObject
{
    _Bool _showFindPeopleItem;
    _Bool _enableOneStepSend;
    _Bool _enablePhotosDirectSharingUX;
    _Bool _hideNewGroupButtonInMinimized;
    int _clientID;
}

@property(nonatomic) _Bool hideNewGroupButtonInMinimized; // @synthesize hideNewGroupButtonInMinimized=_hideNewGroupButtonInMinimized;
@property(nonatomic) _Bool enablePhotosDirectSharingUX; // @synthesize enablePhotosDirectSharingUX=_enablePhotosDirectSharingUX;
@property(nonatomic) _Bool enableOneStepSend; // @synthesize enableOneStepSend=_enableOneStepSend;
@property(nonatomic) _Bool showFindPeopleItem; // @synthesize showFindPeopleItem=_showFindPeopleItem;
@property(readonly, nonatomic) int clientID; // @synthesize clientID=_clientID;
- (_Bool)hideAllNonIANTUI;
- (id)initWithClientID:(int)arg1;
- (id)init;
- (_Bool)disablePhotosForceUpdateAPI;
- (_Bool)logPeopleKitCompletionMetrics;
- (_Bool)logNoDisplayableName;
@property(retain, nonatomic) PHTPhenotypeFlagsSnapshot *flagsSnapshot; // @dynamic flagsSnapshot;

@end

