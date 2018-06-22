//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import "CLSRelationable.h"

@class CLSClass, NSArray, NSDate, NSError, NSString;

@interface CLSHandout : CLSObject <CLSRelationable>
{
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    _Bool _reviewed;
    NSDate *_dateOfPublication;
    NSDate *_dateLastReviewed;
    long long _state;
    long long _publishingState;
    NSError *_publishError;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(retain, nonatomic) NSError *publishError; // @synthesize publishError=_publishError;
@property(nonatomic) long long publishingState; // @synthesize publishingState=_publishingState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *dateLastReviewed; // @synthesize dateLastReviewed=_dateLastReviewed;
@property(retain, nonatomic) NSDate *dateOfPublication; // @synthesize dateOfPublication=_dateOfPublication;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) NSArray *recipients;
- (void)removeHandoutRecipient:(id)arg1;
- (void)addHandoutRecipient:(id)arg1;
- (void)removeHandoutAttachment:(id)arg1;
- (void)addHandoutAttachment:(id)arg1;
- (void)mergeWithObject:(id)arg1;
@property(nonatomic, getter=isReviewed) _Bool reviewed;
@property(retain, nonatomic) NSDate *dueDate;
@property(copy, nonatomic) NSString *instructions;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (id)init;
- (id)_init;
@property(readonly, nonatomic) CLSClass *effectiveClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

