//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DeNAWPCommandResult : NSObject
{
    int retCode;
    NSString *retValue;
}

@property(copy, nonatomic) NSString *retValue; // @synthesize retValue;
@property int retCode; // @synthesize retCode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

