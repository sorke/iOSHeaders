//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagProtocol.h"

@class AMSBagFrozenDataSource, NSDate, NSString;

@interface AMSSnapshotBag : NSObject <AMSBagProtocol>
{
    NSDate *_creationDate;
    AMSBagFrozenDataSource *_dataSource;
}

@property(retain, nonatomic) AMSBagFrozenDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (_Bool)isLoaded;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

