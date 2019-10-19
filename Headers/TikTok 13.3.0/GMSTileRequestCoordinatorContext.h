//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSTileCoords, GMSTileRequestCoordinator;
@protocol GMSTileService;

@interface GMSTileRequestCoordinatorContext : NSObject
{
    GMSTileRequestCoordinator *_coordinator;
    GMSTileCoords *_coords;
    id <GMSTileService> _tileService;
    id _target;
    SEL _selector;
    _Bool _scrubParams;
}

- (void).cxx_destruct;
- (void)tileService:(id)arg1 tileCoords:(id)arg2 status:(int)arg3 tile:(id)arg4 diffTiles:(id)arg5;
- (id)description;
- (void)cancel;
- (void)sendRequest;
- (id)initWithCoordinator:(id)arg1 tileCoords:(id)arg2 tileService:(id)arg3 target:(id)arg4 selector:(SEL)arg5 scrubTileParams:(_Bool)arg6;

@end
