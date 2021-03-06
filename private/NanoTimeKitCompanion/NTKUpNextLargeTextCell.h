//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextLargeTextCell : NTKUpNextBaseCell
{
    _Bool _showingHeaderImage;
    _Bool _showingBodyImage;
    unsigned int _currentImageEdge;
    CLKFont *_standardBodyFont;
    CLKFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_headerImage;
    NTKUpNextImageView *_bodyImage;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}

- (void).cxx_destruct;
- (void)setPaused:(_Bool)arg1;
- (void)configureWithContent:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

