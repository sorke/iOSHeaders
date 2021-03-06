//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AKAnnotationEditorDelegate.h"

@class AKAnnotation, AKAnnotationTheme, AKHighlightColorEditorController;

@protocol AKHighlightColorEditorControllerDelegate <AKAnnotationEditorDelegate>
- (void)editorController:(AKHighlightColorEditorController *)arg1 showEditMenuForAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 deleteAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 setTheme:(AKAnnotationTheme *)arg2 forAnnotation:(AKAnnotation *)arg3;
- (void)editorController:(AKHighlightColorEditorController *)arg1 editNote:(AKAnnotation *)arg2;

@optional
- (_Bool)editorController:(AKHighlightColorEditorController *)arg1 isRightArrowEnabledForAnnotation:(AKAnnotation *)arg2;
- (_Bool)editorController:(AKHighlightColorEditorController *)arg1 isSharingEnabledForAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 shareAnnotation:(AKAnnotation *)arg2;
@end

