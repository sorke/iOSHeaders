//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSDataProvider : NSObject <BBRemoteDataProvider>
{
    id <BCSDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <BCSDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 sizeConstraints:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)sectionParameters;
- (id)sectionIdentifier;
- (id)sortDescriptors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

