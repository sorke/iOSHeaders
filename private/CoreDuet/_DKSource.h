//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface _DKSource : NSObject <NSSecureCoding>
{
    NSString *_sourceID;
    NSString *_bundleID;
    NSString *_itemID;
    NSString *_groupID;
    NSString *_deviceID;
    NSNumber *_userID;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultSourceID;
+ (id)sourceForInteraction:(id)arg1 bundleID:(id)arg2;
+ (id)intentsSourceID;
+ (id)entityName;
+ (id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2;
+ (id)spotlightSourceID;
@property(readonly) NSNumber *userID; // @synthesize userID=_userID;
@property(readonly) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6;

@end
