//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXLayouter.h"

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;

@interface SXCollectionLayouter : NSObject <SXLayouter>
{
    id <SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
}

@property(readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint; // @synthesize containerComponentBlueprint=_containerComponentBlueprint;
@property(readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property(nonatomic) __weak id <SXLayouterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 layoutAttributes:(id)arg3 shouldContinue:(_Bool *)arg4;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

