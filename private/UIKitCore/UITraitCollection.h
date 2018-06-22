//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_759b680f _builtinTraits;
    NSDictionary *_clientDefinedTraits;
}

+ (id)_defaultTraitCollection;
+ (id)_emptyTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)traitCollectionWithBarPosition:(long long)arg1;
+ (id)traitCollectionWithBarMetrics:(long long)arg1;
- (id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2;
@property(readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
- (double)displayCornerRadius;
@property(readonly, nonatomic) long long forceTouchCapability;
@property(readonly, nonatomic) long long layoutDirection;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) long long verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass;
@property(readonly, nonatomic) long long displayGamut;
@property(readonly, nonatomic) double displayScale;
- (unsigned long long)primaryInteractionModel;
- (unsigned long long)interactionModel;
- (long long)touchLevel;
@property(readonly, nonatomic) long long userInterfaceIdiom;
- (_Bool)_changedContentSizeCategoryFromTraitCollection:(id)arg1;
- (id)_valueForTraitNamed:(id)arg1;
- (_Bool)_matchesIntersectionWithTraitCollection:(id)arg1;
- (_Bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)_description;
- (id)_descriptionWithPrivateTraits:(_Bool)arg1;
- (long long)_compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)_initWithBuiltinTraitStorage:(CDStruct_759b680f *)arg1 clientDefinedTraits:(id)arg2;
@property(readonly, nonatomic) long long barPosition;
@property(readonly, nonatomic) long long barMetrics;
- (id)_namedImageDescription;

@end

