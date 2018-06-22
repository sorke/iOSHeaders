//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMHome;

@interface HFMediaAccessoryItemUpdateRequest : NSObject
{
    id <HFMediaValueSource> _mediaValueSource;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    id <HFMediaProfileContainer> _mediaProfile;
}

@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) id <HFMediaValueSource> mediaValueSource; // @synthesize mediaValueSource=_mediaValueSource;
- (void).cxx_destruct;
- (id)_parentMediaSystem;
- (id)accessories;
- (id)_disambiguateMultipleAccessoryResponses:(id)arg1 forMediaSystem:(id)arg2;
- (id)updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 valueSource:(id)arg2;

@end

