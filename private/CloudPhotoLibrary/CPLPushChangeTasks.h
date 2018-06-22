//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

+ (id)descriptionForTaskType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)invalidRecordIdentifiers;
- (id)invalidRecordScopedIdentifiers;
- (id)description;
- (id)_descriptionFromTasksByType:(id)arg1;
@property(readonly, nonatomic) _Bool hasTasks;
- (void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (void)enumerateTasksWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateScopedTasksWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initEmpty;
- (void)_commitTasks;

@end

