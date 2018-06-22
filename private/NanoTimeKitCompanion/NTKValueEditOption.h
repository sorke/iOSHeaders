//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKValueEditOption : NTKEditOption
{
    unsigned long long _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (_Bool)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_optionWithValue:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_faceBundleStringToValueDict;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_valueToFaceBundleStringDict;
- (unsigned long long)_value;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidOption;
- (id)localizedNameForAction;
- (id)localizedName;
- (id)dailySnapshotKey;

@end

