//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUEmbedConfigurationLoader.h"

@class FCAsyncOnceOperation, FCFlintResourceManager, NSString, SXJSONDictionary;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader>
{
    SXJSONDictionary *_embedConfiguration;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    FCAsyncOnceOperation *_asyncOnceOperation;
}

@property(retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property(retain, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (void).cxx_destruct;
- (id)asyncLoadEmbedConfigurationOnceWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SXJSONDictionary *embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
- (id)loadEmbededConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

