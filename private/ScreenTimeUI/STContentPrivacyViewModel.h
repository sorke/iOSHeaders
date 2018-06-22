//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet, NSString;

@interface STContentPrivacyViewModel : NSObject
{
    _Bool _isLoaded;
    _Bool _includesLocalDevice;
    _Bool _restrictionsEnabled;
    NSString *_userName;
    NSMutableDictionary *_valuesByRestriction;
    NSSet *_visibleRestrictions;
}

@property(copy, nonatomic) NSSet *visibleRestrictions; // @synthesize visibleRestrictions=_visibleRestrictions;
@property(retain, nonatomic) NSMutableDictionary *valuesByRestriction; // @synthesize valuesByRestriction=_valuesByRestriction;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool restrictionsEnabled; // @synthesize restrictionsEnabled=_restrictionsEnabled;
@property(nonatomic) _Bool includesLocalDevice; // @synthesize includesLocalDevice=_includesLocalDevice;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
- (id)defaultValueForRestriction:(id)arg1;
- (id)visibleRestrictionWithConfiguration:(id)arg1 key:(id)arg2;
- (id)init;

@end

