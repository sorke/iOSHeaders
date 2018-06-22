//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList
{
    IKMutableArray *_queryList;
    _Bool _negated;
    NSString *_type;
}

@property _Bool negated; // @synthesize negated=_negated;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (_Bool)evaluate;
- (id)expressionList;
- (void)addQuery:(id)arg1;
- (id)expressionAsString;
- (id)init;

@end

