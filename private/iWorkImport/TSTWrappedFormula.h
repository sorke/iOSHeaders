//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTFormula.h>

__attribute__((visibility("hidden")))
@interface TSTWrappedFormula : TSTFormula
{
    int mFunctionIndex;
}

@property(nonatomic) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
