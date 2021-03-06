//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>
{
    NSMapTable *_backingMapTable;
}

@property(retain, nonatomic) NSMapTable *backingMapTable; // @synthesize backingMapTable=_backingMapTable;
- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (void)addObjects:(id)arg1 forKey:(id)arg2;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;

@end

