//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSCommnatMessage : NSObject
{
    unsigned long long _type;
    unsigned int _nonce;
    struct sockaddr_storage _local;
    struct sockaddr_storage _external;
    unsigned long long _status;
    double _startTime;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int nonce; // @synthesize nonce=_nonce;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2;
- (_Bool)read:(char *)arg1 inputLength:(int)arg2;
- (const struct sockaddr *)external;
- (const struct sockaddr *)local;
- (id)initWithType:(unsigned long long)arg1 localAddress:(struct sockaddr *)arg2;

@end

