//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INImage.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage : INImage
{
    NSUUID *_md5HashUUID;
    NSData *_imageData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_md5HashUUID;
- (id)_copyWithSubclass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (_Bool)_requiresRetrieval;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

