/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDESourceCodeDocument, NSArray, NSMutableArray;

@interface IDEDiagnosticController : NSObject <DVTInvalidation>
{
    IDESourceCodeDocument *_sourceCodeDocument;
    double _diagnosticsGenerationDelay;
    BOOL _hasScheduledDiagnosticsGeneration;
    BOOL _isDiagnosisEnabled;
    BOOL _needsDiagnosis;
}

+ (void)initialize;
+ (id)diagnosticControllerLogAspect;
@property(nonatomic) BOOL needsDiagnosis; // @synthesize needsDiagnosis=_needsDiagnosis;
@property(nonatomic, getter=isDiagnosisEnabled) BOOL diagnosisEnabled; // @synthesize diagnosisEnabled=_isDiagnosisEnabled;
@property BOOL hasScheduledDiagnosticsGeneration; // @synthesize hasScheduledDiagnosticsGeneration=_hasScheduledDiagnosticsGeneration;
@property double diagnosticsGenerationDelay; // @synthesize diagnosticsGenerationDelay=_diagnosticsGenerationDelay;
@property(readonly) IDESourceCodeDocument *sourceCodeDocument; // @synthesize sourceCodeDocument=_sourceCodeDocument;
- (void).cxx_destruct;
- (void)cancelDiagnosticsGeneration;
- (void)scheduleDiagnosticsGeneration;
- (void)scheduleDiagnosticsGenerationWithDelay:(double)arg1;
- (void)diagnose;
@property(readonly) NSMutableArray *mutableDiagnosticItems;
@property(copy) NSArray *diagnosticItems;
- (void)primitiveInvalidate;
- (id)initWithSourceCodeDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
