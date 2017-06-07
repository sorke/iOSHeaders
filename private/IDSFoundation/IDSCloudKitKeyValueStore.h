//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCKContainer;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKContainer *_container;
}

@property(retain, nonatomic) IDSCKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContainer:(id)arg1 queue:(id)arg2;

@end
