//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "CKActionMenuItemView.h"

@class NSString, UIColor;

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView>
{
    UIColor *_unhighlightedTintColor;
    UIColor *_highlightedTintColor;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)updateTintColor;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

