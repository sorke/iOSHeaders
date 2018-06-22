//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PXCMMActionManager : NSObject
{
    id <PXCMMActionPerformerDelegate> _performerDelegate;
    NSMutableDictionary *_performerClassByType;
}

@property(readonly, nonatomic) NSMutableDictionary *performerClassByType; // @synthesize performerClassByType=_performerClassByType;
@property(nonatomic) __weak id <PXCMMActionPerformerDelegate> performerDelegate; // @synthesize performerDelegate=_performerDelegate;
- (void).cxx_destruct;
- (id)sendBackActionPerformer;
- (id)photosPickerActionPerformer;
- (id)messageComposeActionPerformer;
- (id)publishActionPerformer;
- (Class)actionPerformerClassForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)init;

@end

