//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GEOTrafficAndETAResult : NSObject
{
    _Bool _isSuccess;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
}

@property(copy, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(copy, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end

