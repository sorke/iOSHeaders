//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SSUIServiceOptions : NSObject <BSXPCCoding, NSCopying>
{
    unsigned long long _flashStyle;
    unsigned long long _saveLocation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long saveLocation; // @synthesize saveLocation=_saveLocation;
@property(nonatomic) unsigned long long flashStyle; // @synthesize flashStyle=_flashStyle;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

