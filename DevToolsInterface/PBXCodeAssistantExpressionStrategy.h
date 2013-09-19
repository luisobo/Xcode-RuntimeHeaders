/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXCodeAssistantStrategy.h>

@class PBXCodeCompletion;

@interface PBXCodeAssistantExpressionStrategy : PBXCodeAssistantStrategy
{
    PBXCodeCompletion *_codeCompletor;
    BOOL _isObjC;
    BOOL _isCPP;
    BOOL _isJava;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (void)addClassScope:(id)arg1 forMethodScope:(id)arg2 toCompletor:(id)arg3;
- (BOOL)completeJavaImport:(BOOL)arg1 range:(struct _NSRange)arg2 items:(id *)arg3 withInfoString:(id)arg4;
- (void)_adjustItemPriorities:(id)arg1 forWordsInString:(id)arg2;
- (id)nonWordChars;
- (id)codeCompletor;
- (void)_indexDropped:(id)arg1;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 languageSpec:(id)arg2;

@end
