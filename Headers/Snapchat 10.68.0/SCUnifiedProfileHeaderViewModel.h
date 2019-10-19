//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCUnifiedProfileDisplayTitleViewModel;

@interface SCUnifiedProfileHeaderViewModel : NSObject <NSCopying>
{
    SCUnifiedProfileDisplayTitleViewModel *_displayTitleViewModel;
    NSArray *_iconButtonViewModels;
}

@property(readonly, copy, nonatomic) NSArray *iconButtonViewModels; // @synthesize iconButtonViewModels=_iconButtonViewModels;
@property(readonly, copy, nonatomic) SCUnifiedProfileDisplayTitleViewModel *displayTitleViewModel; // @synthesize displayTitleViewModel=_displayTitleViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayTitleViewModel:(id)arg1 iconButtonViewModels:(id)arg2;

@end
