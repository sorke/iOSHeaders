//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/__UIAtomFieldEditor.h>

@class _UIAtomSearchBar, _UISearchAtomTextView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomFieldEditor : __UIAtomFieldEditor
{
    id <_UISearchAtomViewTappedStateProtocol> _searchAtomViewTapStateDelegate;
}

@property(nonatomic) __weak id <_UISearchAtomViewTappedStateProtocol> searchAtomViewTapStateDelegate; // @synthesize searchAtomViewTapStateDelegate=_searchAtomViewTapStateDelegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)_baselineOffsetFromBottom;
- (double)_firstBaselineOffsetFromTop;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic, getter=_searchBar) _UIAtomSearchBar *searchBar;
@property(readonly, nonatomic, getter=_hostView) _UISearchAtomTextView *hostView;

@end

