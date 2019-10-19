//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTLoginSplitEmailSignupViewLogger, SPTSignupUserInfoModel;
@protocol SPTNavigationRouter, SPTSignupGenderViewModelDelegate;

@interface SPTSignupGenderViewModel : NSObject
{
    id <SPTSignupGenderViewModelDelegate> _delegate;
    SPTLoginSplitEmailSignupViewLogger *_logger;
    SPTSignupUserInfoModel *_userInfoModel;
    NSArray *_localizedGenders;
    NSArray *_backendDefinedGenders;
    id <SPTNavigationRouter> _navigationRouter;
}

@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) NSArray *backendDefinedGenders; // @synthesize backendDefinedGenders=_backendDefinedGenders;
@property(retain, nonatomic) NSArray *localizedGenders; // @synthesize localizedGenders=_localizedGenders;
@property(readonly, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(readonly, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSignupGenderViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureAvailableGenders:(_Bool)arg1;
- (void)userDidTapNextButton;
- (id)genderForIndex:(long long)arg1;
- (long long)genderCount;
- (id)nextButtonText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
@property(nonatomic) long long selectedIndex;
- (id)initWithLogger:(id)arg1 userInfoModel:(id)arg2 navigationRouter:(id)arg3;

@end
