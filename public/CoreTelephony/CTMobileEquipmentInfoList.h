//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface CTMobileEquipmentInfoList : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_meInfoList;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *meInfoList; // @synthesize meInfoList=_meInfoList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

