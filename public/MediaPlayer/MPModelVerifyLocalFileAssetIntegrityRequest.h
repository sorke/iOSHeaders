//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject
{
    MPIdentifierSet *_sourceItemIdentifiers;
    MPModelFileAsset *_fileAsset;
}

+ (id)_operationQueue;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers; // @synthesize sourceItemIdentifiers=_sourceItemIdentifiers;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2;

@end
