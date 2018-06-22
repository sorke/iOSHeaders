//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INFilePropertyExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_qualifier;
    NSString *_type;
    INDateComponentsRange *_dateComponentsRange;
    INPerson *_person;
    NSString *_value;
    NSNumber *_quantity;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) INPerson *person; // @synthesize person=_person;
@property(readonly, copy, nonatomic) INDateComponentsRange *dateComponentsRange; // @synthesize dateComponentsRange=_dateComponentsRange;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *qualifier; // @synthesize qualifier=_qualifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 qualifier:(id)arg2 type:(id)arg3 dateComponentsRange:(id)arg4 person:(id)arg5 value:(id)arg6 quantity:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

