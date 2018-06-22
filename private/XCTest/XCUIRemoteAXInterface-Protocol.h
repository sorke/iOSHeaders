//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, XCAccessibilityElement;

@protocol XCUIRemoteAXInterface <NSObject>
@property(readonly) _Bool useLegacySnapshotPath;
- (void)setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)enableFauxCollectionViewCells:(void (^)(_Bool, NSError *))arg1;
- (void)setAXTimeout:(double)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(void (^)(XCAccessibilityElement *, NSError *))arg2;
- (void)fetchParameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3 reply:(void (^)(id, NSError *))arg4;
- (void)setAttribute:(NSString *)arg1 value:(id)arg2 element:(XCAccessibilityElement *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)fetchAttributes:(NSArray *)arg1 forElement:(XCAccessibilityElement *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchAttributesForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)performAccessibilityAction:(int)arg1 onElement:(XCAccessibilityElement *)arg2 value:(id)arg3 reply:(void (^)(NSError *))arg4;
- (void)unregisterForAccessibilityNotification:(long long)arg1 registrationToken:(NSNumber *)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerForAccessibilityNotification:(long long)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

