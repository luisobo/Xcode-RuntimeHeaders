/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsFoundation/DTModelObjectDescription.h>

@interface DTExtensionPointDescription : DTModelObjectDescription
{
}

- (void)_finishConfigurationWithSelfElement;
- (id)childExtensionPointDescriptions;
- (id)parentExtensionPointDescription;
- (id)extensionSchema;
- (void)setExtensionSchema:(id)arg1;
- (id)plugInDescription;
- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)willSave;
- (void)awakeFromFetch;
- (id)extensionDescriptions;
- (id)extensionProtocolName;
- (id)extensionClassName;
- (id)_findParentByIdentifier;
- (void)_connectParentExtensionPointRelationship;
- (id)_parentExtensionPointIdentifier;

@end

