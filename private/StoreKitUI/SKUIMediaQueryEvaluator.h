//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableSet, NSObject<OS_dispatch_source>;

@interface SKUIMediaQueryEvaluator : NSObject
{
    NSMapTable *_cachedFeatureResults;
    id <SKUIMediaQueryDelegate> _delegate;
    NSMutableSet *_observedNotificationNames;
    NSObject<OS_dispatch_source> *_reloadTimer;
}

+ (void)initialize;
+ (void)registerFeatureClass:(Class)arg1;
@property(nonatomic) __weak id <SKUIMediaQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_delegateValuesForKeys:(id)arg1;
- (void)_featureDidChangeNotification:(id)arg1;
- (void)reloadData;
- (_Bool)evaluateMediaQuery:(id)arg1;
- (void)dealloc;
- (id)init;

@end

