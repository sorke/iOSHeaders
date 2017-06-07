//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCoding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCFeedViewportBookmark : NSObject <NSCopying, NSCoding>
{
    NSString *_externalGroupID;
    NSString *_internalGroupID;
    NSString *_articleID;
}

@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, copy, nonatomic) NSString *internalGroupID; // @synthesize internalGroupID=_internalGroupID;
@property(readonly, copy, nonatomic) NSString *externalGroupID; // @synthesize externalGroupID=_externalGroupID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3;

@end
