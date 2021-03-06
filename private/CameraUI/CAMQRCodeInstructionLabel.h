//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMInstructionLabel.h>

@class NSArray;

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel
{
    long long _devicePosition;
    NSArray *_mrcResults;
}

+ (id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2;
+ (_Bool)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2;
@property(retain, nonatomic, setter=setMRCResults:) NSArray *mrcResults; // @synthesize mrcResults=_mrcResults;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
- (void).cxx_destruct;
- (void)_updateTextWithPriorMRCResults:(id)arg1;
- (struct UIEdgeInsets)_textInsets;
- (double)_backgroundAlpha;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

