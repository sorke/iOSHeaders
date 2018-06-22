//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKZoneCommand.h"

@class NSString;

@interface SCWatchlistReorderSymbolCommand : NSObject <SCKZoneCommand>
{
    NSString *_symbol;
    NSString *_precedingSymbol;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *precedingSymbol; // @synthesize precedingSymbol=_precedingSymbol;
@property(readonly, copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithSymbol:(id)arg1 precedingSymbol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

