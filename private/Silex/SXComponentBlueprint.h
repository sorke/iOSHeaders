//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, SXComponentSizer, SXLayoutBlueprint;

@interface SXComponentBlueprint : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasValidSize;
    _Bool _hasValidPosition;
    id <SXComponent> _component;
    id <SXComponentLayout> _componentLayout;
    SXLayoutBlueprint *_parentLayoutBlueprint;
    SXComponentSizer *_componentSizer;
    NSDictionary *_infoFromLayouting;
    struct _NSRange _columnRange;
    struct CGSize _suggestedSizeAfterInvalidation;
    struct CGRect _frame;
    struct CGRect _contentFrame;
    struct CGRect _absoluteFrame;
    struct UIEdgeInsets _contentInsets;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *infoFromLayouting; // @synthesize infoFromLayouting=_infoFromLayouting;
@property(nonatomic) struct CGSize suggestedSizeAfterInvalidation; // @synthesize suggestedSizeAfterInvalidation=_suggestedSizeAfterInvalidation;
@property(retain, nonatomic) SXComponentSizer *componentSizer; // @synthesize componentSizer=_componentSizer;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _Bool hasValidPosition; // @synthesize hasValidPosition=_hasValidPosition;
@property(nonatomic) _Bool hasValidSize; // @synthesize hasValidSize=_hasValidSize;
@property(nonatomic) __weak SXLayoutBlueprint *parentLayoutBlueprint; // @synthesize parentLayoutBlueprint=_parentLayoutBlueprint;
@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
@property(nonatomic) struct _NSRange columnRange; // @synthesize columnRange=_columnRange;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)storeInformationForRenderingPhase:(id)arg1;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidateLayout;
@property(readonly, nonatomic) __weak SXLayoutBlueprint *rootLayoutBlueprint;
- (struct UIEdgeInsets)contentInsetsForComponentWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasValidLayout;
- (void)updatePosition:(struct CGPoint)arg1;
- (void)updateSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentSizer:(id)arg3;

@end

