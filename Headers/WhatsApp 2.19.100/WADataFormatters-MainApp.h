//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WADataFormatters.h>

@interface WADataFormatters (MainApp)
+ (id)localizedNameList:(id)arg1;
+ (id)localizedNameListThreeOrMoreItems:(id)arg1 secondItem:(id)arg2 additionalMiddleItems:(id)arg3 lastItem:(id)arg4;
+ (id)localizedNameListWithTwoItems:(id)arg1 secondItem:(id)arg2;
+ (id)timeLeftStringFromTimeInterval:(double)arg1 forAccessibilityLabel:(_Bool)arg2;
+ (id)updatedAgoStringFromTimeInterval:(double)arg1 extraPrecision:(_Bool)arg2;
+ (id)agoStringFromTimeInterval:(double)arg1 extraPrecision:(_Bool)arg2;
+ (id)messageDateStringFromDate:(id)arg1;
+ (id)dateTimeStringFromDate:(id)arg1;
+ (id)chatTimestampFromDate:(id)arg1;
+ (id)aboutUpdateTimestampStringFromDate:(id)arg1 forVoiceOver:(_Bool)arg2;
+ (id)lastUpdatedStringFromDate:(id)arg1;
+ (id)lastActiveStringFromDate:(id)arg1;
+ (id)lastSeenStringFromDate:(id)arg1;
@end
