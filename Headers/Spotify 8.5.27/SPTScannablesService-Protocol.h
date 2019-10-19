//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, UIBarButtonItem;
@protocol SPTScannablesDataSource, SPTScannablesPresenter, SPTScannablesRegistry, SPTScannablesShortcutItemProvider, SPTScannablesTestManager, SPTScannablesUserInterfaceFactory;

@protocol SPTScannablesService <SPTService>
- (UIBarButtonItem *)makeScannableBarButtonItem;
- (id <SPTScannablesShortcutItemProvider>)provideShortcutItemProvider;
- (id <SPTScannablesRegistry>)provideRegistry;
- (id <SPTScannablesDataSource>)provideDataSourceWithIdentifier:(NSString *)arg1;
- (id <SPTScannablesPresenter>)provideScannablesPresenter;
- (id <SPTScannablesUserInterfaceFactory>)provideUserInterfaceFactory;
- (id <SPTScannablesTestManager>)provideTestManager;
@end
