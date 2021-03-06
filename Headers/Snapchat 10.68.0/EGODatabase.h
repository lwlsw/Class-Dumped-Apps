//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface EGODatabase : NSObject
{
    struct sqlite3 *_sqliteHandle;
    NSObject<OS_dispatch_semaphore> *_executeLock;
    NSString *_databasePath;
    _Bool _opened;
}

+ (id)databaseWithPath_DEPRECATED:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 toParameters:(id)arg2;
- (int)lastErrorCode;
- (_Bool)hadError;
- (id)lastErrorMessage;
- (id)executeQuery:(id)arg1 parameters:(id)arg2;
- (id)executeQuery:(id)arg1;
- (long long)lastInsertRowId;
- (_Bool)executeUpdate:(id)arg1 parameters:(id)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)close;
- (_Bool)open;
- (id)initWithPath_DEPRECATED:(id)arg1;
- (id)statementWithSQL:(id)arg1;

@end

