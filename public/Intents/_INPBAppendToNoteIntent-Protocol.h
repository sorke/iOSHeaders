//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBIntentMetadata, _INPBNote, _INPBNoteContent;

@protocol _INPBAppendToNoteIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTargetNote;
@property(retain, nonatomic) _INPBNote *targetNote;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasContent;
@property(retain, nonatomic) _INPBNoteContent *content;
@end

