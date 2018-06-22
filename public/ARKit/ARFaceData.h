//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding>
{
    _Bool _mirrored;
    NSArray *_detectedFaces;
    NSDictionary *_faceMeshPayload;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isMirrored) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(retain, nonatomic) NSDictionary *faceMeshPayload; // @synthesize faceMeshPayload=_faceMeshPayload;
@property(retain, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(_Bool)arg2 stripDetectionData:(_Bool)arg3;
- (id)init;

@end

