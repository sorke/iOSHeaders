//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject
{
    _Bool _animated;
    HFItem *_item;
}

@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 animated:(_Bool)arg2;

@end

