//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class NSString;

@interface MSAEncryptedSoapNodeParser : MSABaseXmlParser
{
    _Bool _shouldIgnoreFirstStartNode;
    NSString *_cipherValue;
}

@property(readonly) NSString *cipherValue; // @synthesize cipherValue=_cipherValue;
- (void).cxx_destruct;
- (void)onParserFinished;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;
- (id)initWithData:(id)arg1;

@end

