//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXQuickLookFile;

@protocol SXQuickLookService <NSObject>
- (void)fetchThumbnailForFile:(SXQuickLookFile *)arg1 size:(struct CGSize)arg2 onCompletion:(void (^)(UIImage *))arg3 onError:(void (^)(NSError *))arg4;
@end

