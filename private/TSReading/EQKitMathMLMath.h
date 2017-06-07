//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/EQKitExpression-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>
#import <TSReading/EQKitRootNode-Protocol.h>

@class EQKitEnvironmentInstance, EQKitMathMLNode, NSString;
@protocol EQKitLayoutNode;

@interface EQKitMathMLMath : NSObject <EQKitMathMLNode, EQKitRootNode, EQKitExpression>
{
    EQKitMathMLNode *mExpression;
    struct AttributeCollection *mAttributeCollection;
    EQKitEnvironmentInstance *mEnvironment;
}

@property(readonly, copy) NSString *description;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (_Bool)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (_Bool)isSpaceLike;
- (_Bool)isNumber;
- (long long)scriptLevelWithBase:(long long)arg1;
- (id)layoutStyleNode;
- (struct Schemata)layoutSchemata;
@property(readonly, nonatomic) id <EQKitLayoutNode> parent;
- (id)newLayout;
- (struct AttributeCollection *)attributeCollection;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
