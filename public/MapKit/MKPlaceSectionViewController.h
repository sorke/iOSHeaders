//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MKPlaceSectionViewDelegate.h"
#import "_MKAnimationStackViewDelegate.h"

@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate>
{
    MKPlaceSectionView *_sectionView;
}

- (void).cxx_destruct;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;
- (_Bool)_viewHostsLayoutEngineAllowsTAMIC_NO;
- (void)stackViewNeedsLayout:(id)arg1;
@property(readonly, nonatomic) MKPlaceSectionView *sectionView; // @synthesize sectionView=_sectionView;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

