/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IDECGPathProvider <NSObject>
@property(readonly) double lineDashPhase;
@property(readonly) NSArray *lineDashPattern;
@property(readonly) BOOL usesEvenOddFillRule;
@property(readonly) double flatness;
@property(readonly) double miterLimit;
@property(readonly) int lineJoinStyle;
@property(readonly) int lineCapStyle;
@property(readonly) double lineWidth;
@property(readonly) struct CGPath *path;
@property(readonly) BOOL hasPathBeenRetrieved;
- (void)cancel;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;
@end

