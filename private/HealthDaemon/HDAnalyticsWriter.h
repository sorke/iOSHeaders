//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDAnalyticsWriter : NSObject
{
    NSString *_bugType;
    struct __SecCertificate *_certificate;
}

- (void).cxx_destruct;
- (_Bool)submitJSONAnaltyicsData:(id)arg1 error:(id *)arg2;
- (_Bool)_loadCertificateWithError:(id *)arg1;
- (id)initWithBugType:(id)arg1;

@end
