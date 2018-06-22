//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject
{
    NSMutableString *_contentString;
    NSMutableString *_lookupIdentifier;
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned long long _tokenRangesCount;
    short _category;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
    struct __CFArray *_assetIds;
    struct __CFArray *_collectionIds;
    struct __CFArray *_tripIds;
}

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_627e0f85 *)arg2 count:(long long)arg3;
@property(retain, nonatomic) struct __CFArray *tripIds; // @synthesize tripIds=_tripIds;
@property(retain, nonatomic) struct __CFArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, retain, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
@property(readonly, retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) short category; // @synthesize category=_category;
@property(nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (void)unionIdsWithGroup:(id)arg1;
- (unsigned long long)groupIdForObjectLookup;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareForReuse;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenRangesCount;
- (long long)compareToGroup:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_tokenRangesDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end

