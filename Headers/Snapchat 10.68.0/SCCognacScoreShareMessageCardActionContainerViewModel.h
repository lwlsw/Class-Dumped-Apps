//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SCCognacScoreShareMessageBitmojiDataSource, SCNetworkImage;

@interface SCCognacScoreShareMessageCardActionContainerViewModel : NSObject <NSCopying>
{
    SCCognacScoreShareMessageBitmojiDataSource *_bitmojiDataSource;
    NSString *_buttonText;
    NSAttributedString *_scoreText;
    NSAttributedString *_titleText;
    SCNetworkImage *_scoreIconImage;
}

@property(readonly, copy, nonatomic) SCNetworkImage *scoreIconImage; // @synthesize scoreIconImage=_scoreIconImage;
@property(readonly, copy, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) NSAttributedString *scoreText; // @synthesize scoreText=_scoreText;
@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) SCCognacScoreShareMessageBitmojiDataSource *bitmojiDataSource; // @synthesize bitmojiDataSource=_bitmojiDataSource;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBitmojiDataSource:(id)arg1 buttonText:(id)arg2 scoreText:(id)arg3 titleText:(id)arg4 scoreIconImage:(id)arg5;

@end

