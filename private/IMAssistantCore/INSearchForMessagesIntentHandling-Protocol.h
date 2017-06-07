//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INSearchForMessagesIntent;

@protocol INSearchForMessagesIntentHandling <NSObject>
- (void)handleSearchForMessages:(INSearchForMessagesIntent *)arg1 completion:(void (^)(INSearchForMessagesIntentResponse *))arg2;

@optional
- (void)resolveSpeakableGroupNamesForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveGroupNamesForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveDateTimeRangeForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))arg2;
- (void)resolveAttributesForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(INMessageAttributeOptionsResolutionResult *))arg2;
- (void)resolveSendersForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveRecipientsForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmSearchForMessages:(INSearchForMessagesIntent *)arg1 completion:(void (^)(INSearchForMessagesIntentResponse *))arg2;
@end
