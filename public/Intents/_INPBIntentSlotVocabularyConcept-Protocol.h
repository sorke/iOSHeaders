//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBIntentSlotVocabularyValue;

@protocol _INPBIntentSlotVocabularyConcept <NSObject>
+ (Class)synonymsType;
@property(readonly, nonatomic) unsigned long long synonymsCount;
@property(copy, nonatomic) NSArray *synonyms;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (_INPBIntentSlotVocabularyValue *)synonymsAtIndex:(unsigned long long)arg1;
- (void)addSynonyms:(_INPBIntentSlotVocabularyValue *)arg1;
- (void)clearSynonyms;
@end

