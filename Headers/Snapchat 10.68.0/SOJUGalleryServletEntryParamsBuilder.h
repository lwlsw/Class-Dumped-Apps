//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletEntryParamsBuilder : NSObject
{
    NSString *_entryId;
    NSNumber *_entryType;
    NSArray *_snapIds;
    NSArray *_snapsUploadInfo;
    NSArray *_highlightedSnapIds;
    NSNumber *_seqNum;
    NSNumber *_createTime;
    NSString *_title;
    NSNumber *_isPrivate;
    NSNumber *_lastAutosaveTime;
    NSString *_externalId;
    NSArray *_snapOperations;
    NSNumber *_entrySource;
    NSNumber *_deleteAllShared;
}

+ (id)withJUGalleryServletEntryParams:(id)arg1;
- (void).cxx_destruct;
- (id)setDeleteAllShared:(id)arg1;
- (id)setEntrySource:(id)arg1;
- (id)setSnapOperations:(id)arg1;
- (id)setExternalId:(id)arg1;
- (id)setLastAutosaveTime:(id)arg1;
- (id)setIsPrivate:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setCreateTime:(id)arg1;
- (id)setSeqNum:(id)arg1;
- (id)setHighlightedSnapIds:(id)arg1;
- (id)setSnapsUploadInfo:(id)arg1;
- (id)setSnapIds:(id)arg1;
- (id)setEntryType:(id)arg1;
- (id)setEntryId:(id)arg1;
- (id)build;
- (id)setDeleteAllSharedValue:(_Bool)arg1;
- (id)setEntrySourceEnum:(long long)arg1;
- (id)setEntrySourceValue:(int)arg1;
- (id)setLastAutosaveTimeValue:(long long)arg1;
- (id)setIsPrivateValue:(_Bool)arg1;
- (id)setCreateTimeValue:(long long)arg1;
- (id)setSeqNumValue:(long long)arg1;
- (id)setEntryTypeEnum:(long long)arg1;
- (id)setEntryTypeValue:(int)arg1;

@end
