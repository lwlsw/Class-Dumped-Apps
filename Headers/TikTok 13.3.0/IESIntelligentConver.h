//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface IESIntelligentConver : NSObject
{
    float _score;
    UIImage *_image;
    CDStruct_1b6d18a9 _frameTime;
}

+ (id)intelligentConverWithImage:(id)arg1 score:(float)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
@property(nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

