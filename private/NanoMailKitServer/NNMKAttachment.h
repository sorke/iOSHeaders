//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding>
{
    NSString *_url;
    NSString *_contentId;
    NSString *_fileName;
    NSString *_mimePartNumber;
    unsigned long long _fileSize;
    unsigned long long _type;
    NSString *_messageId;
    unsigned long long _syncState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long syncState; // @synthesize syncState=_syncState;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

