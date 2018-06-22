//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityPropertyDescriptor : NSObject <NSCopying>
{
    _Bool _allowsDefaultValue;
    _Bool _retrievesSourcePropertiesAtFetch;
    _Bool _sourceSupportsFiltering;
    NSString *_name;
    NSString *_sortAsName;
    unsigned long long _propertyType;
    NSString *_propertyValueClassName;
    id _defaultValue;
    NSSet *_sourcePropertyNames;
    CDUnknownBlockType _sourceFilterValueBlock;
    CDUnknownBlockType _sourceFilterBlock;
}

+ (id)_classNameFromPropertyType:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType sourceFilterBlock; // @synthesize sourceFilterBlock=_sourceFilterBlock;
@property(copy, nonatomic) CDUnknownBlockType sourceFilterValueBlock; // @synthesize sourceFilterValueBlock=_sourceFilterValueBlock;
@property(nonatomic) _Bool sourceSupportsFiltering; // @synthesize sourceSupportsFiltering=_sourceSupportsFiltering;
@property(nonatomic) _Bool retrievesSourcePropertiesAtFetch; // @synthesize retrievesSourcePropertiesAtFetch=_retrievesSourcePropertiesAtFetch;
@property(copy, nonatomic) NSSet *sourcePropertyNames; // @synthesize sourcePropertyNames=_sourcePropertyNames;
@property(nonatomic) _Bool allowsDefaultValue; // @synthesize allowsDefaultValue=_allowsDefaultValue;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *propertyValueClassName; // @synthesize propertyValueClassName=_propertyValueClassName;
@property(nonatomic) unsigned long long propertyType; // @synthesize propertyType=_propertyType;
@property(copy, nonatomic) NSString *sortAsName; // @synthesize sortAsName=_sortAsName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_updateSourceSupportsFiltering;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

