//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

@interface SKUIContextActionsConfiguration : NSObject
{
    SKUIContextActionsPresentationSource *_presentationSource;
    SKUIDialogTemplateViewElement *_dialogTemplate;
}

@property(retain, nonatomic) SKUIDialogTemplateViewElement *dialogTemplate; // @synthesize dialogTemplate=_dialogTemplate;
@property(retain, nonatomic) SKUIContextActionsPresentationSource *presentationSource; // @synthesize presentationSource=_presentationSource;
- (void).cxx_destruct;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)contextActions;
- (id)initWithDialogTemplate:(id)arg1;

@end

