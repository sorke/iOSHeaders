//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BCSAWDLogger : NSObject
{
}

+ (id)sharedLogger;
- (int)_awdBarcodePreferredAppLinkOpenStrategyFromURLAction:(id)arg1;
- (int)_awdBarcodeURLTypeFromURLAction:(id)arg1;
- (int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg1;
- (int)_awdBarcodeSourceTypeForAction:(id)arg1;
- (int)_awdBarcodeClientType;
- (int)_awdBarcodeDataTypeFromAction:(id)arg1;
- (void)logBarcodePreviewedEventForContentType:(long long)arg1;
- (void)logBarcodeActivatedEventForAction:(id)arg1;
- (void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2;
- (void)logBarcodeDetectedEvent:(id)arg1 startTime:(unsigned long long)arg2;
- (id)barcodeDetectedEventForAction:(id)arg1;

@end

