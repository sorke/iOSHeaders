//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView
{
    UIView *_previewView;
    UIBezierPath *_previewClippingPath;
    UIImage *_finalImage;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *finalImage; // @synthesize finalImage=_finalImage;
@property(retain, nonatomic) UIBezierPath *previewClippingPath; // @synthesize previewClippingPath=_previewClippingPath;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

