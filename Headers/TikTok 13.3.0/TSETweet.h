//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;
@protocol TSEGeoPlace, TSETweetAttachment;

@interface TSETweet : NSObject <NSCopying>
{
    NSNumber *_inReplyToTweetID;
    NSString *_text;
    id <TSETweetAttachment> _attachment;
    id <TSEGeoPlace> _place;
}

+ (id)emptyTweet;
+ (Class)twitterText;
+ (void)setTwitterText:(Class)arg1;
@property(retain, nonatomic) id <TSEGeoPlace> place; // @synthesize place=_place;
@property(retain, nonatomic) id <TSETweetAttachment> attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSNumber *inReplyToTweetID; // @synthesize inReplyToTweetID=_inReplyToTweetID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isNearOrOverCharacterLimit;
- (_Bool)isWithinCharacterLimit;
- (long long)remainingCharacters;
- (id)textWithLeadingUsernames:(id)arg1 hashtags:(id)arg2 text:(id)arg3;
- (id)initWithInReplyToTweetID:(id)arg1 text:(id)arg2 attachment:(id)arg3 place:(id)arg4 usernames:(id)arg5 hashtags:(id)arg6;

@end

