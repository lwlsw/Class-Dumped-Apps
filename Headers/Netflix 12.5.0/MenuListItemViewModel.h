//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MenuListSectionViewModel, NSDictionary, NSIndexPath, NSString, UIColor;

@interface MenuListItemViewModel : NSObject
{
    MenuListSectionViewModel *_section;
    _Bool _disabled;
    _Bool _centerAligned;
    _Bool _selected;
    _Bool _showsDisclosureIndicator;
    NSIndexPath *_indexPath;
    NSString *_genreId;
    NSString *_iconName;
    NSString *_menuName;
    NSDictionary *_colors;
    NSString *_pageType;
    NSString *_name;
    double _iconFontSize;
    double _separatorHeight;
    UIColor *_separatorColor;
    id _menuAssociatedObject;
    double _height;
    NSString *_reuseIdentifier;
}

@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) _Bool showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(readonly, nonatomic) id menuAssociatedObject; // @synthesize menuAssociatedObject=_menuAssociatedObject;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(readonly, nonatomic) double iconFontSize; // @synthesize iconFontSize=_iconFontSize;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(readonly, copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(readonly, copy, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
@property(readonly, nonatomic) _Bool centerAligned; // @synthesize centerAligned=_centerAligned;
@property(readonly, copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, copy, nonatomic) NSString *genreId; // @synthesize genreId=_genreId;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithDictionary:(id)arg1 section:(id)arg2;

@end
