//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURL;

@protocol IMPreviewGeneratorProtocol
+ (_Bool)shouldShadePreview;
+ (_Bool)shouldScaleUpPreview;
+ (_Bool)writesToDisk;
+ (double)maxUpScale;
+ (NSString *)previewExtension;
+ (NSURL *)generateAndPersistPreviewFromSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGImage *)newPreviewFromSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
@end

