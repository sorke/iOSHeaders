//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIKeyboardKeyplaneTransformation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>
{
}

+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)cachedControlKeySetsForTransformationContext:(id)arg1;
+ (id)transformationIdentifier;
+ (id)_supplementaryScriptSwitchKeyWithContext:(id)arg1;
+ (id)_supplementaryControlKeyWithName:(id)arg1 context:(id)arg2;
+ (id)_supplementaryControlKeySetForOrientation:(long long)arg1 context:(id)arg2;
+ (double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)arg1 orientation:(long long)arg2;
+ (double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)arg1 keyCountForRow:(unsigned long long)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

