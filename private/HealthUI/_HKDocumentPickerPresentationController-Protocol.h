//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKObjectAuthorizationPromptSession;

@protocol _HKDocumentPickerPresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithSession:(HKObjectAuthorizationPromptSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

