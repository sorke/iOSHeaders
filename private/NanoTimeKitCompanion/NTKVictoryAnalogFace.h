//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKVictoryAnalogFace : NTKFace
{
}

+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (id)_orderedComplicationSlots;
- (id)_complicationSlotDescriptors;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

