//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ELMClientResourceLoader, ELMDispatcher, ELMFontLoader, ELMImageDownloader, ELMInteractionLogger, ELMLogger, ELMPerformanceAgent, ELMPriorityLoader, ELMResourceLoader, ELMRuntimeConfig, ELMStore, ELMTemplateLoader, ELMValueStore;

@protocol ELMContext <NSObject>
@property(readonly) id <ELMValueStore> valueStore;
@property(readonly) id <ELMTemplateLoader> templateLoader;
@property(readonly) id <ELMStore> store;
@property(readonly) id <ELMRuntimeConfig> runtimeConfig;
@property(readonly) id <ELMResourceLoader> resourceLoader;
@property(readonly) id <ELMPriorityLoader> priorityLoader;
@property(readonly) id <ELMPerformanceAgent> performanceAgent;
@property(readonly) id <ELMLogger> logger;
@property(readonly) id <ELMInteractionLogger> interactionLogger;
@property(readonly) id <ELMImageDownloader> imageDownloader;
@property(readonly) id <ELMFontLoader> fontLoader;
@property(readonly) id <ELMDispatcher> dispatcher;
@property(readonly) id <ELMClientResourceLoader> clientResourceLoader;
@end
