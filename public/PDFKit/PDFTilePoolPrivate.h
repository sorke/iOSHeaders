//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, PDFTimer;

__attribute__((visibility("hidden")))
@interface PDFTilePoolPrivate : NSObject
{
    NSObject<OS_dispatch_queue> *workQueue;
    struct os_unfair_lock_s surfacesLock;
    NSMutableDictionary *usedSurfaces;
    NSMutableDictionary *freeSurfaces;
    PDFTimer *recycleTimer;
    int tileRenderType;
    _Bool debugColorTileEdge;
}

- (void).cxx_destruct;

@end

