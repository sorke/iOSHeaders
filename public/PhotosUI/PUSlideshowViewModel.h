//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModel : PUViewModel
{
    _Bool _wantsChromeVisible;
    long long _currentState;
}

@property(nonatomic, setter=setWantsChromeVisible:) _Bool wantsChromeVisible; // @synthesize wantsChromeVisible=_wantsChromeVisible;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)setWantsChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)currentChange;
- (id)newViewModelChange;

@end
