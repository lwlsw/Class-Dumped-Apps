//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEEntityRowStyle, GLUESectionHeaderStyle, SPTYourLibraryMusicGLUETheme, SPTYourLibraryMusicOverlayImageViewStyle;
@protocol GLUEImageLoader;

@interface SPTYourLibraryMusicPlaylistsCellConfigurator : NSObject
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTYourLibraryMusicGLUETheme *_theme;
    GLUEEntityRowStyle *_rowStyle;
    GLUESectionHeaderStyle *_sectionHeaderStyle;
    SPTYourLibraryMusicOverlayImageViewStyle *_overlayImageViewStyle;
    SPTYourLibraryMusicOverlayImageViewStyle *_solidOverlayImageViewStyle;
    SPTYourLibraryMusicOverlayImageViewStyle *_gradientOverlayImageViewStyle;
}

@property(readonly, nonatomic) SPTYourLibraryMusicOverlayImageViewStyle *gradientOverlayImageViewStyle; // @synthesize gradientOverlayImageViewStyle=_gradientOverlayImageViewStyle;
@property(readonly, nonatomic) SPTYourLibraryMusicOverlayImageViewStyle *solidOverlayImageViewStyle; // @synthesize solidOverlayImageViewStyle=_solidOverlayImageViewStyle;
@property(readonly, nonatomic) SPTYourLibraryMusicOverlayImageViewStyle *overlayImageViewStyle; // @synthesize overlayImageViewStyle=_overlayImageViewStyle;
@property(retain, nonatomic) GLUESectionHeaderStyle *sectionHeaderStyle; // @synthesize sectionHeaderStyle=_sectionHeaderStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *rowStyle; // @synthesize rowStyle=_rowStyle;
@property(readonly, nonatomic) SPTYourLibraryMusicGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)setupTrailingAccessoryForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
@property(readonly, nonatomic) double preferredCellHeight;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2 style:(id)arg3;

@end

