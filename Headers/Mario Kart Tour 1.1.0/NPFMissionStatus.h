//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface NPFMissionStatus : NSObject
{
    _Bool _completed;
    _Bool _limited;
    NSString *_missionId;
    NSString *_missionKey;
    NSString *_title;
    NSString *_detail;
    long long _pointAmount;
    NSNumber *_timesCompleted;
    long long _totalSteps;
    NSNumber *_currentSteps;
    long long _limitEndsAt;
    NSDictionary *_availableGifts;
}

+ (void)getAll:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSDictionary *availableGifts; // @synthesize availableGifts=_availableGifts;
@property(nonatomic) long long limitEndsAt; // @synthesize limitEndsAt=_limitEndsAt;
@property(nonatomic) _Bool limited; // @synthesize limited=_limited;
@property(copy, nonatomic) NSNumber *currentSteps; // @synthesize currentSteps=_currentSteps;
@property(nonatomic) long long totalSteps; // @synthesize totalSteps=_totalSteps;
@property(copy, nonatomic) NSNumber *timesCompleted; // @synthesize timesCompleted=_timesCompleted;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) long long pointAmount; // @synthesize pointAmount=_pointAmount;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *missionKey; // @synthesize missionKey=_missionKey;
@property(copy, nonatomic) NSString *missionId; // @synthesize missionId=_missionId;
- (void).cxx_destruct;
- (void)receiveAvailableGifts:(CDUnknownBlockType)arg1;

@end
