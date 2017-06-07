//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSegmentCallHistory : NSObject
{
    int _longTermAdjustmentTBR;
    int _shortTermAdjustmentTBR;
    int _historyLength;
}

+ (int)fieldSize;
@property(readonly) int historyLength; // @synthesize historyLength=_historyLength;
@property(readonly) int longTermAdjustmentTBR; // @synthesize longTermAdjustmentTBR=_longTermAdjustmentTBR;
@property(readonly) int shortTermAdjustmentTBR; // @synthesize shortTermAdjustmentTBR=_shortTermAdjustmentTBR;
- (void)updateSegment:(int)arg1 shortTermWeight:(double)arg2 longTermWeight:(double)arg3;
- (int)deserialize:(int *)arg1;
- (int)serialize:(int *)arg1;
- (id)init;

@end
