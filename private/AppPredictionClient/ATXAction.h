//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRContent.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class ATXActionCriteria, CSSearchableItemAttributeSet, INIntent, NSString, NSUUID, NSUserActivity;

@interface ATXAction : NSObject <CRContent, NSSecureCoding, NSCopying>
{
    NSUserActivity *_userActivity;
    unsigned long long _userActivityHash;
    NSString *_title;
    NSString *_subtitle;
    ATXActionCriteria *_criteria;
    _Bool _isFutureMedia;
    NSString *_bundleId;
    unsigned long long _actionType;
    INIntent *_intent;
    NSUUID *_actionUUID;
    NSString *_itemIdentifier;
    NSString *_heuristic;
    NSString *_userActivityString;
    CSSearchableItemAttributeSet *_contentAttributeSet;
}

+ (_Bool)supportsSecureCoding;
+ (id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2;
+ (id)getNSUATypefromActivityType:(id)arg1;
+ (id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2;
+ (id)getActionKeyForBundleId:(id)arg1 actionType:(id)arg2;
@property(readonly, nonatomic) CSSearchableItemAttributeSet *contentAttributeSet; // @synthesize contentAttributeSet=_contentAttributeSet;
@property(readonly, nonatomic) NSString *userActivityString; // @synthesize userActivityString=_userActivityString;
@property(readonly, nonatomic) _Bool isFutureMedia; // @synthesize isFutureMedia=_isFutureMedia;
@property(readonly, nonatomic) NSString *heuristic; // @synthesize heuristic=_heuristic;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSUUID *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)underlyingInteraction;
- (id)_spotlightContentType;
- (id)_bundleIdForDisplay;
- (id)predictionTypeStringForPET;
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (void)setHeuristic:(id)arg1;
- (void)setCriteria:(id)arg1;
@property(readonly, nonatomic) ATXActionCriteria *criteria;
- (id)json;
- (id)copyWithParameterWhitelist:(id)arg1;
- (id)actionKeyFromAction;
- (id)dateForAction;
- (id)actionSubtitle;
- (_Bool)hasTitle;
- (id)actionTitle;
- (id)actionDescription;
@property(readonly, copy) NSString *description;
- (unsigned long long)_userActivityHashForUserInfoDict:(id)arg1 activityType:(id)arg2 webpageURL:(id)arg3;
- (unsigned long long)userActivityHash;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithActivity:(id)arg1 activityString:(id)arg2 itemIdentifier:(id)arg3 contentAttributeSet:(id)arg4 intent:(id)arg5 actionUUID:(id)arg6 bundleId:(id)arg7 type:(unsigned long long)arg8 heuristic:(id)arg9 criteria:(id)arg10 isFutureMedia:(_Bool)arg11 title:(id)arg12 subtitle:(id)arg13;
- (id)initWithAction:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 type:(unsigned long long)arg6 heuristic:(id)arg7 isFutureMedia:(_Bool)arg8 title:(id)arg9 subtitle:(id)arg10;
- (id)initWithAction:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 type:(unsigned long long)arg6 heuristic:(id)arg7 isFutureMedia:(_Bool)arg8;
- (id)initWithNSUserActivityString:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 heuristic:(id)arg6 isFutureMedia:(_Bool)arg7 title:(id)arg8 subtitle:(id)arg9;
- (id)initWithNSUserActivityString:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 heuristic:(id)arg6 isFutureMedia:(_Bool)arg7;
- (id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 criteria:(id)arg7 isFutureMedia:(_Bool)arg8 title:(id)arg9 subtitle:(id)arg10;
- (id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 criteria:(id)arg7 isFutureMedia:(_Bool)arg8;
- (id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 criteria:(id)arg5 isFutureMedia:(_Bool)arg6 title:(id)arg7 subtitle:(id)arg8;
- (id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 criteria:(id)arg5 isFutureMedia:(_Bool)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

