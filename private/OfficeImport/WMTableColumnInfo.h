//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMTableColumnInfo : NSObject
{
    NSMutableArray *mStopArray;
}

- (unsigned long long)count;
- (unsigned int)columnSpan:(float)arg1 at:(unsigned int)arg2;
- (void)mergeStopArray:(id)arg1;
- (float)stopAt:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithStopArray:(id)arg1;

@end
