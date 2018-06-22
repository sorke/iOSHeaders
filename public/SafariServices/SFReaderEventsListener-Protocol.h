//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, _WKFrameHandle;

@protocol SFReaderEventsListener <NSObject>
- (void)readerTextWasExtracted:(NSString *)arg1 withMetadata:(NSDictionary *)arg2 wasDeterminingAvailabilility:(_Bool)arg3;
- (void)didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg1;
- (void)didCollectReaderContentForMail:(NSString *)arg1;
- (void)didCollectReadingListItemInfo:(NSDictionary *)arg1 bookmarkID:(NSNumber *)arg2;
- (void)didSetReaderConfiguration:(NSDictionary *)arg1;
- (void)contentDidBecomeReadyWithDetectedLanguage:(NSString *)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1 dueToSameDocumentNavigation:(_Bool)arg2;
@end

