//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataBrokerDataProviderProtocol-Protocol.h"

@class MessagingNotificationsModel, NFUIConfigManager;
@protocol DataBrokerDataProviderProtocol;

@interface NFLXProfileSession : NSObject <DataBrokerDataProviderProtocol>
{
    id <DataBrokerDataProviderProtocol> _delegate;
    NFUIConfigManager *_configManager;
    MessagingNotificationsModel *_messagingNotificationsModel;
}

@property(retain, nonatomic) MessagingNotificationsModel *messagingNotificationsModel; // @synthesize messagingNotificationsModel=_messagingNotificationsModel;
@property(retain, nonatomic) NFUIConfigManager *configManager; // @synthesize configManager=_configManager;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)objectContext;
- (id)init;

@end
