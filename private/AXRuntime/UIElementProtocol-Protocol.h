//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSObject<UIElementProtocol>, NSString;

@protocol UIElementProtocol <NSObject>
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
- (_Bool)isMockElement;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withArray:(NSArray *)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(NSArray *)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(NSNumber *)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(NSString *)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;
- (NSArray *)previousElementsWithCount:(unsigned long long)arg1;
- (NSArray *)nextElementsWithCount:(unsigned long long)arg1;
- (void)updateCacheWithAttributes:(NSArray *)arg1;
- (void)updateCache:(long long)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (_Bool)performAXAction:(int)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (int)pid;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (NSNumber *)numberWithAXAttribute:(long long)arg1;
- (_Bool)boolWithAXAttribute:(long long)arg1;
- (NSString *)stringWithAXAttribute:(long long)arg1;
- (NSArray *)arrayWithAXAttribute:(long long)arg1;
- (_Bool)isValidForApplication:(NSObject<UIElementProtocol> *)arg1;
- (_Bool)isValid;
@end

