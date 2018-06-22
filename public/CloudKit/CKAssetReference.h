//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKRecordID, NSData, NSString;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying>
{
    CKRecordID *_recordID;
    long long _databaseScope;
    NSString *_fieldName;
    NSData *_fileSignature;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(readonly, copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4;

@end

