//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, SCGroupInviteDetails;

@interface SCGroupInviteCreationViewModel : SCComposerMarshallableObject
{
    SCGroupInviteDetails *_initialInviteDetailsToEdit;
    NSNumber *_keyboardHeight;
}

@property(retain, nonatomic) NSNumber *keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) SCGroupInviteDetails *initialInviteDetailsToEdit; // @synthesize initialInviteDetailsToEdit=_initialInviteDetailsToEdit;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithInitialInviteDetailsToEdit:(id)arg1 keyboardHeight:(id)arg2;

@end

