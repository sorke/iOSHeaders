//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class BLTPBSectionIcon, NSMutableArray, NSString;

@interface BLTPBSectionInfo : PBCodable <NSCopying>
{
    unsigned int _alertType;
    int _authorizationStatus;
    NSString *_displayName;
    NSString *_factorySectionID;
    int _groupingSetting;
    BLTPBSectionIcon *_icon;
    unsigned int _notificationCenterLimit;
    int _phoneAuthorizationStatus;
    unsigned int _pushSettings;
    int _sectionCategory;
    NSString *_sectionID;
    int _sectionType;
    NSString *_subsectionID;
    int _subsectionPriority;
    NSMutableArray *_subsections;
    unsigned int _suppressedSettings;
    NSString *_universalSectionID;
    unsigned int _version;
    _Bool _allowsNotifications;
    _Bool _criticalAlertSetting;
    _Bool _displaysCriticalBulletins;
    _Bool _excludeFromBulletinBoard;
    _Bool _iconsStripped;
    _Bool _phoneAllowsNotifications;
    _Bool _showsInLockScreen;
    _Bool _showsInNotificationCenter;
    _Bool _showsMessagePreview;
    _Bool _showsOnExternalDevices;
    _Bool _suppressFromSettings;
    struct {
        unsigned int alertType:1;
        unsigned int authorizationStatus:1;
        unsigned int groupingSetting:1;
        unsigned int notificationCenterLimit:1;
        unsigned int phoneAuthorizationStatus:1;
        unsigned int pushSettings:1;
        unsigned int sectionCategory:1;
        unsigned int sectionType:1;
        unsigned int subsectionPriority:1;
        unsigned int suppressedSettings:1;
        unsigned int version:1;
        unsigned int allowsNotifications:1;
        unsigned int criticalAlertSetting:1;
        unsigned int displaysCriticalBulletins:1;
        unsigned int excludeFromBulletinBoard:1;
        unsigned int iconsStripped:1;
        unsigned int phoneAllowsNotifications:1;
        unsigned int showsInLockScreen:1;
        unsigned int showsInNotificationCenter:1;
        unsigned int showsMessagePreview:1;
        unsigned int showsOnExternalDevices:1;
        unsigned int suppressFromSettings:1;
    } _has;
}

+ (Class)subsectionsType;
@property(nonatomic) int phoneAuthorizationStatus; // @synthesize phoneAuthorizationStatus=_phoneAuthorizationStatus;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) _Bool excludeFromBulletinBoard; // @synthesize excludeFromBulletinBoard=_excludeFromBulletinBoard;
@property(nonatomic) _Bool criticalAlertSetting; // @synthesize criticalAlertSetting=_criticalAlertSetting;
@property(nonatomic) _Bool phoneAllowsNotifications; // @synthesize phoneAllowsNotifications=_phoneAllowsNotifications;
@property(nonatomic) _Bool iconsStripped; // @synthesize iconsStripped=_iconsStripped;
@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(retain, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property(retain, nonatomic) NSMutableArray *subsections; // @synthesize subsections=_subsections;
@property(nonatomic) _Bool displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(nonatomic) _Bool allowsNotifications; // @synthesize allowsNotifications=_allowsNotifications;
@property(nonatomic) _Bool showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) unsigned int pushSettings; // @synthesize pushSettings=_pushSettings;
@property(nonatomic) unsigned int notificationCenterLimit; // @synthesize notificationCenterLimit=_notificationCenterLimit;
@property(nonatomic) _Bool showsOnExternalDevices; // @synthesize showsOnExternalDevices=_showsOnExternalDevices;
@property(nonatomic) _Bool showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(nonatomic) _Bool showsInNotificationCenter; // @synthesize showsInNotificationCenter=_showsInNotificationCenter;
@property(nonatomic) _Bool suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPhoneAuthorizationStatus;
@property(nonatomic) _Bool hasAuthorizationStatus;
@property(nonatomic) _Bool hasExcludeFromBulletinBoard;
- (int)StringAsGroupingSetting:(id)arg1;
- (id)groupingSettingAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupingSetting;
@property(nonatomic) int groupingSetting; // @synthesize groupingSetting=_groupingSetting;
@property(nonatomic) _Bool hasCriticalAlertSetting;
@property(nonatomic) _Bool hasPhoneAllowsNotifications;
@property(nonatomic) _Bool hasIconsStripped;
@property(readonly, nonatomic) _Bool hasIcon;
@property(readonly, nonatomic) _Bool hasUniversalSectionID;
@property(readonly, nonatomic) _Bool hasFactorySectionID;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasSubsectionPriority;
- (id)subsectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionsCount;
- (void)addSubsections:(id)arg1;
- (void)clearSubsections;
@property(nonatomic) _Bool hasDisplaysCriticalBulletins;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(nonatomic) _Bool hasSuppressedSettings;
@property(nonatomic) _Bool hasAllowsNotifications;
@property(nonatomic) _Bool hasShowsMessagePreview;
@property(nonatomic) _Bool hasAlertType;
@property(nonatomic) _Bool hasPushSettings;
@property(nonatomic) _Bool hasNotificationCenterLimit;
@property(nonatomic) _Bool hasShowsOnExternalDevices;
@property(nonatomic) _Bool hasShowsInLockScreen;
@property(nonatomic) _Bool hasShowsInNotificationCenter;
@property(nonatomic) _Bool hasSuppressFromSettings;
@property(nonatomic) _Bool hasSectionCategory;
@property(nonatomic) _Bool hasSectionType;
@property(readonly, nonatomic) _Bool hasSubsectionID;
@property(readonly, nonatomic) _Bool hasSectionID;
- (id)description;

@end

