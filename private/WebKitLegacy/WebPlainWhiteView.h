//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebDocumentElement-Protocol.h>
#import <WebKitLegacy/WebDocumentView-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>
{
}

- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(_Bool)arg2;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)setNeedsLayout:(_Bool)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
