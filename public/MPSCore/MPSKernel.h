//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface MPSKernel : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _options;
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]^{MPSFunctionTable}{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[80{atomic<MPSLibrary *>=A^{MPSLibrary}}]}, name: _device
    struct MPSLibrary *_library;
    NSString *_label;
    _Bool _enableConcurrency;
    unsigned long long _allowedOptions;
    unsigned int _tuningParams;
    unsigned int _maxTuningParams;
    CDUnion_cbb8185c _fileVersion;
    unsigned int _privateOptions;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool enableConcurrency; // @synthesize enableConcurrency=_enableConcurrency;
@property(nonatomic) CDUnion_cbb8185c fileVersion; // @synthesize fileVersion=_fileVersion;
@property(copy) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)disableConcurrentEncoder;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevice:(id)arg1;
- (id)sharedInitWithDevice:(id)arg1;
@property(readonly, retain, nonatomic) id <MTLDevice> device;
- (void)dealloc;
- (id)init;

@end

