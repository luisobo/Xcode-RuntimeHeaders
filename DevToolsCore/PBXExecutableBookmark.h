/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXBookmark.h>

@class PBXExecutable;

@interface PBXExecutableBookmark : PBXBookmark
{
    PBXExecutable *_executable;
}

+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableRelationships;
- (id)innerDescription;
- (id)executable;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)defaultName;
- (void)dealloc;
- (id)initWithFileReference:(id)arg1;
- (id)initWithExecutable:(id)arg1;

@end

