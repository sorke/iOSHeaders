//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface CUKeychainItem : NSObject
{
    _Bool _legacy;
    int _accessibleType;
    int _syncType;
    NSString *_accessGroup;
    NSString *_identifier;
    NSDictionary *_metadata;
    NSString *_name;
    NSData *_persistentRef;
    NSDictionary *_secrets;
    NSString *_type;
    NSString *_userDescription;
    NSString *_viewHint;
}

@property(copy, nonatomic) NSString *viewHint; // @synthesize viewHint=_viewHint;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) int syncType; // @synthesize syncType=_syncType;
@property(copy, nonatomic) NSDictionary *secrets; // @synthesize secrets=_secrets;
@property(copy, nonatomic) NSData *persistentRef; // @synthesize persistentRef=_persistentRef;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool legacy; // @synthesize legacy=_legacy;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int accessibleType; // @synthesize accessibleType=_accessibleType;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
- (void).cxx_destruct;
- (_Bool)_updateWithAttributesDictionary:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (void)_mergeItem:(id)arg1;
- (id)_attributesDictionaryWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;

@end

