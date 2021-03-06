//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKDocumentObject.h"
#import "TSKPencilAnnotation.h"
#import "TSPCopying.h"

@class NSString, PKDrawing, TSDDrawableInfo, TSDPencilAnnotationStorage;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation>
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSDDrawableInfo *_parent;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) __weak TSDDrawableInfo *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive *)arg1 unarchiver:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) PKDrawing *drawing; // @dynamic drawing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

