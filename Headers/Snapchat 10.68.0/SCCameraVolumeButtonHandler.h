//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCCameraVolumeButtonHandlerDelegate;

@interface SCCameraVolumeButtonHandler : NSObject
{
    NSString *_secretFeatureToken;
    _Bool _pressingButton1;
    _Bool _pressingButton2;
    _Bool _stopsHandlingWhenPressingEnds;
    id <SCCameraVolumeButtonHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCameraVolumeButtonHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_changePressingButton:(CDUnknownBlockType)arg1;
- (void)_handleButton2Up:(id)arg1;
- (void)_handleButton2Down:(id)arg1;
- (void)_handleButton1Up:(id)arg1;
- (void)_handleButton1Down:(id)arg1;
- (void)_resetPressingButtons;
- (_Bool)isPressingVolumeButton;
- (_Bool)isHandlingVolumeButtonEvents;
- (void)stopHandlingVolumeButtonEventsWhenPressingEnds;
- (void)stopHandlingVolumeButtonEvents;
- (void)startHandlingVolumeButtonEvents;
- (void)dealloc;
- (id)init;

@end

