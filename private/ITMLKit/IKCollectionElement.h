//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

#import <ITMLKit/IKAppDocumentStyleChangeObserving-Protocol.h>

@class IKHeaderElement, NSArray, NSString;

@interface IKCollectionElement : IKViewElement <IKAppDocumentStyleChangeObserving>
{
    NSArray *_sections;
}

- (void).cxx_destruct;
- (void)appDocumentDidMarkStylesDirty;
@property(readonly, retain, nonatomic) NSArray *sections;
@property(readonly, retain, nonatomic) IKHeaderElement *header;
- (id)applyUpdatesWithElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
