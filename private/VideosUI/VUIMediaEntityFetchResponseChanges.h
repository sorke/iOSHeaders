//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject
{
    VUICollectionChangeSet *_mediaEntitiesChangeSet;
    VUICollectionChangeSet *_groupingChangeSet;
}

@property(retain, nonatomic) VUICollectionChangeSet *groupingChangeSet; // @synthesize groupingChangeSet=_groupingChangeSet;
@property(retain, nonatomic) VUICollectionChangeSet *mediaEntitiesChangeSet; // @synthesize mediaEntitiesChangeSet=_mediaEntitiesChangeSet;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaEntitiesChangeSet:(id)arg1;
- (id)init;

@end

