//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSDictionary, NSString, RUIPage, RUIParser;

@protocol RUIParserDelegate <NSObject>

@optional
- (RUIPage *)parser:(RUIParser *)arg1 createPageWithName:(NSString *)arg2 attributes:(NSDictionary *)arg3;
@end
