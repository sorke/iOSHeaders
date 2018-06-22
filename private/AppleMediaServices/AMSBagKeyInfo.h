//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSBagKeyInfo : NSObject
{
    NSString *_bagKey;
    id <NSObject> _defaultValue;
    unsigned long long _valueType;
}

@property(readonly, nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) id <NSObject> defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2;

@end

