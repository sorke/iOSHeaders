//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSUUID, TSPCancellationState, TSPData, TSPLazyReference, TSPObject, TSPObjectContext, TSPReader;

@protocol TSPReaderDelegate <NSObject>
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool isReadingFromDocument;
@property(readonly, nonatomic) NSUUID *baseObjectUUID;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (void)reader:(TSPReader *)arg1 didReadLazyReference:(TSPLazyReference *)arg2;
- (void)reader:(TSPReader *)arg1 didFindExternalRepeatedReference:(NSArray *)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 fromParentObject:(TSPObject *)arg5 completion:(void (^)(id))arg6;
- (void)reader:(TSPReader *)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(_Bool)arg4 allowUnknownObject:(_Bool)arg5 fromParentObject:(TSPObject *)arg6 completion:(void (^)(id))arg7;
- (TSPData *)reader:(TSPReader *)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(TSPReader *)arg1 wantsObjectIdentifierForUUID:(NSUUID *)arg2;
- (TSPCancellationState *)cancellationStateForReader:(TSPReader *)arg1;
- (id <TSPLazyReferenceDelegate>)lazyReferenceDelegateForReader:(TSPReader *)arg1;
- (id <TSPObjectDelegate>)objectDelegateForReader:(TSPReader *)arg1;
- (TSPObjectContext *)contextForReader:(TSPReader *)arg1;

@optional
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
- (void)reader:(TSPReader *)arg1 didUnarchiveObject:(TSPObject *)arg2;
- (void)reader:(TSPReader *)arg1 didResetObjectUUID:(NSUUID *)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(NSUUID *)arg4;
- (void)reader:(TSPReader *)arg1 didResetObjectIdentifierForObject:(TSPObject *)arg2 originalObjectIdentifier:(long long)arg3;
@end

