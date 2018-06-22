//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import "CLSRelationable.h"

@class CLSActivity, NSArray, NSString, NSURL;

@interface CLSContext : CLSObject <CLSRelationable>
{
    _Bool _active;
    NSURL *_universalLinkURL;
    NSString *_title;
    NSString *_topic;
    NSArray *_path;
    NSString *_currentActivityID;
    NSString *_contentStoreIdentifier;
    long long _displayOrder;
    NSString *_identifier;
    long long _type;
    NSString *_storeIdentifier;
    NSString *_storeTeamID;
    long long _authorizationStatus;
}

+ (id)reservedContextTypes;
+ (id)allowedTopics;
+ (id)arrayOfStringClasses;
+ (id)objectIDPathFromIdentifierPath:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)conformsToProtocol:(id)arg1;
+ (id)relations;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(copy, nonatomic) NSArray *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *storeTeamID; // @synthesize storeTeamID=_storeTeamID;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (long long)effectiveAuthorizationStatus;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setPathAndGenerateObjectID:(id)arg1;
- (void)resignActive;
- (void)becomeActive;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(copy, nonatomic) NSString *contentStoreIdentifier;
@property(nonatomic) long long displayOrder;
@property(retain, nonatomic) NSURL *universalLinkURL;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *currentActivityID;
@property(copy, nonatomic) NSString *topic;
- (void)descendantMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFromParent;
- (id)childContextWithIdentifier:(id)arg1;
- (void)addChildContext:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)_init;
- (id)newItemProvider;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)createNewActivity;
@property(readonly, nonatomic) CLSActivity *currentActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

