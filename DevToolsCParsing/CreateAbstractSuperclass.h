/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCParsing/Transform.h>

@class NSString;

@interface CreateAbstractSuperclass : Transform
{
    BOOL _foundInterface;
    BOOL _foundImplementation;
    BOOL _createNewFiles;
    NSString *_newHeaderName;
}

- (BOOL)performPerFile;
- (BOOL)checkFinal;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;

@end
