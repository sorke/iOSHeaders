//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import "NSSecureCoding.h"

@class AXMTextLayoutManager, FKTextDetector;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    FKTextDetector *_textDetector;
    AXMTextLayoutManager *_textLayoutManager;
    _Bool _detectDiacritics;
    _Bool _returnSubFeatures;
    _Bool _minimizeFalsePositives;
    unsigned long long _detectionFlavor;
    double _minimumCharacterHeight;
}

+ (id)supportedDetectionLanguages;
+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool minimizeFalsePositives; // @synthesize minimizeFalsePositives=_minimizeFalsePositives;
@property(nonatomic) _Bool returnSubFeatures; // @synthesize returnSubFeatures=_returnSubFeatures;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) double minimumCharacterHeight; // @synthesize minimumCharacterHeight=_minimumCharacterHeight;
@property(nonatomic) unsigned long long detectionFlavor; // @synthesize detectionFlavor=_detectionFlavor;
- (void).cxx_destruct;
- (void)evaluate:(id)arg1;
- (void)_evaluateWithVisionFlavor:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (id)_visionTextDetectionOptionForLangauge:(id)arg1;
- (void)_evaluateWithFutharkFlavor:(id)arg1;
- (_Bool)shouldEvaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)freeResources;
- (void)nodeInitialize;

@end

