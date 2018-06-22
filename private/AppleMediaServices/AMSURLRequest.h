//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableURLRequest.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AMSURLRequestProperties;

__attribute__((visibility("hidden")))
@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>
{
    AMSURLRequestProperties *_properties;
}

@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;

@end

