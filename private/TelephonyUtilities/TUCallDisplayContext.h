//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class CXCallDirectoryManager, NSString;
@protocol OS_dispatch_queue, TUCallDisplayContextDelegate;

@interface TUCallDisplayContext : NSObject <NSCopying, NSSecureCoding>
{
    int _legacyAddressBookIdentifier;
    id <TUCallDisplayContextDelegate> _delegate;
    NSString *_name;
    NSString *_firstName;
    NSString *_suggestedName;
    NSString *_label;
    NSString *_companyName;
    NSString *_mapName;
    NSString *_location;
    NSString *_contactName;
    NSString *_contactLabel;
    NSString *_callDirectoryLabel;
    NSString *_callDirectoryLocalizedExtensionContainingAppName;
    NSString *_callDirectoryExtensionIdentifier;
    NSString *_contactIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CXCallDirectoryManager *_callDirectoryManager;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CXCallDirectoryManager *callDirectoryManager; // @synthesize callDirectoryManager=_callDirectoryManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) int legacyAddressBookIdentifier; // @synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *callDirectoryExtensionIdentifier; // @synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier;
@property(copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // @synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName;
@property(copy, nonatomic) NSString *callDirectoryLabel; // @synthesize callDirectoryLabel=_callDirectoryLabel;
@property(copy, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <TUCallDisplayContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_initializeStateWithCall:(id)arg1;
- (id)initWithCall:(id)arg1 serialQueue:(id)arg2;
- (id)init;

@end
