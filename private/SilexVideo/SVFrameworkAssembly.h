//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFFrameworkAssembly.h"

@class NSArray, NSString;

@interface SVFrameworkAssembly : NSObject <NFFrameworkAssembly>
{
    NSArray *_assemblies;
}

@property(readonly, copy, nonatomic) NSArray *assemblies; // @synthesize assemblies=_assemblies;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

