//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDContext-Protocol.h>

@class NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDLocalContext <_CDContext>
- (_Bool)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forKeyedSubscript:(_CDContextualKeyPath *)arg2;
- (_Bool)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
@end
