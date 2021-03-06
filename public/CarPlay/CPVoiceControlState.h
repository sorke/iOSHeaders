//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, UIImage;

@interface CPVoiceControlState : NSObject <NSSecureCoding>
{
    _Bool _repeats;
    NSArray *_titleVariants;
    UIImage *_image;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSArray *titleVariants; // @synthesize titleVariants=_titleVariants;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 titleVariants:(id)arg2 image:(id)arg3 repeats:(_Bool)arg4;

@end

