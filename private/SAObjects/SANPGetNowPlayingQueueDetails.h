//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand
{
}

+ (id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNowPlayingQueueDetails;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) long long previousItemCount;
@property(copy, nonatomic) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property(nonatomic) long long nextItemCount;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

