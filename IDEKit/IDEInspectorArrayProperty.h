/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

#import "NSTableViewDataSource-Protocol.h"

@class DVTBorderedView, DVTGradientImageButton, IDEControlGroup, IDEInspectorKeyPath, NSArray, NSString, NSTableView;

@interface IDEInspectorArrayProperty : IDEInspectorProperty <NSTableViewDataSource>
{
    NSTableView *itemsTableView;
    IDEInspectorKeyPath *_defaultValueKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    NSArray *_reflectedValues;
    NSString *_defaultValue;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
}

@property(retain, nonatomic) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
- (void).cxx_destruct;
- (void)removeRow:(id)arg1;
- (BOOL)canRemoveRow;
- (void)addRow:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateRemoveButtonEnabledState;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)awakeFromNib;
- (double)baseline;
- (void)pushValuesToModel:(id)arg1;
- (void)setupControlBarAfterLoading;

@end

