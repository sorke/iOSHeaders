//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface REImage : NSObject <NSCopying, NSCoding>
{
}

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

