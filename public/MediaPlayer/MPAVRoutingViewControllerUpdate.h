//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MPAVRoutingViewControllerUpdate : NSObject
{
    _Bool _canGroup;
    _Bool _hasPendingPickedRoutes;
    NSArray *_pickedRoutes;
    NSArray *_pendingPickedRoutes;
    NSArray *_displayableAvailableRoutes;
    NSArray *_displayAsPickedRoutes;
}

@property(nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(nonatomic) _Bool canGroup; // @synthesize canGroup=_canGroup;
@property(copy, nonatomic) NSArray *displayAsPickedRoutes; // @synthesize displayAsPickedRoutes=_displayAsPickedRoutes;
@property(copy, nonatomic) NSArray *displayableAvailableRoutes; // @synthesize displayableAvailableRoutes=_displayableAvailableRoutes;
@property(copy, nonatomic) NSArray *pendingPickedRoutes; // @synthesize pendingPickedRoutes=_pendingPickedRoutes;
@property(copy, nonatomic) NSArray *pickedRoutes; // @synthesize pickedRoutes=_pickedRoutes;
- (void).cxx_destruct;

@end

