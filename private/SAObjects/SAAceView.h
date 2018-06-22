//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import "SAAceSerializable.h"

@class NSDictionary, NSNumber, NSString;

@interface SAAceView : SABaseAceObject <SAAceSerializable>
{
}

+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceView;
@property(copy, nonatomic) NSString *viewId;
@property(copy, nonatomic) NSString *speakableText;
@property(copy, nonatomic) NSDictionary *speakableContextInfo;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(copy, nonatomic) NSNumber *deferredRendering;
@property(retain, nonatomic) id <SAAceSerializable> context;
@property(nonatomic) _Bool canUseServerTTS;
@property(nonatomic) _Bool canBeRefreshed;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

