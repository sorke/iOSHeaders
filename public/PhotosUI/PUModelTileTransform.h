//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSString;

@interface PUModelTileTransform : NSObject <NSCopying>
{
    _Bool _hasUserInput;
    double _scale;
    NSString *_userInputOriginIdentifier;
    struct CGPoint _normalizedTranslation;
    struct CGPoint _overscroll;
}

@property(readonly, copy, nonatomic) NSString *userInputOriginIdentifier; // @synthesize userInputOriginIdentifier=_userInputOriginIdentifier;
@property(readonly, nonatomic) struct CGPoint overscroll; // @synthesize overscroll=_overscroll;
@property(readonly, nonatomic) struct CGPoint normalizedTranslation; // @synthesize normalizedTranslation=_normalizedTranslation;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) _Bool hasUserInput; // @synthesize hasUserInput=_hasUserInput;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool hasUserZoomedOut;
@property(readonly, nonatomic) _Bool hasUserZoomedIn;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNormalizedTranslation:(struct CGPoint)arg1 overscroll:(struct CGPoint)arg2 scale:(double)arg3 userInputOriginIdentifier:(id)arg4;
- (id)initWithNoUserInput;
- (id)init;

@end
