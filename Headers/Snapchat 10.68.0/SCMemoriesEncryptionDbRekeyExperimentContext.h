//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMemoriesEncryptionDbRekeyExperimentContext : SCExperimentContext
{
    _Bool _forceCleanDB;
    _Bool _allowMigration;
}

@property(readonly, nonatomic) _Bool allowMigration; // @synthesize allowMigration=_allowMigration;
@property(readonly, nonatomic) _Bool forceCleanDB; // @synthesize forceCleanDB=_forceCleanDB;
- (void)setupParameters;
- (id)experimentName;

@end

