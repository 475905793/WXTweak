//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "GameHaowanUploadTaskDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class GameHaowanDatabaseHelper, NSMutableDictionary, NSString;

@interface GameHaowanPostMgr : MMService <MMServiceProtocol, GameHaowanUploadTaskDelegate>
{
    GameHaowanDatabaseHelper *_databaseHelper;
    NSMutableDictionary *_uploadTasks;
}

@property(retain, nonatomic) NSMutableDictionary *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) GameHaowanDatabaseHelper *databaseHelper; // @synthesize databaseHelper=_databaseHelper;
- (void).cxx_destruct;
- (int)ssidForTrackEventSource:(long long)arg1;
- (id)buildTrackEventProps:(id)arg1;
- (id)reportObjWithAction:(int)arg1;
- (void)trackEventPostFailed:(id)arg1 errcode:(long long)arg2;
- (void)trackEventPostSucceed:(id)arg1 topicId:(unsigned int)arg2 postType:(long long)arg3 fileList:(id)arg4;
- (void)trackEventAddNewPost:(id)arg1;
- (void)resumeImagePost:(id)arg1 mediaItems:(id)arg2;
- (void)resumeVideoPost:(id)arg1 mediaItems:(id)arg2;
- (void)resumePostWithId:(id)arg1 postType:(long long)arg2;
- (void)tryResumePublish;
- (id)buildPBMediaListForImagePost:(id)arg1 fileList:(id)arg2;
- (id)buildPBMediaListForVideoPost:(id)arg1 fileList:(id)arg2 editFlag:(unsigned int)arg3;
- (void)sendHaowanPostRequest:(id)arg1 resIds:(id)arg2 fileList:(id)arg3;
- (_Bool)reachRetryLimit:(id)arg1;
- (void)uploadTask:(id)arg1 willRetryWithCount:(unsigned long long)arg2;
- (_Bool)uploadTask:(id)arg1 didFailedWithError:(id)arg2 canRetry:(_Bool)arg3;
- (void)uploadTask:(id)arg1 didProgressChanged:(float)arg2;
- (void)uploadTask:(id)arg1 didSucceedWithResIds:(id)arg2;
- (void)handlePostCanceled:(id)arg1;
- (void)handlePostProgress:(id)arg1 progress:(float)arg2;
- (void)handlePostSucceed:(id)arg1;
- (void)handlePostFailed:(id)arg1 errMsg:(id)arg2 code:(long long)arg3;
- (id)createUploadTask:(long long)arg1 fileList:(id)arg2;
- (void)startUploadTask:(id)arg1 postId:(id)arg2;
- (id)prepareNewPost:(id)arg1;
- (id)startMediaPost:(id)arg1;
- (id)startTextPost:(id)arg1;
- (id)publishHaowanPost:(id)arg1;
- (id)getPost:(id)arg1;
- (id)getAllPost;
- (_Bool)removePost:(id)arg1;
- (void)removeAllPost;
- (void)stopAllUploadTask;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)writePostInfo:(id)arg1;
- (id)readPostInfo;
- (void)transferImageMedias:(id)arg1 postId:(id)arg2;
- (void)transferVideoMedias:(id)arg1 postId:(id)arg2;
- (void)startTransferOldData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

