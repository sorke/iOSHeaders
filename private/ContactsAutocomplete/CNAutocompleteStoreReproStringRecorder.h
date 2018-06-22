//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSNumber, NSString;

@interface CNAutocompleteStoreReproStringRecorder : NSObject
{
    id <CNTimeProvider> _timeProvider;
    NSMutableString *_reproStringStorage;
    NSNumber *_lastTimestamp;
    NSString *_lastString;
}

@property(copy) NSString *lastString; // @synthesize lastString=_lastString;
@property(copy) NSNumber *lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(readonly) NSMutableString *reproStringStorage; // @synthesize reproStringStorage=_reproStringStorage;
@property(readonly) id <CNTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
- (void).cxx_destruct;
- (id)stringForKeystrokesSinceLastString:(id)arg1;
- (id)stringForIntervalSinceLastTimestamp:(double)arg1;
- (void)recordString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *reproString;
- (void)clear;
- (id)description;
- (id)initWithTimeProvider:(id)arg1;
- (id)init;

@end

