//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IESLiveVideoGiftShaderProgram : NSObject
{
    NSMutableArray *_attributes;
    unsigned int _program;
    unsigned int _vs;
    unsigned int _fs;
}

- (void).cxx_destruct;
- (void)destroy;
- (int)uniformLocation:(id)arg1;
- (void)bindAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (void)use;
- (_Bool)link;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (_Bool)loadShaders;
- (id)initWithVsString:(id)arg1 fsString:(id)arg2;

@end

