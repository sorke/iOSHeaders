//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFFile.h>

@class NSMutableArray;

@interface PFFolder : PFFile
{
    _Bool _isLeaf;
    NSMutableArray *_files;
    NSMutableArray *_folders;
}

@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
@property(retain, nonatomic) NSMutableArray *folders; // @synthesize folders=_folders;
@property(retain, nonatomic) NSMutableArray *files; // @synthesize files=_files;
- (void).cxx_destruct;
- (void)addFolder:(id)arg1;
- (void)addFolders:(id)arg1;
- (void)addFile:(id)arg1;
- (void)addFiles:(id)arg1;
- (id)init;

@end

