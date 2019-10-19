//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCBloopsConverterFactory, SCBloopsFullscreenViewFactory;

@interface SCBloopsServices : NSObject
{
    SCLazy *_bloopsAPI;
    SCLazy *_reenactmentService;
    SCLazy *_onboardingResourcesService;
    id <SCBloopsConverterFactory> _bloopsConverterFactory;
    Class _previewsViewClass;
    SCLazy *_changeControllerFactory;
    SCLazy *_onboardingControllerFactory;
    id <SCBloopsFullscreenViewFactory> _fullscreenViewFactory;
    SCLazy *_pickerAccessoryFactory;
    SCLazy *_targetsService;
    SCLazy *_gesturesUtility;
    SCLazy *_friendBloopsPolicyTitleProvider;
    SCLazy *_exportPresenterFactory;
    SCLazy *_previewsViewLayoutFactory;
    SCLazy *_analyticsService;
    SCLazy *_searchIconProvider;
}

@property(readonly, nonatomic) SCLazy *searchIconProvider; // @synthesize searchIconProvider=_searchIconProvider;
@property(readonly, nonatomic) SCLazy *analyticsService; // @synthesize analyticsService=_analyticsService;
@property(readonly, nonatomic) SCLazy *previewsViewLayoutFactory; // @synthesize previewsViewLayoutFactory=_previewsViewLayoutFactory;
@property(readonly, nonatomic) SCLazy *exportPresenterFactory; // @synthesize exportPresenterFactory=_exportPresenterFactory;
@property(readonly, nonatomic) SCLazy *friendBloopsPolicyTitleProvider; // @synthesize friendBloopsPolicyTitleProvider=_friendBloopsPolicyTitleProvider;
@property(readonly, nonatomic) SCLazy *gesturesUtility; // @synthesize gesturesUtility=_gesturesUtility;
@property(readonly, nonatomic) SCLazy *targetsService; // @synthesize targetsService=_targetsService;
@property(readonly, nonatomic) SCLazy *pickerAccessoryFactory; // @synthesize pickerAccessoryFactory=_pickerAccessoryFactory;
@property(readonly, nonatomic) id <SCBloopsFullscreenViewFactory> fullscreenViewFactory; // @synthesize fullscreenViewFactory=_fullscreenViewFactory;
@property(readonly, nonatomic) SCLazy *onboardingControllerFactory; // @synthesize onboardingControllerFactory=_onboardingControllerFactory;
@property(readonly, nonatomic) SCLazy *changeControllerFactory; // @synthesize changeControllerFactory=_changeControllerFactory;
@property(readonly, nonatomic) Class previewsViewClass; // @synthesize previewsViewClass=_previewsViewClass;
@property(readonly, nonatomic) id <SCBloopsConverterFactory> bloopsConverterFactory; // @synthesize bloopsConverterFactory=_bloopsConverterFactory;
@property(readonly, nonatomic) SCLazy *onboardingResourcesService; // @synthesize onboardingResourcesService=_onboardingResourcesService;
@property(readonly, nonatomic) SCLazy *reenactmentService; // @synthesize reenactmentService=_reenactmentService;
@property(readonly, nonatomic) SCLazy *bloopsAPI; // @synthesize bloopsAPI=_bloopsAPI;
- (void).cxx_destruct;
- (id)initWithBloopsAPI:(id)arg1 reenactmentService:(id)arg2 onboardingResourcesService:(id)arg3 bloopsConverterFactory:(id)arg4 previewsViewClass:(Class)arg5 changeControllerFactory:(id)arg6 onboardingControllerFactory:(id)arg7 fullscreenViewFactory:(id)arg8 targetsService:(id)arg9 pickerAccessoryFactory:(id)arg10 gesturesUtility:(id)arg11 friendBloopsPolicyTypeTitleProvider:(id)arg12 previewsViewLayoutFactory:(id)arg13 analyticsService:(id)arg14 searchIconProvider:(id)arg15;

@end
