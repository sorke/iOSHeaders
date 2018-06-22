//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface UNNotificationCategory : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSArray *_actions;
    NSArray *_minimalActions;
    NSArray *_intentIdentifiers;
    NSString *_identifier;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
    unsigned long long _options;
    unsigned long long _backgroundStyle;
    unsigned long long _listPriority;
}

+ (_Bool)supportsSecureCoding;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 options:(unsigned long long)arg7;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 categorySummaryFormat:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 options:(unsigned long long)arg5;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 options:(unsigned long long)arg5;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 options:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long listPriority; // @synthesize listPriority=_listPriority;
@property(readonly, nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *categorySummaryFormat; // @synthesize categorySummaryFormat=_categorySummaryFormat;
@property(readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *intentIdentifiers; // @synthesize intentIdentifiers=_intentIdentifiers;
@property(readonly, copy, nonatomic) NSArray *minimalActions; // @synthesize minimalActions=_minimalActions;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 options:(unsigned long long)arg7 backgroundStyle:(unsigned long long)arg8 listPriority:(unsigned long long)arg9;

@end

