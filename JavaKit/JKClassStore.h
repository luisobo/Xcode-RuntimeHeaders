/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface JKClassStore : NSObject
{
}

+ (BOOL)canGrokName:(id)arg1;
+ (id)classStoreForName:(id)arg1;
+ (void)initialize;
- (id)dataForClassWithName:(id)arg1;
- (BOOL)containsPackageWithName:(id)arg1;
- (BOOL)containsClassWithName:(id)arg1;
- (id)packageNamesInPackage:(id)arg1;
- (id)classNamesInPackage:(id)arg1;
- (id)name;
- (id)initWithName:(id)arg1;

@end

