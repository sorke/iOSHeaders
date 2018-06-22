//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSMutableDictionary, NSString;

@interface AXCodeItem : NSObject
{
    NSBundle *_cachedBundle;
    struct {
        unsigned int isDyldOpened:1;
    } _flags;
    unsigned long long _loadedAtTimestamp;
    unsigned short _loadOrder;
    NSMutableDictionary *_platformToTarget;
    NSString *_path;
    AXCodeItem *_associatedAccessibilityCodeItem;
    long long _type;
    NSString *_name;
    long long _targetType;
    AXCodeItem *_targetCodeItem;
}

+ (long long)codeItemTypeFromString:(id)arg1;
+ (id)_codeItemQueue;
@property(nonatomic) __weak AXCodeItem *targetCodeItem; // @synthesize targetCodeItem=_targetCodeItem;
@property(nonatomic) unsigned short loadOrder; // @synthesize loadOrder=_loadOrder;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak AXCodeItem *associatedAccessibilityCodeItem; // @synthesize associatedAccessibilityCodeItem=_associatedAccessibilityCodeItem;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSMutableDictionary *platformToTarget; // @synthesize platformToTarget=_platformToTarget;
- (void).cxx_destruct;
- (void)loadWithStrategy:(long long)arg1 onQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)prepareBackingBundleIfNeeded:(id *)arg1;
@property(readonly, nonatomic) NSBundle *cachedBundle;
@property(readonly, nonatomic) NSString *debugCodeTypeDescription;
- (_Bool)_isSystemAppAccessibilityBundle;
@property(readonly, nonatomic) _Bool isAccessibilityBundle;
@property(nonatomic) _Bool isLoaded;
@property(readonly, nonatomic) unsigned long long loadedAtTimestamp;
- (void)_cacheLazyProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)addPlatformToTargetEntries:(id)arg1;
- (id)initAccessibilityCodeItemWithPath:(id)arg1 targetType:(long long)arg2 platformToTarget:(id)arg3 loadOrder:(unsigned short)arg4;
- (id)initWithPath:(id)arg1 isDyldOpened:(_Bool)arg2;

@end

