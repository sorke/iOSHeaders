//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ETDataSource.h"

@class ETImageDescriptorExtractor;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithExtractor : NSObject <ETDataSource>
{
    id <ETDataSource> _source;
    ETImageDescriptorExtractor *_extractor;
}

- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;

@end

