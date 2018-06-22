//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;
    NSNumber *_clusterID;
    NSNumber *_clusterVersion;
    NSNumber *_itemID;
    NSNumber *_launchesWeight;
    NSNumber *_usageWeight;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *usageWeight; // @synthesize usageWeight=_usageWeight;
@property(copy, nonatomic) NSNumber *launchesWeight; // @synthesize launchesWeight=_launchesWeight;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *clusterVersion; // @synthesize clusterVersion=_clusterVersion;
@property(copy, nonatomic) NSNumber *clusterID; // @synthesize clusterID=_clusterID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

