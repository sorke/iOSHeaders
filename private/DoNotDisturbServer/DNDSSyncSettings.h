//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface DNDSSyncSettings : NSObject <NSCopying>
{
    _Bool _syncEnabled;
}

@property(readonly, nonatomic, getter=isSyncEnabled) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSyncEnabled:(_Bool)arg1;

@end

