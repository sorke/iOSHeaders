//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INPriceRange, NSString;

@protocol INRidePartySizeOptionExport <NSObject, JSExport>
@property(copy, nonatomic) INPriceRange *priceRange;
@property(copy, nonatomic) NSString *sizeDescription;
@property(nonatomic) struct _NSRange partySizeRange;
- (id)init;
@end

