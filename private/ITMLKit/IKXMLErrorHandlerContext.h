//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSMutableString, NSString;

@interface IKXMLErrorHandlerContext : NSObject
{
    NSMutableString *_mutableErrorMessages;
    NSMutableSet *_mutableParserErrors;
}

@property(retain, nonatomic) NSMutableSet *mutableParserErrors; // @synthesize mutableParserErrors=_mutableParserErrors;
@property(retain, nonatomic) NSMutableString *mutableErrorMessages; // @synthesize mutableErrorMessages=_mutableErrorMessages;
- (void).cxx_destruct;
- (void)clear;
@property(readonly, nonatomic) NSArray *parserErrors;
@property(readonly, nonatomic) NSString *errorMessage;
- (id)init;

@end
