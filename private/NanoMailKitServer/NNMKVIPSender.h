//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface NNMKVIPSender : NSObject
{
    NSString *_name;
    NSString *_displayName;
    NSSet *_emailAddresses;
}

@property(copy, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

