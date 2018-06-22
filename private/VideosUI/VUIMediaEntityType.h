//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface VUIMediaEntityType : NSObject <NSCopying>
{
    _Bool _rental;
    unsigned long long _subtype;
    unsigned long long _mediaCategoryType;
    unsigned long long _mediaCollectionType;
}

+ (id)season;
+ (id)show;
+ (id)episode;
+ (id)homeVideo;
+ (id)movieRental;
+ (id)movie;
@property(nonatomic, getter=isRental) _Bool rental; // @synthesize rental=_rental;
@property(nonatomic) unsigned long long mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
- (id)description;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
- (id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(_Bool)arg2;
- (id)init;

@end

