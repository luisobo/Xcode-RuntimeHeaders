/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SKAction : NSObject <NSCopying, NSCoding>
{
    struct SKCAction *_caction;
    void *caction;
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(id)arg2;
+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (id)runAction:(id)arg1 onChildWithName:(id)arg2;
+ (id)runBlock:(id)arg1 queue:(void)arg2;
+ (id)runBlock:(id)arg1;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)removeFromParent;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;
+ (id)speedTo:(double)arg1 duration:(double)arg2;
+ (id)speedBy:(double)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;
+ (id)colorizeWithColorBlendFactor:(double)arg1 duration:(double)arg2;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(double)arg2 duration:(double)arg3;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(BOOL)arg3;
+ (id)playSoundFileNamed:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (id)playSoundFileNamed:(id)arg1;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2;
+ (id)setTexture:(id)arg1;
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)group:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)resizeToHeight:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)scaleYTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 duration:(double)arg2;
+ (id)moveToY:(double)arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 duration:(double)arg2;
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;
+ (id)moveBY:(struct CGVector)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
- (void)dealloc;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property double speed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property long long timingMode;
@property double duration;
- (struct SKCAction *)caction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (double)ratioForTime:(double)arg1;
@property BOOL finished;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)setCppAction:(void *)arg1;

@end

