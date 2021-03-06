//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShareServices-Protocol.h"

@class GIMMe, NSArray, NSString, UIView, YTShareDialogLoggingProxyController;
@protocol YTInnerTubeResponseCacheKey;

@interface YTRealShareServices : NSObject <YTShareServices>
{
    NSArray *cachedAddressbookContacts;
    YTShareDialogLoggingProxyController *permissionDialogsLoggingProxy;
    id <YTInnerTubeResponseCacheKey> sharePanelCacheKey;
    UIView *tappedShareButtonView;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak UIView *tappedShareButtonView; // @synthesize tappedShareButtonView;
@property(retain, nonatomic) id <YTInnerTubeResponseCacheKey> sharePanelCacheKey; // @synthesize sharePanelCacheKey;
@property(nonatomic) __weak YTShareDialogLoggingProxyController *permissionDialogsLoggingProxy; // @synthesize permissionDialogsLoggingProxy;
@property(retain, nonatomic) NSArray *cachedAddressbookContacts; // @synthesize cachedAddressbookContacts;
- (void).cxx_destruct;
- (id)supportedSharingServiceIds;
- (id)reactrSharerClasses;
- (id)sharerClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

