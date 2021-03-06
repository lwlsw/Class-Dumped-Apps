//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEGeneralSearchCellControllerProtocol-Protocol.h"

@class AWEIronManModel, AWESearchIronManView, NSDictionary, NSString, UILabel;

@interface AWESearchIronManViewController : UIViewController <AWEGeneralSearchCellControllerProtocol>
{
    UILabel *_headerLabel;
    AWESearchIronManView *_ironManView;
    AWEIronManModel *_ironMan;
}

@property(retain, nonatomic) AWEIronManModel *ironMan; // @synthesize ironMan=_ironMan;
@property(retain, nonatomic) AWESearchIronManView *ironManView; // @synthesize ironManView=_ironManView;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)refreshWithData:(id)arg1 keyword:(id)arg2 hasMore:(_Bool)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *enterFrom;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDictionary *logPassback;
@property(readonly) Class superclass;

@end

