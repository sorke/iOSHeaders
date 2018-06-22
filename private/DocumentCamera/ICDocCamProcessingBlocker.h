//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface ICDocCamProcessingBlocker : NSObject
{
    id <ICDocCamProcessingBlockerDelegate> _delegate;
    NSMutableSet *_blockerSet;
}

@property(retain, nonatomic) NSMutableSet *blockerSet; // @synthesize blockerSet=_blockerSet;
@property(nonatomic) __weak id <ICDocCamProcessingBlockerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeBlockerOfType:(id)arg1;
- (void)addBlockerOfType:(id)arg1 clearRectangles:(_Bool)arg2 clearQueue:(_Bool)arg3;
- (_Bool)blocked;
- (id)initWithDelegate:(id)arg1;

@end

