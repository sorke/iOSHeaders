//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID
{
    unsigned long long _ino;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isFolderOrAliasID;
- (id)folderID;
- (unsigned long long)rawID;
- (id)description;
- (id)initWithFileID:(unsigned long long)arg1;

@end
