//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXInboxModelDataSource.h>

@class NSDictionary;

@interface PXInboxAggregateDataSource : PXInboxModelDataSource
{
    NSDictionary *_providerSourceDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *providerSourceDictionary; // @synthesize providerSourceDictionary=_providerSourceDictionary;
- (void).cxx_destruct;
- (id)providerSourceForModel:(id)arg1;
- (id)initWithModels:(id)arg1 providerSourceDictionary:(id)arg2;

@end

