//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASTextNode, NSString;

@interface UrlLabelNode : BaseFeedDisplayNode
{
    _Bool _shouldShowLinkIcon;
    ASTextNode *_textNode;
    NSString *_domainString;
    unsigned long long _layoutStyle;
}

@property(nonatomic) _Bool shouldShowLinkIcon; // @synthesize shouldShowLinkIcon=_shouldShowLinkIcon;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSString *domainString; // @synthesize domainString=_domainString;
@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
- (void).cxx_destruct;
- (void)configureNodes;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithDomainString:(id)arg1 style:(unsigned long long)arg2 shouldShowLinkIcon:(_Bool)arg3;

@end

