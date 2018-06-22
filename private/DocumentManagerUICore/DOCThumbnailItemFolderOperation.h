//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DocumentManagerUICore/DOCThumbnailBaseOperation.h>

@interface DOCThumbnailItemFolderOperation : DOCThumbnailBaseOperation
{
    unsigned long long _folderType;
}

+ (id)synchronousFolderIconForItemFolderType:(unsigned long long)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4;
@property(nonatomic) unsigned long long folderType; // @synthesize folderType=_folderType;
- (_Bool)generateThumbnail:(id *)arg1 representativeIcon:(_Bool *)arg2;
- (id)initWithItemFolderType:(unsigned long long)arg1 size:(struct CGSize)arg2 scale:(double)arg3 delegate:(id)arg4 style:(unsigned long long)arg5;

@end

