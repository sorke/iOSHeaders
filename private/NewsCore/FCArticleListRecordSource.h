//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@interface FCArticleListRecordSource : FCRecordSource
{
}

- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefix;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)storeFilename;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordType;

@end

