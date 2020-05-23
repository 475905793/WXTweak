//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonOperateCgiDelegate-Protocol.h"
#import "EmoticonUploadCdnDelegate-Protocol.h"
#import "EmoticonUploadPrepareCgiDelegate-Protocol.h"
#import "StoreEmotionBatchEmojiDownLoadCgiDelegate-Protocol.h"

@class EmoticonOperateCgi, EmoticonUploadCdn, EmoticonUploadInfoObj, EmoticonUploadPrepareCgi, NSString, StoreEmotionBatchEmojiDownLoadCgi;
@protocol EmoticonUploaderDelegate;

@interface EmoticonUploader : MMObject <EmoticonUploadPrepareCgiDelegate, EmoticonUploadCdnDelegate, EmoticonOperateCgiDelegate, StoreEmotionBatchEmojiDownLoadCgiDelegate>
{
    _Bool _isActive;
    _Bool _shouldOperateAdd;
    id <EmoticonUploaderDelegate> _delegate;
    EmoticonUploadInfoObj *_uploadInfo;
    EmoticonUploadPrepareCgi *_prepareCgi;
    EmoticonUploadCdn *_uploadCdn;
    EmoticonOperateCgi *_operateCgi;
    StoreEmotionBatchEmojiDownLoadCgi *_emojiDownloadCgi;
    NSString *_activityId;
    NSString *_realMd5;
    unsigned long long _failReason;
}

@property(nonatomic) unsigned long long failReason; // @synthesize failReason=_failReason;
@property(retain, nonatomic) NSString *realMd5; // @synthesize realMd5=_realMd5;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) _Bool shouldOperateAdd; // @synthesize shouldOperateAdd=_shouldOperateAdd;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) StoreEmotionBatchEmojiDownLoadCgi *emojiDownloadCgi; // @synthesize emojiDownloadCgi=_emojiDownloadCgi;
@property(retain, nonatomic) EmoticonOperateCgi *operateCgi; // @synthesize operateCgi=_operateCgi;
@property(retain, nonatomic) EmoticonUploadCdn *uploadCdn; // @synthesize uploadCdn=_uploadCdn;
@property(retain, nonatomic) EmoticonUploadPrepareCgi *prepareCgi; // @synthesize prepareCgi=_prepareCgi;
@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) __weak id <EmoticonUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onBatchEmojiDownLoadEndWithEmojiList:(id)arg1;
- (void)onEmoticonOperateOk:(id)arg1 WithNeedBackupArray:(id)arg2 opCode:(unsigned long long)arg3 type:(unsigned long long)arg4;
- (void)onEmoticonOperateFailed:(id)arg1 opCode:(unsigned long long)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonUploadCdnFail;
- (void)onEmoticonUploadCdnSuccessWithRealMd5:(id)arg1;
- (void)onEmoticonUploadPrepareFail;
- (void)onEmoticonUploadPrepareSuccess:(id)arg1;
- (void)onUploaderFail;
- (void)onUploaderSuccess;
- (void)cancelUpload;
- (void)startUpload;
- (id)initWithUploadInfo:(id)arg1 shouldOperateAdd:(_Bool)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

