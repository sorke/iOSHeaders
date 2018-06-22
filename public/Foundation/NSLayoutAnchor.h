//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSISVariable, NSString;

@interface NSLayoutAnchor : NSObject <NSCopying, NSCoding>
{
    id _referenceItem;
    long long _attr;
    NSISVariable *_variable;
    NSString *_name;
    id _cachedReferenceItems;
    id _reserved;
    unsigned int _type:2;
    unsigned int _reserved3:30;
}

+ (id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3;
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2;
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3;
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2;
+ (id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2;
+ (id)anchorWithItem:(id)arg1 attribute:(long long)arg2;
+ (id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2;
+ (id)_anchorForItem:(id)arg1 attribute:(long long)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2;
- (long long)_constraintAttribute;
- (id)_constraintItem;
- (_Bool)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3;
- (id)description;
- (id)_referencingConstraints;
- (_Bool)_isReferencedByConstraint:(id)arg1;
- (id)constraintsAffectingLayout;
- (_Bool)hasAmbiguousLayout;
- (id)_dependentVariables;
- (double)_valueInEngine:(id)arg1;
- (id)_equationDescriptionLegendEntries;
- (id)_equationDescriptionInParent;
- (id)equationDescription;
- (_Bool)isCompatibleWithAnchor:(id)arg1;
- (_Bool)validateOtherAttribute:(long long)arg1;
- (id)_referencedLayoutItems;
- (void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (int)_anchorVariableRestriction;
- (id)_anchorVariable;
- (id)_variableName;
- (id)_referenceItem;
- (id)_referenceView;
- (id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3;
- (long long)_proxiedAttribute;
- (id)_proxiedItem;
- (id)initWithItem:(id)arg1 attribute:(long long)arg2;
- (id)item;
- (id)anchorWithName:(id)arg1;
- (id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;
- (id)name;
- (id)_expressionInDefaultContextWithEngine:(id)arg1;
- (id)_constituentAnchors;
- (id)_nearestAncestorLayoutItem;
- (long long)_anchorType;
- (id)initWithAnchor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;
- (id)init;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1;
- (id)ruleEqualToAnchor:(id)arg1;
- (id)observableValueInItem:(id)arg1;
- (double)valueInItem:(id)arg1;
- (id)_expressionForValueInItem:(id)arg1;
- (id)rulesAffectingLayout;

@end

