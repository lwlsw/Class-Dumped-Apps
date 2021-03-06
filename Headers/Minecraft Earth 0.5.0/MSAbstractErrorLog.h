//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLogWithProperties.h"

@class NSDate, NSNumber, NSString;

@interface MSAbstractErrorLog : MSLogWithProperties
{
    _Bool _fatal;
    NSString *_id;
    NSNumber *_processId;
    NSString *_processName;
    NSNumber *_parentProcessId;
    NSString *_parentProcessName;
    NSNumber *_errorThreadId;
    NSString *_errorThreadName;
    NSDate *_appLaunchTimestamp;
    NSString *_architecture;
}

@property(copy, nonatomic) NSString *architecture; // @synthesize architecture=_architecture;
@property(retain, nonatomic) NSDate *appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic, getter=isFatal) _Bool fatal; // @synthesize fatal=_fatal;
@property(copy, nonatomic) NSString *errorThreadName; // @synthesize errorThreadName=_errorThreadName;
@property(retain, nonatomic) NSNumber *errorThreadId; // @synthesize errorThreadId=_errorThreadId;
@property(copy, nonatomic) NSString *parentProcessName; // @synthesize parentProcessName=_parentProcessName;
@property(retain, nonatomic) NSNumber *parentProcessId; // @synthesize parentProcessId=_parentProcessId;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSNumber *processId; // @synthesize processId=_processId;
@property(copy, nonatomic) NSString *errorId; // @synthesize errorId=_id;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (id)serializeToDictionary;

@end

