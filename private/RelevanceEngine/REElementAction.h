//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface REElementAction : NSObject <NSCopying, NSCoding>
{
    id <REElementActionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didFinish:(_Bool)arg1;
- (void)_performWithContext:(id)arg1;
@property(nonatomic) __weak id <REElementActionDelegate> delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

