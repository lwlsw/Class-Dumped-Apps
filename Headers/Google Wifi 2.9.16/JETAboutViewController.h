//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

@class JETSelectActionContentViewObject;

@interface JETAboutViewController : JETGroupAwareCollectionViewController
{
    JETSelectActionContentViewObject *_termsOfServiceItem;
    JETSelectActionContentViewObject *_privacyPolicyItem;
    JETSelectActionContentViewObject *_apLicenseItem;
}

@property(retain, nonatomic) JETSelectActionContentViewObject *apLicenseItem; // @synthesize apLicenseItem=_apLicenseItem;
@property(retain, nonatomic) JETSelectActionContentViewObject *privacyPolicyItem; // @synthesize privacyPolicyItem=_privacyPolicyItem;
@property(retain, nonatomic) JETSelectActionContentViewObject *termsOfServiceItem; // @synthesize termsOfServiceItem=_termsOfServiceItem;
- (void).cxx_destruct;
- (void)accessPointsGroupIsUpdated;
- (void)viewDidAppear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)constructModel;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)init;

@end

