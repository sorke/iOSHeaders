//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSMessagesAppViewController, UIViewController;

@interface AVTUIControllerPresentation : NSObject
{
    UIViewController *_controller;
    MSMessagesAppViewController *_modalMessagesController;
}

+ (id)pendingGlobalPresentation;
+ (void)setPendingGlobalPresentation:(id)arg1;
@property(nonatomic) __weak MSMessagesAppViewController *modalMessagesController; // @synthesize modalMessagesController=_modalMessagesController;
@property(readonly, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)initWithController:(id)arg1;

@end

