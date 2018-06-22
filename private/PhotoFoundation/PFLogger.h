//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<PFLoggerBackend>, NSSet, NSString;

@interface PFLogger : NSObject
{
    _Bool _shouldLogToCrashReporter;
    _Bool _backendAllowsConcurrentAccess;
    int _logLevel;
    NSObject<PFLoggerBackend> *_backend;
    NSArray *_tracedSubsystems;
    NSArray *_debuggedSubsystems;
    NSString *_facilityPrefix;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_backendAccessSerializationQueue;
    NSObject<OS_dispatch_queue> *_recordedSubsystemsQueue;
    NSSet *_recordedSubsystems;
}

+ (_Bool)traceEnabledForSubsystem:(id)arg1;
+ (void)logCrashReporterMessageFromCodeLocation:(CDStruct_98c8119d)arg1 format:(id)arg2;
+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
+ (void)setupCrashReporter;
+ (void)logCrashReporterMessage:(id)arg1 fromCodeLocation:(CDStruct_98c8119d)arg2;
+ (_Bool)enabledForSubsystem:(id)arg1 level:(int)arg2;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (id)createDefaultLogger;
+ (int)defaultLoggerLogLevel;
+ (void)recreateDefaultLogger;
+ (void)setDefaultLogger:(id)arg1;
+ (void)flushDefaultLoggerIfPresent;
+ (id)defaultLogger;
+ (id)loggerWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;
+ (void)initialize;
@property(retain) NSSet *recordedSubsystems; // @synthesize recordedSubsystems=_recordedSubsystems;
@property(retain) NSObject<OS_dispatch_queue> *recordedSubsystemsQueue; // @synthesize recordedSubsystemsQueue=_recordedSubsystemsQueue;
@property _Bool backendAllowsConcurrentAccess; // @synthesize backendAllowsConcurrentAccess=_backendAllowsConcurrentAccess;
@property(retain) NSObject<OS_dispatch_queue> *backendAccessSerializationQueue; // @synthesize backendAccessSerializationQueue=_backendAccessSerializationQueue;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSString *facilityPrefix; // @synthesize facilityPrefix=_facilityPrefix;
@property(retain) NSArray *debuggedSubsystems; // @synthesize debuggedSubsystems=_debuggedSubsystems;
@property(retain) NSArray *tracedSubsystems; // @synthesize tracedSubsystems=_tracedSubsystems;
@property(retain) NSObject<PFLoggerBackend> *backend; // @synthesize backend=_backend;
@property _Bool shouldLogToCrashReporter; // @synthesize shouldLogToCrashReporter=_shouldLogToCrashReporter;
@property int logLevel; // @synthesize logLevel=_logLevel;
- (void).cxx_destruct;
- (void)_recordSubsystem:(id)arg1;
- (id)description;
- (void)flush;
- (_Bool)enabledForSubsystem:(id)arg1 subsystems:(id)arg2;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
- (void)processOptions;
- (id)initWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;

@end

