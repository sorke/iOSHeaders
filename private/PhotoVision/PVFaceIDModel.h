//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVFaceIDModel : NSObject
{
}

+ (_Bool)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id *)arg4;
+ (_Bool)persistModel:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (id)loadModelAtPath:(id)arg1 error:(id *)arg2;
+ (id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id *)arg3;
+ (id)newMutablePersonsModel;
+ (id)defaultConfiguration;
+ (id)faceObservationFromFaceprintData:(id)arg1;
+ (id)modelFileName;

@end

