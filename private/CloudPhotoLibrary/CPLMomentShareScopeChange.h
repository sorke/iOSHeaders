//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLScopeChange.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CPLMomentShare;

@interface CPLMomentShareScopeChange : CPLScopeChange <NSSecureCoding, NSCopying>
{
    CPLMomentShare *_momentShare;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (void).cxx_destruct;
- (id)description;
- (void)_setupWithLibraryInfo:(id)arg1;

@end

