//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ProtoService : NSObject
{
    NSString *_host;
    NSString *_packageName;
    NSString *_serviceName;
}

- (void).cxx_destruct;
- (id)RPCToMethod:(id)arg1 requestsWriter:(id)arg2 responseClass:(Class)arg3 responsesWriteable:(id)arg4;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3;
- (id)init;

@end
