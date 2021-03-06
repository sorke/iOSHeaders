//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSKeyedUnarchiver.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver
{
    NSDictionary *_defaultValues;
}

- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(_Bool)arg3;

@end

