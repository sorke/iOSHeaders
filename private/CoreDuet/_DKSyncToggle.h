//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _DKSyncToggle : NSObject
{
    _Bool _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}

+ (id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;
@property(readonly, nonatomic) SEL disableSelector; // @synthesize disableSelector=_disableSelector;
@property(readonly, nonatomic) SEL enableSelector; // @synthesize enableSelector=_enableSelector;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;

@end

