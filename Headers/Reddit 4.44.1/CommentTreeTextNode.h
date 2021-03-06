//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "RichTextDisplayNodeDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CommentTreeNode, CommentTreeNodeOptions, CommentTreeVisualDepthNode, NSString, RichTextDisplayNode, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CommentTreeTextNodeDelegate;

@interface CommentTreeTextNode : BaseFeedDisplayNode <RichTextDisplayNodeDelegate, UIGestureRecognizerDelegate>
{
    CommentTreeNode *_commentNode;
    RichTextDisplayNode *_textNode;
    CommentTreeVisualDepthNode *_visualDepthNode;
    id <CommentTreeTextNodeDelegate> _delegate;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    CommentTreeNodeOptions *_commentOptions;
}

@property(retain, nonatomic) CommentTreeNodeOptions *commentOptions; // @synthesize commentOptions=_commentOptions;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(nonatomic) __weak id <CommentTreeTextNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CommentTreeVisualDepthNode *visualDepthNode; // @synthesize visualDepthNode=_visualDepthNode;
@property(retain, nonatomic) RichTextDisplayNode *textNode; // @synthesize textNode=_textNode;
@property(retain, nonatomic) CommentTreeNode *commentNode; // @synthesize commentNode=_commentNode;
- (void).cxx_destruct;
- (void)modelAttributedStringsDidUpdate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didLongTapComment:(id)arg1;
- (void)didDoubleTapComment:(id)arg1;
- (void)richTextDisplayNode:(id)arg1 didTapSpoiler:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)richTextDisplayNode:(id)arg1 didTapMedia:(id)arg2 withMediaLabels:(id)arg3;
- (void)richTextDisplayNode:(id)arg1 didTapURL:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didLoad;
- (void)configureTextNode;
- (void)createVisualDepthNode;
- (void)createTextNode;
- (id)initWithCommentTreeNode:(id)arg1 delegate:(id)arg2 commentOptions:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

