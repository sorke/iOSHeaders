//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXGadgetProvider.h"

#import "PUSearchZeroKeywordChangeDelegate.h"

@class NSString, PUSearchZeroKeywordDataSource;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider <PUSearchZeroKeywordChangeDelegate>
{
    PUSearchZeroKeywordDataSource *_zeroKeywordDataSource;
}

@property(readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource; // @synthesize zeroKeywordDataSource=_zeroKeywordDataSource;
- (void).cxx_destruct;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;
- (void)didRemoveSections:(id)arg1;
- (void)didUpdateSections:(id)arg1;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (_Bool)zeroKeywordsAvailable;
- (void)loadDataForGadgets;
- (void)refreshData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

