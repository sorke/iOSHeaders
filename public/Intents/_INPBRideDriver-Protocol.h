//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBContactValue, _INPBImageValue;

@protocol _INPBRideDriver <NSObject>
@property(readonly, nonatomic) _Bool hasRating;
@property(copy, nonatomic) NSString *rating;
@property(readonly, nonatomic) _Bool hasPhoneNumber;
@property(copy, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) _Bool hasPerson;
@property(retain, nonatomic) _INPBContactValue *person;
@property(readonly, nonatomic) _Bool hasImage;
@property(retain, nonatomic) _INPBImageValue *image;
@end

