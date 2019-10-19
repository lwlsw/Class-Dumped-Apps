//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAParticipantPickerViewController.h"

@class WAParticipantPickerConfiguration;
@protocol WAGroupParticipantPickerViewControllerDelegate;

@interface WAGroupParticipantPickerViewController : WAParticipantPickerViewController
{
    WAParticipantPickerConfiguration *_config;
    unsigned long long _type;
}

+ (unsigned long long)contactTypeForGroupType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)groupInviteLinkAction;
- (void)addActionSectionToSections:(id)arg1;
- (unsigned long long)selectionStateForContact:(id)arg1 shouldSelect:(_Bool)arg2;
- (_Bool)updateContactSelection:(id)arg1 shouldClearSearch:(_Bool *)arg2;
- (void)configureCell:(id)arg1 forContact:(id)arg2;
- (void)processContactSelection:(id)arg1 withSelectedJIDs:(id)arg2;
- (id)selectedJIDsForContacts:(id)arg1;
- (void)updateInterfaceOnSelectionChange;
- (void)doneAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 groupJID:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <WAGroupParticipantPickerViewControllerDelegate> delegate; // @dynamic delegate;

@end
