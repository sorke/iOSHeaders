//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HUIconCellContentMetrics : NSObject
{
    struct CGSize _iconSize;
    struct UIEdgeInsets _contentInset;
}

+ (id)compactMetrics;
+ (id)defaultMetrics;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;

@end

