//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIElementProtocol.h"

@class NSMutableDictionary, NSString;

@interface AXUIElement : NSObject <UIElementProtocol>
{
    struct __AXUIElement *_axElement;
    long long _cachedRefCount;
    NSMutableDictionary *_cachedAttributes;
    _Bool _isValid;
}

+ (id)uiApplicationForContext:(unsigned int)arg1;
+ (id)uiApplicationAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 startWithElement:(id)arg2;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1 cache:(id)arg2;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1;
+ (void)initialize;
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
+ (id)uiSystemWideApplication;
+ (struct __AXUIElement *)systemWideAXUIElement;
- (void).cxx_destruct;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (struct _NSRange)_lineRangeForPosition:(unsigned long long)arg1;
- (long long)_lineEndPosition;
- (long long)_lineStartPosition;
- (id)_valueForRange:(struct _NSRange)arg1;
- (id)_attributedValueForRange:(struct _NSRange)arg1;
- (id)_objectForRange:(struct _NSRange)arg1 withParameterizedAttribute:(long long)arg2;
- (struct _NSRange)_selectedTextRange;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (_Bool)isMockElement;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;
- (id)_elementsWithParameter:(long long)arg1 andCount:(unsigned long long)arg2;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (_Bool)performAXAction:(int)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (id)valueArrayWithAXAttributes:(struct __CFArray *)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (id)objectWithAXAttribute:(long long)arg1;
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (_Bool)boolWithAXAttribute:(long long)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (void)updateCache:(long long)arg1;
- (id)_outputCache;
- (_Bool)isValid;
- (_Bool)isValidForApplication:(id)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (void)_createCache:(_Bool)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (void)setCachedAttributes:(id)arg1;
- (void *)modifyStaticCacheValue:(void *)arg1;
- (void)_invalidate;
- (void)setAXElement:(struct __AXUIElement *)arg1;
@property(readonly, nonatomic) struct __AXUIElement *axElement; // @synthesize axElement=_axElement;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (int)pid;
- (void)_setCachedValue:(void *)arg1 forAttribute:(long long)arg2;
- (void *)_cachedValueForAttribute:(long long)arg1;
@property(readonly, copy, nonatomic) NSMutableDictionary *cachedAttributes; // @dynamic cachedAttributes;
- (void)dealloc;
- (id)initWithAXElement:(struct __AXUIElement *)arg1;
- (id)initWithAXElement:(struct __AXUIElement *)arg1 cache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

