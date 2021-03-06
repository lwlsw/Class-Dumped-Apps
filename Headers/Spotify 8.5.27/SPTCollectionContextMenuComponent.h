//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, UIImage;
@protocol SPTContextMenuOptions, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory;

@interface SPTCollectionContextMenuComponent : NSObject
{
    NSURL *_headerImageURL;
    UIImage *_headerImagePlaceholder;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_tasks;
    NSURL *_entityURL;
    NSURL *_trackURL;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuOptions> _contextMenuOptions;
}

@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(readonly, nonatomic) __weak id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) __weak id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(readonly, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *headerImagePlaceholder; // @synthesize headerImagePlaceholder=_headerImagePlaceholder;
@property(readonly, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
- (void).cxx_destruct;
- (id)provideContextMenuOptions;
- (id)presentContextMenuInViewController:(id)arg1 senderView:(id)arg2;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 tasks:(id)arg5 entityURL:(id)arg6 trackURL:(id)arg7 contextMenu:(id)arg8;

@end

