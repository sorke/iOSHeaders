//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface XCTResult : NSObject
{
    id _value;
    NSError *_error;
}

+ (id)resultWithError:(id)arg1;
+ (id)resultWithValue:(id)arg1;
+ (id)result;
+ (id)resultWithValue:(id)arg1 error:(id)arg2;
+ (id)futureResultWithDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)futureResultWithTimeout:(double)arg1 description:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly) _Bool hasError;
@property(readonly) _Bool hasValue;
- (id)initWithValue:(id)arg1 error:(id)arg2;

@end

