/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFindResult, IDEBatchFindCandidateFile, IDEIndexSymbol, NSDate, NSImage, NSString;

@interface IDEBatchFindResult : NSObject
{
    DVTFindResult *_findResult;
    struct _NSRange _wholeWordRange;
    BOOL _wholeWordCalculated;
    IDEIndexSymbol *_symbol;
    IDEBatchFindCandidateFile *_foundInFile;
    BOOL _backingFileChangedOnDisk;
    NSDate *_resultTime;
    int _computedDetailLevel;
    int _columnWidth;
    struct CGSize _computedSize;
}

+ (id)findResultsSortedByFileByDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplayImage;
@property int columnWidth; // @synthesize columnWidth=_columnWidth;
@property int computedDetailLevel; // @synthesize computedDetailLevel=_computedDetailLevel;
@property struct CGSize computedSize; // @synthesize computedSize=_computedSize;
@property BOOL backingFileChangedOnDisk; // @synthesize backingFileChangedOnDisk=_backingFileChangedOnDisk;
@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property(readonly) IDEBatchFindCandidateFile *foundInFile; // @synthesize foundInFile=_foundInFile;
@property(readonly) DVTFindResult *findResult; // @synthesize findResult=_findResult;
- (void).cxx_destruct;
@property(readonly) NSString *formattedStringRepresentation;
@property(readonly) NSImage *statusImage;
@property(readonly) NSImage *displayImage;
@property(readonly) struct _NSRange displayFocusRange;
@property(readonly) NSString *displayTitle;
@property(readonly) struct _NSRange matchRange;
@property(readonly) struct _NSRange symbolRange;
@property(readonly) NSString *wholeWordMatch;
@property(readonly) struct _NSRange wholeWordRange;
- (BOOL)resultValid;
- (void)fileWasSavedDuringReplace;
@property(readonly, getter=isReplaceable) BOOL replacable;
- (BOOL)hasSymbol;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithResult:(id)arg1 foundInFile:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_image;
- (id)navigableItem_name;

@end

