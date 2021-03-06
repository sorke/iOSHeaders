//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Symbolication/VMUStackLogReaderBase.h>

#import "NSSecureCoding.h"
#import "VMUStackLogReader.h"

@class NSSet, NSString, VMUDebugTimer, VMUProcessObjectGraph, VMURangeToStringMap, VMUVMRegionTracker;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader>
{
    struct _CSTypeRef _symbolicator;
    VMUProcessObjectGraph *_graph;
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int *_nodeToStackIdTable;
    struct vmu_backtrace_uniquing_table_t *_backtraceUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(_Bool)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
@property(readonly) _Bool inspectingLiveProcess;
@property(readonly) _Bool is64bit;
- (struct _VMURange)sourceLineRangeContainingPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(_Bool)arg2;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int *)arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange)arg3;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange)arg2;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (void)symbolicateBacktraceUniquingTable;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 graph:(id)arg3 debugTimer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *excludedFrames;
@property(readonly) unsigned long long hash;
@property(readonly) VMUVMRegionTracker *regionTracker;
@property(readonly) Class superclass;
@property(readonly) unsigned int task;
@property(readonly) _Bool usesLiteMode;

@end

