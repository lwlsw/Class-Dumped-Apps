//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastBrowseViewModelProvider-Protocol.h"
#import "SPTPodcastBrowseViewModelProviderObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol HUBViewModel, SPTPodcastBrowseViewModelProvider;

@interface SPTPodcastBrowseTransformingViewModelProvider : NSObject <SPTPodcastBrowseViewModelProviderObserver, SPTPodcastBrowseViewModelProvider>
{
    id <SPTPodcastBrowseViewModelProvider> _viewModelProvider;
    CDUnknownBlockType _transformer;
    id <HUBViewModel> _viewModel;
    unsigned long long _state;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, copy, nonatomic) CDUnknownBlockType transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) id <SPTPodcastBrowseViewModelProvider> viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (void).cxx_destruct;
- (void)transformAndSetViewModel:(id)arg1;
- (void)viewModelProvider:(id)arg1 didUpdateStateFrom:(unsigned long long)arg2;
- (void)viewModelProvider:(id)arg1 didUpdateFromViewModel:(id)arg2;
- (void)loadNextPage;
- (void)refresh;
- (void)reload;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithViewModelProvider:(id)arg1 transformer:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
