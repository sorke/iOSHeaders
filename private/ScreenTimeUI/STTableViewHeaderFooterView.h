//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSArray, UILayoutGuide;

@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    UILayoutGuide *_contentLayoutGuide;
    NSArray *_rtlContentLayoutGuideConstraints;
}

@property(copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // @synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

