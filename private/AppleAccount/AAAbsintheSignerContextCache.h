//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAAbsintheContext, NSDate;

@interface AAAbsintheSignerContextCache : NSObject
{
    NSDate *_creationDate;
    AAAbsintheContext *_context;
}

+ (id)cacheWithContext:(id)arg1;
@property(readonly, nonatomic) AAAbsintheContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

