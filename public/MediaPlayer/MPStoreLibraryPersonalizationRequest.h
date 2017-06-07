//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPSectionedCollection;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest
{
    MPModelRequest *_unpersonalizedRequest;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
    MPSectionedCollection *_representedObjects;
}

+ (id)defaultLibraryView;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)sharedQueue;
@property(retain, nonatomic) MPSectionedCollection *representedObjects; // @synthesize representedObjects=_representedObjects;
@property(readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
@property(readonly, copy, nonatomic) MPModelRequest *unpersonalizedRequest; // @synthesize unpersonalizedRequest=_unpersonalizedRequest;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;

@end
