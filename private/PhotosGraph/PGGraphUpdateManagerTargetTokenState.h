//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject
{
    _Bool _encounteredTargetToken;
    PHPersistentChangeToken *_changeToken;
}

@property(nonatomic) _Bool encounteredTargetToken; // @synthesize encounteredTargetToken=_encounteredTargetToken;
@property(readonly, nonatomic) PHPersistentChangeToken *changeToken; // @synthesize changeToken=_changeToken;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPersistentChangeToken:(id)arg1;

@end

