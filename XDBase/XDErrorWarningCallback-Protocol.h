/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol XDErrorWarningCallback <NSObject>
- (float)targetVersion;
- (BOOL)continueGeneration;
- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2;
- (id)warningList;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2;
- (id)errorList;
- (id)compilerFlags;
@end
