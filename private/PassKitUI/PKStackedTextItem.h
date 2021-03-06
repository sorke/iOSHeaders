//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PKStackedTextItem : NSObject
{
    _Bool _significantPrimary;
    _Bool _deemphasizedPrimary;
    _Bool _strikethroughPrimary;
    NSString *_groupingIdentifier;
    unsigned long long _numberOfContentRows;
    NSString *_title;
    NSString *_primary;
    NSString *_secondary;
    NSString *_tertiary;
}

@property(nonatomic, getter=isStrikethroughPrimary) _Bool strikethroughPrimary; // @synthesize strikethroughPrimary=_strikethroughPrimary;
@property(nonatomic, getter=isDeemphasizedPrimary) _Bool deemphasizedPrimary; // @synthesize deemphasizedPrimary=_deemphasizedPrimary;
@property(nonatomic, getter=isSignificantPrimary) _Bool significantPrimary; // @synthesize significantPrimary=_significantPrimary;
@property(copy, nonatomic) NSString *tertiary; // @synthesize tertiary=_tertiary;
@property(copy, nonatomic) NSString *secondary; // @synthesize secondary=_secondary;
@property(copy, nonatomic) NSString *primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long numberOfContentRows; // @synthesize numberOfContentRows=_numberOfContentRows;
@property(readonly, copy, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2;
- (id)init;

@end

