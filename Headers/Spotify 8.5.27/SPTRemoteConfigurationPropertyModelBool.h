//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTRemoteConfigurationPropertyModel.h"

@interface SPTRemoteConfigurationPropertyModelBool : SPTRemoteConfigurationPropertyModel
{
    _Bool _value;
    _Bool _defaultValue;
}

@property(readonly, nonatomic) _Bool defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
- (id)copyModelWithValue:(_Bool)arg1;
- (id)initWithName:(id)arg1 componentId:(id)arg2 value:(_Bool)arg3 defaultValue:(_Bool)arg4;

@end

