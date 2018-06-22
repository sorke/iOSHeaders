//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSDate, NSError, QLTThumbnailRequest, UIImage;

@interface QLTThumbnailOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    NSDate *_beginDate;
    UIImage *_image;
    NSError *_error;
    CDUnknownBlockType _needsAdditionalTime;
    QLTThumbnailRequest *_request;
}

+ (id)operationWithThumbnailRequest:(id)arg1;
@property(retain) QLTThumbnailRequest *request; // @synthesize request=_request;
@property(copy) CDUnknownBlockType needsAdditionalTime; // @synthesize needsAdditionalTime=_needsAdditionalTime;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) UIImage *image; // @synthesize image=_image;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void).cxx_destruct;
- (void)main;
- (void)_logOperationDuration;
- (void)__finishWithError:(id)arg1;
- (_Bool)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (void)_finish;
- (void)cancel;
- (void)start;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (id)initWithThumbnailRequest:(id)arg1;

@end

