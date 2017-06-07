//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface HTSHTTPMessage : NSObject
{
    NSMutableDictionary *_headers;
    NSData *_body;
    NSString *_versionString;
}

@property(copy, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
- (id)valueForHeaderField:(id)arg1;
- (struct __CFHTTPMessage *)copyMessage;
- (void)addHeadersToMessage:(struct __CFHTTPMessage *)arg1;
- (void)dealloc;

@end
