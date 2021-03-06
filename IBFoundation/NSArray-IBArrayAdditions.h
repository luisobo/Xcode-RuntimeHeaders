/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@interface NSArray (IBArrayAdditions)
+ (id)ib_arrayWithObjects:(id *)arg1 count:(long long)arg2 ignoringNil:(BOOL)arg3;
+ (id)ib_arrayWithOptionalObjects:(long long)arg1;
- (id)ib_objectAtIndexIfInBounds:(long long)arg1;
- (void)ib_invokeWithAccessToObjects:(id)arg1;
- (id)ib_maximumObjectUsingComparator:(id)arg1;
- (id)ib_minimumObjectUsingComparator:(id)arg1;
- (id)ib_objectAtIndexFromEnd:(long long)arg1;
- (long long)ib_numberOfObjectsPassingTest:(id)arg1;
- (BOOL)ib_isSortedWithComparator:(id)arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(id)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(id)arg1;
- (void)ib_enumerateObjectsUsingBlock:(id)arg1;
- (id)ib_collectionByRemovingNulls;
- (id)ib_indexesOfObjects:(id)arg1;
- (BOOL)ib_objectsAreStrictlyContainedBySet:(id)arg1;
- (BOOL)ib_objectsAreContainedBySet:(id)arg1;
- (id)ib_onlyObjectPassingTest:(id)arg1;
- (id)ib_firstObjectPassingTest:(id)arg1;
- (BOOL)ib_anyObjectsPassTest:(id)arg1;
- (BOOL)ib_allObjectsPassTest:(id)arg1;
- (long long)ib_commonPrefixLengthWithArray:(id)arg1;
- (BOOL)ib_isLastIndex:(unsigned long long)arg1;
- (id)allObjects;
- (Class)ib_mutableClass;
- (id)ib_objectBeforeObject:(id)arg1 wrap:(BOOL)arg2;
- (id)ib_objectAfterObject:(id)arg1 wrap:(BOOL)arg2;
- (BOOL)ib_isIndexInBounds:(unsigned long long)arg1;
- (id)ib_objectsOfClasses:(id)arg1;
- (id)ib_objectsConformingToProtocol:(id)arg1;
- (id)ib_objectsOfClass:(Class)arg1;
- (id)anyObject;
- (id)ib_uniqueObjects;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(id)arg2;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (id)ib_keepIf:(SEL)arg1 withObject:(id)arg2;
- (id)ib_keepIf:(SEL)arg1;
- (id)ib_arrayByReversingObjects;
- (id)ib_setByMappingBlock:(id)arg1;
- (id)ib_arrayByApplyingBlock:(id)arg1;
- (id)ib_arrayByMappingBlockAndAssertingOnNilMappedValue:(id)arg1;
- (id)ib_arrayByMappingBlock:(id)arg1;
- (id)ib_arrayByMappingWithBehavior:(long long)arg1 andBlock:(id)arg2;
- (id)ib_collectionByFilteringUsingBlock:(id)arg1;
- (id)ib_arrayByFilteringUsingBlock:(id)arg1;
- (id)ib_arrayByRemovingObjectsInArray:(id)arg1;
- (id)ib_arrayByKeepingObjectsInSet:(id)arg1;
- (id)ib_arrayByRemovingObjectsInSet:(id)arg1;
- (id)ib_arrayByRemovingNulls;
- (id)ib_arrayByUniquifyingOnKey:(id)arg1;
- (id)ib_arrayByAppendingObjectsFromArrays:(id)arg1;
- (id)ib_arrayByRemovingObject:(id)arg1;
- (id)ib_arrayByAppendingObjects:(id)arg1;
- (id)ib_onlyObject;
- (id)ib_firstObject;
@end

