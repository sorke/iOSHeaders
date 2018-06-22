//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary;

@interface SVWeakObjectCache : NSObject <NSCopying>
{
    NSMutableDictionary *_cache;
}

@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)removeObjectForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

