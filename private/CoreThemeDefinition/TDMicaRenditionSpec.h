//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDMicaRenditionSpec : TDRenditionSpec
{
}

- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
- (id)debugDescription;

// Remaining properties
@property(nonatomic) _Bool isTintable; // @dynamic isTintable;
@property(copy, nonatomic) NSString *layerPath; // @dynamic layerPath;

@end

