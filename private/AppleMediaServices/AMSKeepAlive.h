//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSKeepAlive : NSObject
{
    NSString *_name;
}

+ (void)removeKeepAliveForName:(id)arg1;
+ (void)addKeepAliveForName:(id)arg1;
+ (id)keepAliveWithName:(id)arg1;
+ (id)keepAliveWithFormat:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

