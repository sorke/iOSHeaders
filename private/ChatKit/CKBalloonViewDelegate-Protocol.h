//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKBalloonView;

@protocol CKBalloonViewDelegate <NSObject>
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)liveBalloonTouched:(CKBalloonView *)arg1;
- (void)balloonViewLongTouched:(CKBalloonView *)arg1;
- (void)balloonViewDoubleTapped:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1;

@optional
- (void)tuConversationBalloonJoinButtonTapped:(CKBalloonView *)arg1;
@end

