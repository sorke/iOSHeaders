//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"

@class NSNumber, NSString, UISApplicationSupportDisplayEdgeInsetsWrapper;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying>
{
    union {
        unsigned long long asInt;
        struct {
            unsigned int assertOnMutationAttempt:1;
        } flags;
    } _infoFlags;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_peripheryInsets;
    NSNumber *_systemMinimumMargin;
    NSNumber *_homeAffordanceOverlayAllowance;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsPortrait;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsLandscapeLeft;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsPortraitUpsideDown;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsLandscapeRight;
}

+ (id)defaultDisplayEdgeInfoForceInsets:(_Bool)arg1;
+ (id)defaultDisplayEdgeInfo;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeRight; // @synthesize safeAreaInsetsLandscapeRight=_safeAreaInsetsLandscapeRight;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortraitUpsideDown; // @synthesize safeAreaInsetsPortraitUpsideDown=_safeAreaInsetsPortraitUpsideDown;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeLeft; // @synthesize safeAreaInsetsLandscapeLeft=_safeAreaInsetsLandscapeLeft;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortrait; // @synthesize safeAreaInsetsPortrait=_safeAreaInsetsPortrait;
@property(retain, nonatomic) NSNumber *homeAffordanceOverlayAllowance; // @synthesize homeAffordanceOverlayAllowance=_homeAffordanceOverlayAllowance;
@property(retain, nonatomic) NSNumber *systemMinimumMargin; // @synthesize systemMinimumMargin=_systemMinimumMargin;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *peripheryInsets; // @synthesize peripheryInsets=_peripheryInsets;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_copyFromOtherInfo:(id)arg1;
- (void)_performIvarUpdateIfAllowed:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

