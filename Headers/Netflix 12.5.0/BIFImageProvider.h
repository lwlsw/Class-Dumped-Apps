//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BIFParserDelegate-Protocol.h"

@class BIFParser, NSArray, NSString;

@interface BIFImageProvider : NSObject <BIFParserDelegate>
{
    _Bool _executing;
    _Bool _finished;
    BIFParser *_bifParser;
    NSArray *_urls;
    long long _urlIndex;
}

+ (void)initialize;
@property(nonatomic) long long urlIndex; // @synthesize urlIndex=_urlIndex;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) BIFParser *bifParser; // @synthesize bifParser=_bifParser;
- (void).cxx_destruct;
- (void)bifParserDownloadFailed:(id)arg1 withError:(id)arg2;
- (void)bifParserFailed:(id)arg1 withError:(id)arg2;
- (void)bifParserDownloadSuccess:(id)arg1;
- (void)startFallbackDownload;
- (id)imageForTimeInterval:(double)arg1;
- (void)cancelDownload;
- (void)startDownload;
- (void)dealloc;
- (id)initWithBifData:(id)arg1;
- (id)initWithURLs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

