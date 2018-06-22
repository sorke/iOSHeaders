//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VTKDrawItem.h"

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VTKLineDrawItem : NSObject <VTKDrawItem>
{
    UIColor *_color;
    long long _orientation;
    struct CGPoint _origin;
}

@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawAtContext:(id)arg1;
- (id)initWitColor:(id)arg1 origin:(struct CGPoint)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

