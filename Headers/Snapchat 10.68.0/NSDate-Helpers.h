//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Helpers)
+ (id)dateFromISO8601String:(id)arg1;
+ (id)_ISO8601DateFormatterLocalTimezone;
+ (id)_ISO8601DateFormatter;
+ (double)percentTimeLeftSinceTimestamp:(id)arg1 expirationInHours:(long long)arg2;
+ (id)componentsInUtc:(id)arg1;
+ (unsigned long long)numOfDaysInMonth:(long long)arg1 inYear:(long long)arg2;
+ (id)dateWithComponents:(id)arg1;
+ (id)dateWithMonth:(long long)arg1 day:(long long)arg2 andYear:(long long)arg3;
+ (long long)currentTimeMillis;
+ (_Bool)isTimestampExpired:(id)arg1 timeInterval:(double)arg2;
+ (id)nextDateMatchingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
+ (id)dateFromOneYearAgo;
+ (id)dateByAddingYearsFromToday:(long long)arg1;
+ (id)dateFromTodayWithOffsetDays:(long long)arg1 offsetMonth:(long long)arg2 offsetYear:(long long)arg3;
+ (id)dateOneDayFromToday;
+ (long long)daysSinceTimestamp:(id)arg1;
+ (long long)minutesSinceTimestamp:(id)arg1 forWaitPeriod:(double)arg2;
+ (id)shortStringFromDate:(id)arg1;
+ (id)utcDateWithoutTime:(id)arg1;
+ (id)dateWithoutTime:(id)arg1;
+ (id)maxDateBetweenDates:(id)arg1 date2:(id)arg2;
+ (_Bool)isDate:(id)arg1 afterDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 beforeDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 withinSameMinuteAsDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 onSameDayOfTheYearAsDate:(id)arg2;
+ (_Bool)isTodayTheSameDayOfTheYearAsDate:(id)arg1;
+ (id)calendar;
+ (_Bool)isDate:(id)arg1 sameDayAsDate:(id)arg2;
+ (id)stringFromDate:(id)arg1;
+ (id)serverTimestampFromDate:(id)arg1;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (long long)timeInMillisFromDate:(id)arg1;
+ (id)dateFromTimeInMillis:(long long)arg1;
+ (id)dateFromServerTimestamp:(id)arg1;
- (id)ISO8601StringLocalTimezone;
- (id)ISO8601String;
- (id)stringFromDate;
- (long long)ageFromBirthday;
- (id)capDays;
- (id)toComponents;
@property(readonly, nonatomic) long long epochMillis;
- (_Bool)isAfter:(id)arg1;
- (_Bool)isBefore:(id)arg1;
- (_Bool)isWithinLastNumMinutes:(long long)arg1;
- (_Bool)isWithinLastNumDays:(long long)arg1;
- (_Bool)isWithin24Hours;
- (_Bool)isTomorrow;
- (_Bool)isYesterday;
- (_Bool)isToday;
@end

