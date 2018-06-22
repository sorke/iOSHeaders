//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RELoggable.h"

@class NSString;

@interface REContentRanker : NSObject <RELoggable>
{
    struct REContentFeatureExtractor _extractor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)negativeMapSize;
- (long long)positiveMapSize;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (id)predict:(id)arg1;
- (_Bool)train:(id)arg1 isPositive:(_Bool)arg2;
- (_Bool)save:(id)arg1 error:(id *)arg2;
- (_Bool)load:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

