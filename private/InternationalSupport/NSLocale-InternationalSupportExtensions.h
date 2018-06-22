//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLocale.h"

@class NSArray, NSString;

@interface NSLocale (InternationalSupportExtensions)
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)_filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (id)_languagesForRegionWithoutFiltering:(id)arg1;
+ (id)_languageNameOverrides;
+ (id)_languagesToExemplarStrings;
+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames *)arg2;
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;
+ (id)baseLanguageFromLanguage:(id)arg1;
+ (id)systemLanguagesForRegion:(id)arg1;
+ (id)supportedRegions;
+ (id)exemplarForLanguage:(id)arg1;
+ (id)supportedLanguages;
+ (id)baseSystemLanguages;
+ (id)deviceLanguage;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
- (id)localizedStringForNumberingSystem:(id)arg1 short:(_Bool)arg2;
@property(readonly, copy) NSArray *availableNumberingSystems;
@property(readonly, copy) NSString *numberingSystem;
- (_Bool)isEquivalentTo:(id)arg1;
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(_Bool)arg3;
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;
@property(readonly) NSString *languageIdentifier;
@end

