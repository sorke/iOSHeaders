//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AKPopupAnnotation, UITextView;

@interface AKNoteEditorViewController : UIViewController
{
    UITextView *_textView;
    AKPopupAnnotation *_annotation;
    id <AKNoteEditorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AKNoteEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AKPopupAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

