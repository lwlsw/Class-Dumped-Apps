//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAGDPRReportMetadata-Protocol.h"
#import "WAMMSMediaDownloadOperationDelegate-Protocol.h"

@class WAMMSMediaDownloadOperation, WAMMSTimer, WAPBMessage_DocumentMessage;

@interface _WAGDPRReportDownloadHelper : NSObject <WAMMSMediaDownloadOperationDelegate, WAGDPRReportMetadata>
{
    WAMMSMediaDownloadOperation *_downloadTask;
    WAMMSTimer *_downloadTimer;
    WAPBMessage_DocumentMessage *_reportMetadata;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) WAPBMessage_DocumentMessage *reportMetadata; // @synthesize reportMetadata=_reportMetadata;
- (void).cxx_destruct;
- (void)downloadTask:(id)arg1 populatedDownloadEvent:(id)arg2 shouldSubmit:(_Bool)arg3 isRetry:(_Bool)arg4;
- (void)downloadTask:(id)arg1 didFinishWithAsset:(id)arg2 error:(id)arg3 terminal:(_Bool)arg4 bytesTransferred:(unsigned long long)arg5;
- (void)downloadTask:(id)arg1 assetForDecryptedFile:(CDUnknownBlockType)arg2;
- (void)downloadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (unsigned long long)fileLength;
- (id)fileName;
- (id)plaintextHash;
- (id)ciphertextHash;
- (id)mimeType;
- (id)directPath;
- (id)mediaKey;
- (void)startDownload;
- (id)initWithReportMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

