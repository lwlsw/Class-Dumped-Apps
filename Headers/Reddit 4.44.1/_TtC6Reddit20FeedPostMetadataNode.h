//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASTextNode, Post, _TtC6Reddit18AwardsMetadataNode;
@protocol _TtP6Reddit28FeedPostMetadataNodeDelegate_;

@interface _TtC6Reddit20FeedPostMetadataNode : ASDisplayNode
{
    // Error parsing type: , name: post
    // Error parsing type: , name: options
    // Error parsing type: , name: viewModel.storage
    // Error parsing type: , name: delegate
    // Error parsing type: , name: contentInsets
    // Error parsing type: , name: metadataLabel
    // Error parsing type: , name: awardsNode
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPost:(id)arg1 options:(id)arg2;
@property(nonatomic, readonly) _TtC6Reddit18AwardsMetadataNode *awardsNode; // @synthesize awardsNode;
@property(nonatomic, readonly) ASTextNode *metadataLabel; // @synthesize metadataLabel;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets;
@property(nonatomic) __weak id <_TtP6Reddit28FeedPostMetadataNodeDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) Post *post; // @synthesize post;

@end

