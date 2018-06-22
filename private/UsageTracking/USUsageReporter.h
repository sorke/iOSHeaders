//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface USUsageReporter : NSObject
{
    NSXPCConnection *_xpcConnection;
}

@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)fetchReportsForUsageType:(unsigned long long)arg1 interval:(id)arg2 partitionInterval:(double)arg3 focalOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

