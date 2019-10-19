//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel;

@interface ImpressionTableViewCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_typeLabel;
    UILabel *_idLabel;
    UILabel *_idTypeLabel;
    UILabel *_impressionIdLabel;
    UILabel *_impressionIndexLabel;
    UILabel *_impressionParentIdLabel;
    UILabel *_impressionParentNameLabel;
}

@property(nonatomic) __weak UILabel *impressionParentNameLabel; // @synthesize impressionParentNameLabel=_impressionParentNameLabel;
@property(nonatomic) __weak UILabel *impressionParentIdLabel; // @synthesize impressionParentIdLabel=_impressionParentIdLabel;
@property(nonatomic) __weak UILabel *impressionIndexLabel; // @synthesize impressionIndexLabel=_impressionIndexLabel;
@property(nonatomic) __weak UILabel *impressionIdLabel; // @synthesize impressionIdLabel=_impressionIdLabel;
@property(nonatomic) __weak UILabel *idTypeLabel; // @synthesize idTypeLabel=_idTypeLabel;
@property(nonatomic) __weak UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(nonatomic) __weak UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *idType;
@property(retain, nonatomic) NSString *impressionParentName;

@end
