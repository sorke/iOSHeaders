//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "REIndentedDescription.h"

@class NSArray, NSString, REContent, REElementAction;

@interface REElement : NSObject <REIndentedDescription, NSCopying, NSCoding>
{
    NSString *_bundleIdentifier;
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    REContent *_content;
    REContent *_idealizedContent;
    NSArray *_relevanceProviders;
    REElementAction *_action;
}

+ (id)_supportedDictionaryEncodingKeys;
@property(readonly, nonatomic) REElementAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
@property(readonly, nonatomic) REContent *idealizedContent; // @synthesize idealizedContent=_idealizedContent;
@property(readonly, nonatomic) REContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) unsigned long long privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)_updateIdentifier:(id)arg1;
- (_Bool)isNoContentElement;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (id)shallowCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1;
- (id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(unsigned long long)arg6;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

