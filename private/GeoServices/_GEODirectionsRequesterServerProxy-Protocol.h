//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEODirectionsRequest, NSNumber;

@protocol _GEODirectionsRequesterServerProxy <NSObject>
- (void)cancelRequest:(GEODirectionsRequest *)arg1;
- (void)startRequest:(GEODirectionsRequest *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 isDoomRequest:(_Bool)arg3 requestPriority:(NSNumber *)arg4 finished:(void (^)(GEODirectionsResponse *))arg5 networkActivity:(void (^)(_Bool))arg6 error:(void (^)(NSError *, id <GEODirectionsError>))arg7;
@end
