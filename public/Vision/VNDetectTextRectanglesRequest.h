//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class NSString;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest
{
}

+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (void)initialize;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
@property(nonatomic) _Bool minimizeFalseDetections;
@property(nonatomic) _Bool detectDiacritics;
@property(nonatomic) _Bool reportCharacterBoxes;
@property(nonatomic) unsigned long long minimumCharacterPixelHeight;
@property(copy, nonatomic) NSString *textRecognition;
@property(nonatomic) unsigned long long algorithm;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end

