//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface APSMultiUserFS : NSObject
{
    NSString *_systemPathCache;
    _Bool _isMultiUser;
}

+ (id)sharedInstance;
@property(readonly) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (id)systemPath;
- (id)initWithIsMultiUserMode:(_Bool)arg1;

@end

