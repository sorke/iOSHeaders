//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying>
{
    float _width;
    float _height;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (id)initWithCoder:(id)arg1;

@end

