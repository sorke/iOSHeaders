//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceShortcuts/VCPBIntentDefinition.h>

@class LSBundleProxy;

@interface VCPBLocalIntentDefinition : VCPBIntentDefinition
{
    LSBundleProxy *_bundleProxy;
    _Bool _filesLoaded;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)unloadFiles;
- (void)loadAllFiles;
- (id)initWithBundleProxy:(id)arg1;
- (id)initWithAppBundleID:(id)arg1;

@end

