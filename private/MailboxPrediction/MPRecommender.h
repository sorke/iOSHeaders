//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPRecommending-Protocol.h>
#import <MailboxPrediction/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPRecommender : NSObject <MPRecommending, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)featureSetWithoutSubject;
+ (id)featureSetWithSubject;
+ (id)recommenderWithModelPath:(id)arg1;
- (_Bool)synchronize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)clear;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)train;
- (_Bool)addMessages:(id)arg1;
- (id)recommendationsForMessage:(id)arg1 error:(id *)arg2;
- (id)initWithModelPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
