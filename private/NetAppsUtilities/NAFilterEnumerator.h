//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

__attribute__((visibility("hidden")))
@interface NAFilterEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _filter;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 filter:(CDUnknownBlockType)arg2;

@end

