//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface __NSFastEnumerationEnumerator : NSEnumerator
{
    id <NSFastEnumeration> _obj;
    id _origObj;
    unsigned long long _index;
    unsigned long long _count;
    unsigned long long _mut;
    id _objects[16];
    CDStruct_58648341 _state;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)nextObject;
- (id)initWithObject:(id)arg1;

@end

