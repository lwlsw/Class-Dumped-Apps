//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImage;

@interface SCFriendsFeedComponentViewRightButtonViewModel : NSObject <NSCopying>
{
    _Bool _highlighted;
    long long _buttonState;
    SCNetworkImage *_buttonIcon;
    NSString *_iconId;
}

@property(readonly, copy, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(readonly, nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, copy, nonatomic) SCNetworkImage *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(readonly, nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithButtonState:(long long)arg1 buttonIcon:(id)arg2 highlighted:(_Bool)arg3 iconId:(id)arg4;

@end

