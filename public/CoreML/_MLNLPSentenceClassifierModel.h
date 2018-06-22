//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLCustomModel.h"

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLNLPSentenceClassifierModel : NSObject <MLCustomModel>
{
    void *_sentenceClassifierModel;
    MLModelDescription *_modelDescription;
}

@property(retain) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end

