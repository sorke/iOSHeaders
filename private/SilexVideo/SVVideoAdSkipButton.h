//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SilexVideo/SVMaterialButton.h>

#import "SVVideoControlItem.h"

@class NSString;

@interface SVVideoAdSkipButton : SVMaterialButton <SVVideoControlItem>
{
    unsigned long long _skipDuration;
}

@property(nonatomic) unsigned long long skipDuration; // @synthesize skipDuration=_skipDuration;
- (id)titleForDuration:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isVisible;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
@property(readonly, nonatomic) _Bool hideable;
@property(readonly, nonatomic) _Bool supportsAutoAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

