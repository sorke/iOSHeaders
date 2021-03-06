//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_anchor;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

