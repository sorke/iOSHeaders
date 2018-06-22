//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTARFrameConsumer.h"
#import "AVTDisplayingCarouselControllerDelegate.h"

@class AVTAvatarEffectRenderer, AVTAvatarStore, NSArray, NSString, UIViewController;

@interface AVTEffectRenderingPickerController : NSObject <AVTDisplayingCarouselControllerDelegate, AVTARFrameConsumer>
{
    _Bool _shouldRender;
    id <AVTEffectRenderingPickerControllerDelegate> _delegate;
    NSArray *_avatarRecords;
    AVTAvatarStore *_avatarStore;
    AVTAvatarEffectRenderer *_renderer;
    id <AVTDisplayingCarouselController> _listController;
    UIViewController *_pickerViewController;
}

@property(nonatomic) _Bool shouldRender; // @synthesize shouldRender=_shouldRender;
@property(retain, nonatomic) UIViewController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
@property(retain, nonatomic) id <AVTDisplayingCarouselController> listController; // @synthesize listController=_listController;
@property(readonly, nonatomic) AVTAvatarEffectRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) AVTAvatarStore *avatarStore; // @synthesize avatarStore=_avatarStore;
@property(retain, nonatomic) NSArray *avatarRecords; // @synthesize avatarRecords=_avatarRecords;
@property(nonatomic) __weak id <AVTEffectRenderingPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)carouselController:(id)arg1 didFocusOnView:(id)arg2 forRecord:(id)arg3;
- (void)carouselController:(id)arg1 willEndFocusOnView:(id)arg2 forRecord:(id)arg3;
- (void)createListControllerIfNeeded;
- (void)updateAvatarRecordsIfNeeded;
- (id)fetchAvatarRecords;
- (id)avatarForRecord:(id)arg1;
- (void)renderForARFrame:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAvatarStore:(id)arg1 renderer:(id)arg2;
- (id)initWithDomainIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

