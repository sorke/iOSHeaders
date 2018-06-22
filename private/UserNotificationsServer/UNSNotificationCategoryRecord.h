//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject
{
    _Bool _hasCustomDismissAction;
    _Bool _hasCustomSilenceAction;
    _Bool _shouldAllowInCarPlay;
    _Bool _privacyOptionShowTitle;
    _Bool _privacyOptionShowSubtitle;
    _Bool _preventAutomaticRemovalFromRecent;
    _Bool _revealAdditionalContentWhenPresented;
    _Bool _preventAutomaticLock;
    _Bool _preventDismissWhenClosed;
    _Bool _presentFullScreenAlertOverList;
    NSArray *_actions;
    NSString *_identifier;
    NSArray *_intentIdentifiers;
    NSArray *_minimalActions;
    NSString *_privateBody;
    NSString *_summaryFormat;
    NSString *_backgroundStyle;
    NSString *_listPriority;
}

@property(copy, nonatomic) NSString *listPriority; // @synthesize listPriority=_listPriority;
@property(copy, nonatomic) NSString *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) NSString *summaryFormat; // @synthesize summaryFormat=_summaryFormat;
@property(copy, nonatomic) NSString *privateBody; // @synthesize privateBody=_privateBody;
@property(nonatomic) _Bool presentFullScreenAlertOverList; // @synthesize presentFullScreenAlertOverList=_presentFullScreenAlertOverList;
@property(nonatomic) _Bool preventDismissWhenClosed; // @synthesize preventDismissWhenClosed=_preventDismissWhenClosed;
@property(nonatomic) _Bool preventAutomaticLock; // @synthesize preventAutomaticLock=_preventAutomaticLock;
@property(nonatomic) _Bool revealAdditionalContentWhenPresented; // @synthesize revealAdditionalContentWhenPresented=_revealAdditionalContentWhenPresented;
@property(nonatomic) _Bool preventAutomaticRemovalFromRecent; // @synthesize preventAutomaticRemovalFromRecent=_preventAutomaticRemovalFromRecent;
@property(nonatomic) _Bool privacyOptionShowSubtitle; // @synthesize privacyOptionShowSubtitle=_privacyOptionShowSubtitle;
@property(nonatomic) _Bool privacyOptionShowTitle; // @synthesize privacyOptionShowTitle=_privacyOptionShowTitle;
@property(nonatomic) _Bool shouldAllowInCarPlay; // @synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay;
@property(copy, nonatomic) NSArray *minimalActions; // @synthesize minimalActions=_minimalActions;
@property(copy, nonatomic) NSArray *intentIdentifiers; // @synthesize intentIdentifiers=_intentIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasCustomSilenceAction; // @synthesize hasCustomSilenceAction=_hasCustomSilenceAction;
@property(nonatomic) _Bool hasCustomDismissAction; // @synthesize hasCustomDismissAction=_hasCustomDismissAction;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

