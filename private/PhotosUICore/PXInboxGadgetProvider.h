//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import "PXChangeObserver.h"
#import "PXSectionedDataSourceManagerObserver.h"

@class NSString, PXInboxAggregateDataSourceManager;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>
{
    PXInboxAggregateDataSourceManager *_dataSourceManager;
}

@property(readonly, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateGadgets;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

