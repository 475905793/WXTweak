//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface WAPermissionMgr : MMService <MMServiceProtocol>
{
    NSMutableDictionary *_reportInfos;
    NSMutableSet *_setParallelPrefetching;
    NSMutableSet *_setWaitingParallelPrefetching;
    NSMutableDictionary *_dicParallelPrefetchResult;
}

+ (id)dictionayOfJSAPI2PermissionIndex;
+ (unsigned int)getEventThreadMode:(id)arg1;
+ (id)getPermissionByte:(id)arg1;
+ (_Bool)checkJsAPI:(id)arg1 haveRunMode:(unsigned int)arg2;
+ (unsigned int)getPermissionMode:(id)arg1;
- (void).cxx_destruct;
- (void)updateUsageItem:(id)arg1;
- (void)updateAppItem:(id)arg1;
- (id)getPermissionBytesWithAppID:(id)arg1;
- (id)actionSheetInfoFromResponse:(id)arg1;
- (id)launchActionFromResponse:(id)arg1;
- (id)weAppBindInfoFromResponse:(id)arg1;
- (void)executeIssueLaunchCmd:(id)arg1;
- (void)processResponseLaunchPermissionInfoWithRequest:(id)arg1 andResponse:(id)arg2 cgiUserInfo:(id)arg3;
- (void)onResponseLaunchPermissionInfo:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (_Bool)updateLaunchWithResponse:(id)arg1 appId:(id)arg2;
- (id)generateLaunchCGIUserInfo:(id)arg1 debugMode:(unsigned int)arg2 enterScene:(unsigned int)arg3 sessionId:(id)arg4 isFromBackground:(_Bool)arg5;
- (id)tryGetLocalResponseWithAppid:(id)arg1 inScene:(unsigned int)arg2;
- (_Bool)isIssueLaunchInfoValid:(id)arg1 inScene:(unsigned int)arg2;
- (_Bool)hasValidIssueLaunchForAppid:(id)arg1 username:(id)arg2 scene:(unsigned int)arg3;
- (_Bool)requestLaunchPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 appServiceType:(unsigned int)arg6 sessionId:(id)arg7 pagePath:(id)arg8 isFromBackground:(_Bool)arg9 requestType:(unsigned int)arg10 dicLaunchParameter:(id)arg11 isFromParallelLaunch:(_Bool)arg12;
- (id)getPermissionBanInfoWithAppID:(id)arg1;
- (id)getPermissionInfoWithUsername:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (void)clearParallelPrefetchInfo;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

