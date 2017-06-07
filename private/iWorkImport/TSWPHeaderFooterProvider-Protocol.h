//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSEnumerator, TSKDocumentRoot, TSWPStorage;
@protocol TSKModel;

@protocol TSWPHeaderFooterProvider <NSObject>
- (double)bodyWidth;
- (TSKDocumentRoot *)documentRoot;
- (NSEnumerator *)headerFooterFragmentEnumerator;
- (_Bool)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (_Bool)isHeaderFooterEmpty:(int)arg1;
- (int)headerFragmentIndexForModel:(id <TSKModel>)arg1;
- (int)headerFooterTypeForModel:(id <TSKModel>)arg1;
- (TSWPStorage *)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (_Bool)usesSingleHeaderFooter;
@end
