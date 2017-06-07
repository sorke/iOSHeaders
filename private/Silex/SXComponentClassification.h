//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SXComponentLayoutRules, SXComponentTextRules;

@interface SXComponentClassification : NSObject
{
    SXComponentLayoutRules *_layoutRules;
    SXComponentTextRules *_textRules;
}

+ (id)roleString;
+ (int)role;
+ (id)typeString;
+ (_Bool)shouldRegister;
+ (id)classificationForClass:(Class)arg1;
+ (id)classificationForComponentWithType:(id)arg1 role:(id)arg2;
+ (id)classificationForComponentWithType:(id)arg1;
+ (id)classificationForComponentWithRole:(int)arg1;
+ (void)registerClassification;
+ (void)initializeClassifications;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMainTextComponent;
- (_Bool)isCollapsible;
- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (Class)componentSizerClass;
- (Class)componentModelClass;
- (Class)componentViewClass;
@property(readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property(readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property(readonly, nonatomic) SXComponentTextRules *textRules; // @synthesize textRules=_textRules;
@property(readonly, nonatomic) SXComponentLayoutRules *layoutRules; // @synthesize layoutRules=_layoutRules;
- (_Bool)accessibilitySkippedDuringReadAll;
- (id)accessibilityCustomRotorMembership;
- (id)accessibilityContextualLabel;

@end
