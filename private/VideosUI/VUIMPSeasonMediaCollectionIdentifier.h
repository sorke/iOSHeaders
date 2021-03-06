//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUIMPMediaEntityIdentifier.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier
{
    NSNumber *_seasonNumber;
}

+ (id)seasonIdentifierWithMediaItem:(id)arg1;
+ (id)requiredMPPropertyNames;
@property(copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;

@end

