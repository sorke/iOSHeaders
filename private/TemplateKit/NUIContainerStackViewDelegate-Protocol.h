//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NUIContainerStackView, UIView;

@protocol NUIContainerStackViewDelegate <NUIContainerViewDelegate>

@optional
- (long long)containerStackView:(NUIContainerStackView *)arg1 alignmentForArrangedSubview:(UIView *)arg2;
- (struct NSDirectionalEdgeInsets)containerStackView:(NUIContainerStackView *)arg1 minimumDirectionalSpacingAdjecentToArrangedSubview:(UIView *)arg2;
- (struct UIEdgeInsets)containerStackView:(NUIContainerStackView *)arg1 minimumSpacingAdjecentToArrangedSubview:(UIView *)arg2;
@end
