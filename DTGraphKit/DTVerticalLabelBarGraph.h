/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DTGraphKit/DTBarGraph.h>

@interface DTVerticalLabelBarGraph : DTBarGraph
{
}

- (long long)_bestNumberOfDivsGuessing:(long long)arg1;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (long long)_maxValue;
- (void)clearCache;

@end
