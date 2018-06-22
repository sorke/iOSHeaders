//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface STCategoryCache : NSObject
{
    NSCache *_categoryByIdentifier;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSCache *categoryByIdentifier; // @synthesize categoryByIdentifier=_categoryByIdentifier;
- (void).cxx_destruct;
- (id)categoryForIdentifier:(id)arg1;
- (id)categoryForWebDomain:(id)arg1;
- (id)categoryForApp:(id)arg1;
- (void)cacheCategoriesForWebDomains:(id)arg1;
- (void)cacheCategoriesForApps:(id)arg1;
- (id)init;

@end

