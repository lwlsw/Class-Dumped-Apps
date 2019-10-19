//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCRecipientPickerConfirmationModel;
@protocol SCUIContainer;

@protocol SCRecipientPickerDelegate <NSObject>
- (void)didDismissWithSelectedItems:(NSArray *)arg1 headerTitle:(NSString *)arg2;
- (void)didConfirmWithSelectedItems:(NSArray *)arg1 headerTitle:(NSString *)arg2;

@optional
- (void)didViolateWithSelectedItems:(NSArray *)arg1 headerTitle:(NSString *)arg2 confirmationModel:(SCRecipientPickerConfirmationModel *)arg3 uiConainer:(id <SCUIContainer>)arg4;
@end
