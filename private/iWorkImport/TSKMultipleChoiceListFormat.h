//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

@protocol TSUMultipleChoiceListChoiceProviding;

__attribute__((visibility("hidden")))
@interface TSKMultipleChoiceListFormat : TSKFormat <NSCopying>
{
    int _initialValue;
    unsigned int _multipleChoiceListFormatID;
    id <TSUMultipleChoiceListChoiceProviding> _popupModel;
}

@property(readonly, nonatomic) id <TSUMultipleChoiceListChoiceProviding> popupModel; // @synthesize popupModel=_popupModel;
@property(readonly, nonatomic) unsigned int multipleChoiceListFormatID; // @synthesize multipleChoiceListFormatID=_multipleChoiceListFormatID;
@property(readonly, nonatomic) int initialValue; // @synthesize initialValue=_initialValue;
- (void).cxx_destruct;
- (id)asMultipleChoiceListFormat;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInitialValue:(int)arg1 multipleChoiceListFormatID:(unsigned int)arg2 popupModel:(id)arg3;

@end
