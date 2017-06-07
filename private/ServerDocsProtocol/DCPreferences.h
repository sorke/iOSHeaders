//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface DCPreferences : NSUserDefaults
{
}

+ (id)preferences;
@property(nonatomic) _Bool xmlPropertyLists;
@property(retain, nonatomic) NSString *currentDataVersionNumber;
- (void)clearAllAuthCookiesAndTrustedCertData;
- (void)clearAuthCookieAndTrustedCertDataForService:(id)arg1;
- (void)setAuthCookie:(id)arg1 andTrustedCertData:(id)arg2 forService:(id)arg3;
- (id)trustedCertDataForService:(id)arg1;
- (id)authCookieForService:(id)arg1;
- (id)_trustedCertDataKeyForService:(id)arg1;
- (id)_authCookieKeyForService:(id)arg1;
@property(retain, nonatomic) NSString *logLevel;
@property(nonatomic) _Bool traceLogsEnabled;
- (void)_postDidChangeNotification;

@end
