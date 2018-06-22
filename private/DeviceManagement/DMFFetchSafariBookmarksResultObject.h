//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject
{
    NSArray *_bookmarks;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void).cxx_destruct;
- (void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBookmarks:(id)arg1;

@end

