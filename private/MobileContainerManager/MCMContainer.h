//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, NSUUID;

@interface MCMContainer : NSObject
{
    unsigned int _userId;
    NSString *_identifier;
    NSUUID *_uuid;
    long long _containerClass;
    struct container_object *_thisContainer;
}

+ (long long)typeContainerClass;
+ (id)temporaryContainerWithIdentifier:(id)arg1 existed:(_Bool *)arg2 error:(id *)arg3;
+ (id)containerWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 existed:(_Bool *)arg3 error:(id *)arg4;
+ (id)containerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)diskUsageWithError:(id *)arg1;
@property(readonly, nonatomic) long long containerClass;
@property(readonly, nonatomic) NSUUID *uuid; // @dynamic uuid;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isTemporary) _Bool temporary;
@property(readonly, nonatomic) NSDictionary *info;
@property(readonly, nonatomic) NSURL *url;
- (_Bool)regenerateDirectoryUUIDWithError:(id *)arg1;
- (_Bool)recreateDefaultStructureWithError:(id *)arg1;
- (id)infoValueForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)destroyContainerWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 existed:(_Bool *)arg3 temp:(_Bool)arg4 error:(id *)arg5;
- (id)init;
- (struct container_object *)getLowLevelContainerObject;
- (void)markDeleted;
- (id)initWithIdentifier:(id)arg1 userId:(unsigned int)arg2 uuid:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (void)_errorOccurred;
@property(readonly, nonatomic) struct container_object *thisContainer;

@end

