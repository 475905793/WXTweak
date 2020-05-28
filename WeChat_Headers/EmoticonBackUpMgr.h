//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt-Protocol.h"
#import "EmoticonBackupLogicObjectDelegate-Protocol.h"
#import "EmoticonRecover-Protocol.h"
#import "EmoticonRecoverLogicObjectDelegate-Protocol.h"
#import "EmoticonServerNotifyTaskDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class EmoticonBackupLogicObject, EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonBackUpMgr : MMService <EmoticonBackupLogicObjectDelegate, EmoticonRecoverLogicObjectDelegate, MMKernelExt, CNetworkStatusExt, IMsgExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>
{
    _Bool m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int m_userActionStatus;
    unsigned int m_lastManageViewUploadTime;
    EmoticonBackupLogicObject *m_backupLogicObject;
    EmoticonRecoverLogicObject *m_recoverLogicObject;
    NSMutableArray *m_notifyTaskList;
}

@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) unsigned int m_lastManageViewUploadTime; // @synthesize m_lastManageViewUploadTime;
@property(nonatomic) unsigned int m_userActionStatus; // @synthesize m_userActionStatus;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject;
@property(retain, nonatomic) EmoticonBackupLogicObject *m_backupLogicObject; // @synthesize m_backupLogicObject;
- (void).cxx_destruct;
- (void)runNotifyTask;
- (void)onLogicDidResumed:(id)arg1;
- (_Bool)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPreQuit;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (_Bool)needNotifyEmoticonListChangeImmediately;
- (_Bool)isUserAllowOnRecover;
- (_Bool)isUserPauseOnRecover;
- (_Bool)isUserNoActionOnRecover;
- (void)onEmoticonRecoverLogicAutoPauseOnWWan;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonBackupLogicFailed;
- (void)onEmoticonBackupLogicOk;
- (void)internalGoonRecover;
- (void)goonRecover;
- (void)pauseRecover;
- (_Bool)isRecoverEmoticonBeenPause;
- (_Bool)isRecoveringEmoticonFromServer;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticonPause;
- (_Bool)isRecoveringEmoticon;
- (_Bool)recoverEmoticonFromServer;
- (void)backupLocalEmoticonToServerFromManageView;
- (void)backupLocalEmoticonToServer;
- (_Bool)canStartCgiNow;
- (void)onManulLogOut;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

