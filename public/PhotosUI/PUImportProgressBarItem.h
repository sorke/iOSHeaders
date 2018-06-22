//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

#import "PUImportControllerNotificationsReceiver.h"

@class NSString, PLRoundProgressView, UIAlertController;

__attribute__((visibility("hidden")))
@interface PUImportProgressBarItem : UIBarButtonItem <PUImportControllerNotificationsReceiver>
{
    PLRoundProgressView *_roundProgressView;
    UIAlertController *_alertController;
    NSString *_currentDescriptiveText;
}

+ (struct UIEdgeInsets)insets;
+ (struct CGSize)size;
- (void).cxx_destruct;
- (void)importControllerProgressDidChange:(id)arg1 descriptiveText:(id)arg2 context:(id)arg3;
- (void)dismissPopover;
- (void)presentProgressPopOver:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

