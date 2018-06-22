//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FPXOperationService.h"
#import "FPXVendorMessaging.h"
#import "FPXVendorObservation.h"

@class FPFileProviderService, FPItemID, FPSandboxingURLWrapper, NSArray, NSDate, NSDictionary, NSFileHandle, NSString, NSURL;

@protocol FPXVendor <FPXOperationService, FPXVendorObservation, FPXVendorMessaging>
- (void)dumpIndexStateForDomain:(NSString *)arg1 toFileHandler:(NSFileHandle *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)dropIndexForDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)indexOneBatchInDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *, _Bool))arg2;
- (void)removeTrashedItemsOlderThanDate:(NSDate *)arg1 completionHandler:(void (^)(void))arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 onDocumentURL:(NSURL *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)didChangeItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)privilegedValuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)updateDomains:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchRemoteFileProviderEndpointForProtocolName:(NSString *)arg1 service:(FPFileProviderService *)arg2 itemURL:(NSURL *)arg3 needsItemURL:(_Bool)arg4 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSArray *, NSURL *, NSError *))arg5;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)identifierForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)itemChangedAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)providePlaceholderAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
@end

