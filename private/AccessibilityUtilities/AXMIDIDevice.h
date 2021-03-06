//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXMIDIDeviceEntityDelegate.h"

@class NSMutableSet, NSNumber, NSString;

@interface AXMIDIDevice : NSObject <AXMIDIDeviceEntityDelegate>
{
    unsigned int _midiDevice;
    id <AXMIDIDeviceProtocol> _delegate;
    NSNumber *_supportsMMC;
    NSMutableSet *_entities;
}

@property(retain, nonatomic) NSMutableSet *entities; // @synthesize entities=_entities;
@property(readonly, nonatomic) NSNumber *supportsMMC; // @synthesize supportsMMC=_supportsMMC;
@property(nonatomic) __weak id <AXMIDIDeviceProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int midiDevice; // @synthesize midiDevice=_midiDevice;
- (void).cxx_destruct;
- (void)entity:(id)arg1 didRemoveDestination:(id)arg2;
- (void)entity:(id)arg1 didAddDestination:(id)arg2;
- (void)entity:(id)arg1 didRemoveSource:(id)arg2;
- (void)entity:(id)arg1 didAddSource:(id)arg2;
- (id)_entityForMidiEntity:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;
- (void)removeMidiDestination:(unsigned int)arg1;
- (void)addMidiDestination:(unsigned int)arg1;
- (void)removeMidiSource:(unsigned int)arg1;
- (void)addMidiSource:(unsigned int)arg1;
- (void)removeMidiEntity:(unsigned int)arg1;
- (void)addMidiEntity:(unsigned int)arg1;
- (void)resetAndDetectEntities;
- (id)supportsGeneralMMC;
@property(readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property(readonly, nonatomic) NSString *driverName;
@property(readonly, nonatomic) NSNumber *isPrivate;
@property(readonly, nonatomic) NSNumber *isOffline;
@property(readonly, nonatomic) NSNumber *deviceID;
@property(readonly, nonatomic) NSNumber *uniqueID;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) NSString *name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)fullDescription;
@property(readonly, copy) NSString *description;
- (id)initWithMIDIDevice:(unsigned int)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

