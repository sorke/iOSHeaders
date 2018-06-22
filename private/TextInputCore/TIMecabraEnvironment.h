//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, TIMecabraEnvironmentContextWrapper;

@interface TIMecabraEnvironment : NSObject
{
    _Bool _shouldAdjustOnAnalyze;
    NSString *_leftDocumentContext;
    NSString *_rightDocumentContext;
    TIMecabraEnvironmentContextWrapper *_mecabraContextWrapper;
    NSMutableArray *_candidatesLeftOfCaret;
    NSMutableArray *_candidatesRightOfCaret;
    NSString *_leftDocumentContextCorrespondingToCandidates;
    NSString *_rightDocumentContextCorrespondingToCandidates;
    NSMutableArray *_candidatesToDelete;
    struct _NSRange _leftDocumentContextCorrespondingToCandidatesRange;
    struct _NSRange _rightDocumentContextCorrespondingToCandidatesRange;
}

+ (void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 inMecabra:(struct __Mecabra *)arg3 onQueue:(id)arg4;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 inMecabra:(struct __Mecabra *)arg2 onQueue:(id)arg3;
+ (void)removeMobileAssetListener:(id)arg1;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra *)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4;
@property(retain, nonatomic) NSMutableArray *candidatesToDelete; // @synthesize candidatesToDelete=_candidatesToDelete;
@property(nonatomic) struct _NSRange rightDocumentContextCorrespondingToCandidatesRange; // @synthesize rightDocumentContextCorrespondingToCandidatesRange=_rightDocumentContextCorrespondingToCandidatesRange;
@property(nonatomic) struct _NSRange leftDocumentContextCorrespondingToCandidatesRange; // @synthesize leftDocumentContextCorrespondingToCandidatesRange=_leftDocumentContextCorrespondingToCandidatesRange;
@property(copy, nonatomic) NSString *rightDocumentContextCorrespondingToCandidates; // @synthesize rightDocumentContextCorrespondingToCandidates=_rightDocumentContextCorrespondingToCandidates;
@property(copy, nonatomic) NSString *leftDocumentContextCorrespondingToCandidates; // @synthesize leftDocumentContextCorrespondingToCandidates=_leftDocumentContextCorrespondingToCandidates;
@property(retain, nonatomic) NSMutableArray *candidatesRightOfCaret; // @synthesize candidatesRightOfCaret=_candidatesRightOfCaret;
@property(retain, nonatomic) NSMutableArray *candidatesLeftOfCaret; // @synthesize candidatesLeftOfCaret=_candidatesLeftOfCaret;
@property(nonatomic) _Bool shouldAdjustOnAnalyze; // @synthesize shouldAdjustOnAnalyze=_shouldAdjustOnAnalyze;
@property(retain, nonatomic) TIMecabraEnvironmentContextWrapper *mecabraContextWrapper; // @synthesize mecabraContextWrapper=_mecabraContextWrapper;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *rightCandidateSurfaces;
@property(readonly, nonatomic) NSArray *inlineCandidateSurfaces;
@property(readonly, nonatomic) NSArray *contextCandidateSurfaces;
@property(readonly, nonatomic) NSDictionary *environmentDebuggingInformation;
- (void)reset;
- (void)declareEndOfSentence;
- (void)addPunctuationCandidateToContext:(id)arg1;
- (void)addStringCandidateToContext:(id)arg1;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (void)adjustEnvironmentDirectly:(long long)arg1;
- (void)revertInlineCandidate;
- (void)completelyCommitInlineCandidate:(void *)arg1;
- (void)partiallyCommitInlineCandidate:(void *)arg1;
- (void)acceptInlineCandidates;
- (void)setShuangpinType:(int)arg1;
- (void)setAppContext:(id)arg1;
- (void)addStringCandidateToContextInternal:(id)arg1;
- (void)setGeometryModel:(void *)arg1 modelData:(struct __CFArray *)arg2;
- (_Bool)predictionAnalyzeWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (_Bool)analyzeString:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) struct __Mecabra *mecabra;
- (id)initWithMecabraEngine:(struct __Mecabra *)arg1 language:(int)arg2;
- (void)adjustEnvironment:(long long)arg1;
- (void)compareDocumentAndEnvironmentCandidates;
- (_Bool)addNewCandidatesIfNecessary:(long long)arg1;
- (void)createNewCandidatesFromDocumentContext;
- (void)insertCandidateWithString:(id)arg1 intoArray:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addCandidateWithString:(id)arg1 toArray:(id)arg2;
- (void)revertLearningOfCandidateIfNecessary;
- (void)analyzeCandidateContextWithSplit:(_Bool)arg1;
- (void)updateCursorPosition;
- (_Bool)documentContextIsEmpty;
- (void)setCandidateIndex:(long long)arg1;
- (unsigned long long)candidateIndex;
@property(nonatomic) int textContentType;
@property(copy, nonatomic) NSString *rightDocumentContext; // @synthesize rightDocumentContext=_rightDocumentContext;
- (void)setLeftDocumentContextInternal:(id)arg1;
@property(copy, nonatomic) NSString *leftDocumentContext; // @synthesize leftDocumentContext=_leftDocumentContext;

@end

