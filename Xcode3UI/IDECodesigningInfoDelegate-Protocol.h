/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSString;

@protocol IDECodesigningInfoDelegate <NSObject>
@property(readonly) NSString *provisioningProfileUUID;
@property(readonly) NSString *codesignIdentity;
@property(readonly) BOOL isUsingTeamBasedSigning;
- (void)useTeamBasedSigningWithTeam:(id)arg1 account:(id)arg2;
@end
