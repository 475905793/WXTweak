//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAppMsgPathMgr-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "ISysNewXmlMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"
#import "WCPlayerMediaExt-Protocol.h"

@class AppInnerJumpItem, AppMMScheduleItem, AppMsgShareItem, AppProductItem, AppTVItem, BrandMpVideoItem, CContact, CardTicketItem, EmoticonAppMsgItem, EmoticonSharedItem, EmotionDesignerSharedItem, EmotionPageSharedItem, FavoritesItem, GiftCardItem, HardWareItem, ImageInfo, MMAsset, MMTemplateMsg3rdAppShowItem, MallProductItem, MessageExpItem, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, OpenSDKAppBrandItem, PushMailWrap, ScanCodeHistoryItem, VideoUploadStatInfo, WAAppMsgItem, WCCanvasPageItem, WCFinderMessageShareNameCard, WCFinderMessageVerifyItem, WCFinderShareToMomentsItem, WCFinderTopicShareItem, WCPayExtensionInfo, WCPayInfoItem, WCPayThirdInfo, WSVideoModel, iWatchAppMsgItem;
@protocol IMsgExtendOperation;

@interface CMessageWrap : MMObject <IAppMsgPathMgr, ISysNewXmlMsgExtendOperation, WCPlayerMediaExt, IMsgExtendOperation, NSCopying>
{
    _Bool m_bNew;
    unsigned int m_uiMesLocalID;
    long long m_n64MesSvrID;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    unsigned int m_uiMessageType;
    NSString *m_nsContent;
    unsigned int m_uiStatus;
    unsigned int m_uiImgStatus;
    unsigned int m_uiMsgFlag;
    unsigned int m_uiCreateTime;
    NSString *m_nsPushContent;
    NSString *m_nsPushTitle;
    NSString *m_nsPushPrefix;
    NSString *m_nsPushBody;
    NSString *m_nsMsgSource;
    NSString *m_nsRealChatUsr;
    NSData *m_dtThumbnail;
    unsigned int m_uiSendTime;
    unsigned int m_uiEmojiStatFlag;
    NSString *m_nsPattern;
    _Bool m_bForward;
    _Bool m_bCdnForward;
    unsigned int m_uiPercent;
    unsigned int m_uiDownloadStatus;
    id <IMsgExtendOperation> m_extendInfoWithMsgTypeForBiz;
    id <IMsgExtendOperation> m_extendInfoWithMsgType;
    id <IMsgExtendOperation> m_extendInfoWithFromUsr;
    NSString *m_nsLastDisplayContent;
    _Bool m_isTempSessionMsg;
    _Bool m_isEnterpriseMsg;
    unsigned int m_sequenceId;
    NSString *m_firstSendMsgId;
    unsigned int m_firstSendTime;
    NSString *m_forcePushId;
    unsigned int m_uiShareCardMessageStatus;
    _Bool m_isP8Msg;
    _Bool m_bIsFromBrandSession;
    _Bool m_bIsBrandSendMass;
    _Bool m_bForbidden;
    _Bool m_bIsSubscribeMsg;
    _Bool m_bIsPreviewMsg;
    _Bool _m_nsAtAll;
    _Bool _m_bIsExpan;
    _Bool _m_bIsTimelineBanned;
    _Bool _m_bIsNotificationOnlyShowInSession;
    _Bool _m_bIsBrowsed;
    _Bool _m_bIsShowBigPic;
    _Bool _m_bBrandMsgExposedInMainSession;
    unsigned int m_uiBizChatVer;
    unsigned int m_bReceiveMessageSwitchStatus;
    unsigned int m_bTextFold;
    unsigned int m_uiBizSceneType;
    unsigned int m_nsBizChatUserType;
    unsigned int _m_uiFinishedLength;
    unsigned int _m_selectLength;
    unsigned int _m_forwardType;
    unsigned int _m_brandTimelineMsgId;
    int _m_msgPredict;
    NSString *m_nsKFWorkerOpenID;
    NSString *m_nsBizClientMsgID;
    NSString *m_nsBizChatId;
    NSString *m_nsAtUserList;
    unsigned long long watchMsgSourceType;
    NSString *m_nsDisplayName;
    NSString *m_bizMsgMenuID;
    NSString *m_nsTipsUrl;
    long long m_bizMsgType;
    NSData *m_byteBuffer;
    NSString *m_nsSignature;
    NSString *_m_nsBizCliMsgId;
    NSString *_m_nsShareTipsWording;
    NSString *_m_nsShareTipsUrl;
    NSString *_m_uuid;
    NSMutableDictionary *_m_dicForwardParas;
    unsigned long long _m_brandTimelineSequenceId;
    long long _m_bizFlag;
    NSString *_m_nsBrandRankSessionId;
    CMessageWrap *_referHostMsg;
}

+ (id)FTSMessageSupportTypes;
+ (_Bool)isPreViewMsg;
+ (id)createMaskedThumbImageForMessageWrap:(id)arg1;
+ (id)GetCdnDownloadPathOfMsgThumb:(id)arg1;
+ (id)GetTempPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)GetPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)getMaskedVideoMsgImgThumb:(id)arg1;
+ (id)getMaskedMsgImgThumb:(id)arg1;
+ (id)getMsgImgThumb:(id)arg1;
+ (id)getPathOfVideoMsgImgThumb:(id)arg1;
+ (id)GetPathOfMaskedSquareMesImgThumbDir;
+ (id)GetPathOfMaskedSquareMesImgThumbDir:(id)arg1;
+ (id)GetPathOfSquareMesImgThumb:(id)arg1;
+ (id)getPathOfMaskedVideoMsgImgThumb:(id)arg1;
+ (id)getPathOfMaskedMsgImgThumb:(id)arg1;
+ (id)getPathOfMessageImageCache;
+ (id)getOldPathOfMessageImageCache;
+ (id)getPathOfMiddleImgForSender:(id)arg1;
+ (id)getPathOfMsgImgThumb:(id)arg1;
+ (id)getMsgMiddleImgPath:(id)arg1;
+ (id)getMsgMiddleImgData:(id)arg1;
+ (id)getMsgMiddleImg:(id)arg1;
+ (id)getMsgImgData:(id)arg1;
+ (id)getMsgImg:(id)arg1;
+ (id)getPathOfMsgImg:(id)arg1;
+ (id)getMsgHDImgPath:(id)arg1;
+ (id)getMsgHDImgData:(id)arg1;
+ (id)getJpgPathOfMsgImg:(id)arg1;
+ (_Bool)isVcodec2Img:(id)arg1;
+ (_Bool)MsgImgExist:(id)arg1;
+ (id)getPathOfMsgWxAmImg:(id)arg1;
+ (id)getJpgPathOfMsgHDImg:(id)arg1;
+ (_Bool)MsgHDImgExist:(id)arg1;
+ (id)getMsgHDImg:(id)arg1;
+ (id)getPathOfMsgVcodec2HDImg:(id)arg1;
+ (id)getPathOfMsgVcodec2Img:(id)arg1;
+ (id)getPathOfImageMessage:(id)arg1;
+ (id)getUserNameFromMsgWrap:(id)arg1;
+ (_Bool)isSenderFromMsgWrap:(id)arg1;
+ (_Bool)IsFinderTopicMsgEnable:(id)arg1;
+ (_Bool)IsFinderFeedMsgEnable:(id)arg1;
+ (_Bool)IsRecordMsg:(id)arg1;
+ (_Bool)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
+ (_Bool)SaveMsgThumbWithMsgWrap:(id)arg1;
+ (void)clearLocalMaskedThumbImage:(id)arg1;
+ (void)clearLocalImage:(id)arg1;
+ (id)FormMessageWrapFromAddMsg:(id)arg1;
+ (id)FormMessageWrapFromBuffer:(id)arg1;
+ (void)initialize;
+ (void)GetPathOfAppRemindAttach:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppThumb:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfMaskedAppThumb:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 AttachId:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 andAttachId:(id)arg3 andAttachFileExt:(id)arg4 retStrPath:(id *)arg5;
+ (void)GetPathOfAppData:(id)arg1 LocalID:(unsigned int)arg2 FileExt:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppImgCacheDir:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)getMessageListStatusImage:(unsigned int)arg1;
@property(nonatomic) __weak CMessageWrap *referHostMsg; // @synthesize referHostMsg=_referHostMsg;
@property(copy, nonatomic) NSString *m_nsBrandRankSessionId; // @synthesize m_nsBrandRankSessionId=_m_nsBrandRankSessionId;
@property(nonatomic) _Bool m_bBrandMsgExposedInMainSession; // @synthesize m_bBrandMsgExposedInMainSession=_m_bBrandMsgExposedInMainSession;
@property(nonatomic) long long m_bizFlag; // @synthesize m_bizFlag=_m_bizFlag;
@property(nonatomic) _Bool m_bIsShowBigPic; // @synthesize m_bIsShowBigPic=_m_bIsShowBigPic;
@property(nonatomic) _Bool m_bIsBrowsed; // @synthesize m_bIsBrowsed=_m_bIsBrowsed;
@property(nonatomic) _Bool m_bIsNotificationOnlyShowInSession; // @synthesize m_bIsNotificationOnlyShowInSession=_m_bIsNotificationOnlyShowInSession;
@property(nonatomic) _Bool m_bIsTimelineBanned; // @synthesize m_bIsTimelineBanned=_m_bIsTimelineBanned;
@property(nonatomic) int m_msgPredict; // @synthesize m_msgPredict=_m_msgPredict;
@property(nonatomic) _Bool m_bIsExpan; // @synthesize m_bIsExpan=_m_bIsExpan;
@property(nonatomic) unsigned long long m_brandTimelineSequenceId; // @synthesize m_brandTimelineSequenceId=_m_brandTimelineSequenceId;
@property(nonatomic) unsigned int m_brandTimelineMsgId; // @synthesize m_brandTimelineMsgId=_m_brandTimelineMsgId;
@property(retain, nonatomic) NSMutableDictionary *m_dicForwardParas; // @synthesize m_dicForwardParas=_m_dicForwardParas;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(retain, nonatomic) NSString *m_uuid; // @synthesize m_uuid=_m_uuid;
@property(nonatomic) unsigned int m_selectLength; // @synthesize m_selectLength=_m_selectLength;
@property(retain, nonatomic) NSString *m_nsShareTipsUrl; // @synthesize m_nsShareTipsUrl=_m_nsShareTipsUrl;
@property(retain, nonatomic) NSString *m_nsShareTipsWording; // @synthesize m_nsShareTipsWording=_m_nsShareTipsWording;
@property(nonatomic) _Bool m_nsAtAll; // @synthesize m_nsAtAll=_m_nsAtAll;
@property(copy, nonatomic) NSString *m_nsBizCliMsgId; // @synthesize m_nsBizCliMsgId=_m_nsBizCliMsgId;
@property(nonatomic) unsigned int m_uiFinishedLength; // @synthesize m_uiFinishedLength=_m_uiFinishedLength;
@property(nonatomic) unsigned int m_uiShareCardMessageStatus; // @synthesize m_uiShareCardMessageStatus;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(nonatomic) unsigned int m_nsBizChatUserType; // @synthesize m_nsBizChatUserType;
@property(retain, nonatomic) NSData *m_byteBuffer; // @synthesize m_byteBuffer;
@property(nonatomic) long long m_bizMsgType; // @synthesize m_bizMsgType;
@property(nonatomic) unsigned int m_uiBizSceneType; // @synthesize m_uiBizSceneType;
@property(nonatomic) _Bool m_bIsPreviewMsg; // @synthesize m_bIsPreviewMsg;
@property(nonatomic) _Bool m_bIsSubscribeMsg; // @synthesize m_bIsSubscribeMsg;
@property(retain, nonatomic) NSString *m_nsTipsUrl; // @synthesize m_nsTipsUrl;
@property(nonatomic) unsigned int m_bTextFold; // @synthesize m_bTextFold;
@property(nonatomic) _Bool m_bForbidden; // @synthesize m_bForbidden;
@property(nonatomic) unsigned int m_bReceiveMessageSwitchStatus; // @synthesize m_bReceiveMessageSwitchStatus;
@property(retain, nonatomic) NSString *m_bizMsgMenuID; // @synthesize m_bizMsgMenuID;
@property(nonatomic) _Bool m_bIsBrandSendMass; // @synthesize m_bIsBrandSendMass;
@property(nonatomic) _Bool m_bIsFromBrandSession; // @synthesize m_bIsFromBrandSession;
@property(nonatomic) unsigned int m_firstSendTime; // @synthesize m_firstSendTime;
@property(retain, nonatomic) NSString *m_firstSendMsgId; // @synthesize m_firstSendMsgId;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(nonatomic) unsigned int m_sequenceId; // @synthesize m_sequenceId;
@property(nonatomic) _Bool m_isEnterpriseMsg; // @synthesize m_isEnterpriseMsg;
@property(nonatomic) _Bool m_isTempSessionMsg; // @synthesize m_isTempSessionMsg;
@property(nonatomic) unsigned long long watchMsgSourceType; // @synthesize watchMsgSourceType;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(retain, nonatomic) NSString *m_forcePushId; // @synthesize m_forcePushId;
@property(nonatomic) _Bool m_isP8Msg; // @synthesize m_isP8Msg;
@property(nonatomic) unsigned int m_uiBizChatVer; // @synthesize m_uiBizChatVer;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsBizClientMsgID; // @synthesize m_nsBizClientMsgID;
@property(retain, nonatomic) NSString *m_nsKFWorkerOpenID; // @synthesize m_nsKFWorkerOpenID;
@property(nonatomic) unsigned int m_uiDownloadStatus; // @synthesize m_uiDownloadStatus;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(nonatomic) unsigned int m_uiEmojiStatFlag; // @synthesize m_uiEmojiStatFlag;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(nonatomic) _Bool m_bNew; // @synthesize m_bNew;
@property(retain, nonatomic) NSData *m_dtThumbnail; // @synthesize m_dtThumbnail;
@property(nonatomic) _Bool m_bCdnForward; // @synthesize m_bCdnForward;
@property(nonatomic) _Bool m_bForward; // @synthesize m_bForward;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) id <IMsgExtendOperation> m_extendInfoWithFromUsr; // @synthesize m_extendInfoWithFromUsr;
@property(retain, nonatomic) id <IMsgExtendOperation> m_extendInfoWithMsgType; // @synthesize m_extendInfoWithMsgType;
@property(retain, nonatomic) id <IMsgExtendOperation> m_extendInfoWithMsgTypeForBiz; // @synthesize m_extendInfoWithMsgTypeForBiz;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsPushBody; // @synthesize m_nsPushBody;
@property(retain, nonatomic) NSString *m_nsPushPrefix; // @synthesize m_nsPushPrefix;
@property(retain, nonatomic) NSString *m_nsPushTitle; // @synthesize m_nsPushTitle;
@property(retain, nonatomic) NSString *m_nsPushContent; // @synthesize m_nsPushContent;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiMsgFlag; // @synthesize m_uiMsgFlag;
@property(nonatomic) unsigned int m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(nonatomic) long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID;
- (void).cxx_destruct;
- (_Bool)canReadWrapIntoBrandTimeline;
- (_Bool)canEnterBrandTimelineNotification;
- (_Bool)canEnterBrandTimeline;
- (id)nonCategorymessageFTSText;
- (id)messageFTSText;
- (_Bool)canUseContineUpload;
- (_Bool)isSentOK;
- (_Bool)IsNewInvitationApprove;
- (_Bool)IsUpdatableMsgSubscribeMsg;
- (_Bool)IsNewInvitation;
- (_Bool)IsRoomAnnouncement;
- (_Bool)IsAtMe;
- (_Bool)isShowAppMessageBlockButton;
- (_Bool)isShowAppBottomButton;
- (id)keyDescription;
@property(readonly, copy) NSString *description;
- (void)parseWCPayInfoItemIfNeed;
- (id)getWCPayMsgExtBizId;
- (unsigned int)getWCPayMsgInvalidTime;
- (_Bool)IsNeedAddWCPayMsgBizExt;
- (id)getWCPayMsgExtBizIdWithType:(unsigned int)arg1;
- (_Bool)isNewWCPayBizExtMsg:(long long *)arg1;
- (id)getC2CTransactionId;
- (long long)getC2CTransactionType;
- (_Bool)isOverseaHBMessageForNewWCPayBizExt;
- (_Bool)isAAMessageForNewWCPayBizExt;
- (_Bool)isHongBaoMessageForNewWCPayBizExt;
- (_Bool)isHongBaoMessageNeedDownloadEmoticon;
- (_Bool)isHongBaoMessageNeedDownloadShowResoruce;
- (_Bool)isTransferMessageForNewWCPayBizExt;
- (_Bool)IsNeedChatExt;
- (void)genMiddleImg:(id)arg1 originImgData:(id)arg2 isSaveOK:(_Bool)arg3 delegate:(id)arg4;
- (_Bool)genImageFromMMAssetAndNotify:(id)arg1;
- (id)GetDisplayContent;
- (id)GetMsgClientMsgID;
- (_Bool)IsBrandShareCardMsg;
- (_Bool)IsSameMsgWithFullCheck:(id)arg1;
- (_Bool)IsSameMsg:(id)arg1;
- (_Bool)IsSendBySendMsg;
- (_Bool)IsAppMessage;
- (_Bool)IsGetOnNeeded;
- (_Bool)IsBrandMPVideo;
- (_Bool)IsGameVideo;
- (_Bool)isWeiShiVideo;
- (_Bool)IsPureVideoMsg;
- (_Bool)IsVideoMsg;
- (_Bool)IsSimpleVideoMsg;
- (_Bool)IsVoiceMsg;
- (_Bool)IsImgMsg;
- (_Bool)IsTextMsg;
- (_Bool)IsChatRoomMessage;
- (_Bool)IsMassSendMessage;
- (_Bool)IsBottleMessage;
- (id)GetChatName;
- (void)AddOrModifyTagInMsgSource:(id)arg1 value:(id)arg2;
- (void)AddTagToMsgSource:(id)arg1 value:(id)arg2;
- (void)UpdateMsgSource;
- (void)ChangeForDisplay;
- (void)ChangeForSimpleMsgInfo;
- (void)ChangeForBackup;
- (void)fillMsgSourceFromContact:(id)arg1 isFromTempSession:(_Bool)arg2;
- (void)ChangeForPushContent;
- (void)ChangeForShareCardMessageFromForwardNode:(struct XmlReaderNode_t *)arg1;
- (void)changeForSecNode:(struct XmlReaderNode_t *)arg1;
- (void)ChangeForMsgSource;
- (void)ChangeForChatRoom;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyToMsg:(id)arg1;
- (id)initWithMsgType:(long long)arg1 nsFromUsr:(id)arg2;
- (id)initWithMsgType:(long long)arg1;
- (id)init;
- (id)changeForPlainTextMsg;
- (id)generateMsgReferXML;
- (void)updateForReferMsg:(id)arg1 replyContent:(id)arg2;
- (_Bool)isReferMsgType;
- (id)getReplyMessage;
- (id)wishingString;
- (_Bool)isForbitJumpUrl;
- (_Bool)isAAMessageForSessionStick;
- (_Bool)bIsFinderTopicShareContent;
- (_Bool)bIsFinderFeedShareContent;
- (_Bool)bIsAppUrlTypeFromWSVideoFlow;
- (_Bool)bIsAppUrlTypeWithCanvas;
- (id)nativeUrl;
- (int)yoType;
- (unsigned long long)yoCount;
- (id)getNodeBtnList;
- (_Bool)isPriorToMsg:(id)arg1;
- (long long)compareMessageAscending:(id)arg1;
- (long long)compareMessageLocalIDDescending:(id)arg1;
- (id)generateReplySummary:(id)arg1;
- (id)msgReferSenderDisplayName;
- (id)msgReferSummary;
- (_Bool)msgCanBeRefered;
- (id)getThumbImagePath;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (void)compressToH264WithCompletionSuccess:(CDUnknownBlockType)arg1 Fail:(CDUnknownBlockType)arg2;
- (_Bool)needCompressToH264;
- (_Bool)canBeginPreload;
- (_Bool)isPreloadVideoTask;
- (unsigned long long)getPickerSceneFromOptionObj;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)asyncCompressVideoWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canPlayVideo:(id)arg1;
- (_Bool)isAd;
- (id)GetCdnDownloadThumbPathOfVideo;
- (id)GetCdnDownloadPathOfVideo;
- (_Bool)canSaveImage;
- (long long)getImageMsgInterceptType;
- (long long)getTextMsgInterceptType;
- (_Bool)UpdateArgsMsgSource:(id)arg1;
- (id)getMsgTipUrl;
- (_Bool)canSelectAll;
- (struct _NSRange)getMsgSelectRange;
- (_Bool)IsMsgForbidden;
- (_Bool)IsTextFold;
- (_Bool)isABTestShutdownIntercept;
- (_Bool)isRegInCN;
- (id)GetMsgForbiddenBriefDesc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareItem;
@property(retain, nonatomic) WCFinderTopicShareItem *finderTopicShareItem;
@property(retain, nonatomic) WCFinderMessageVerifyItem *finderVerifyItem;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *m_AttachedContent; // @dynamic m_AttachedContent;
@property(retain, nonatomic) NSString *m_aesKey; // @dynamic m_aesKey;
@property(retain, nonatomic) NSArray *m_arrCustomWrap; // @dynamic m_arrCustomWrap;
@property(retain, nonatomic) NSMutableArray *m_arrInviteeMembers; // @dynamic m_arrInviteeMembers;
@property(retain, nonatomic) NSMutableArray *m_arrMembers; // @dynamic m_arrMembers;
@property(retain, nonatomic) NSArray *m_arrReaderWaps; // @dynamic m_arrReaderWaps;
@property(retain, nonatomic) MMAsset *m_asset; // @dynamic m_asset;
@property(retain, nonatomic) NSString *m_attachedText;
@property(retain, nonatomic) NSString *m_attachedTextColor;
@property(retain, nonatomic) NSString *m_authkey; // @dynamic m_authkey;
@property(nonatomic) _Bool m_bAppAttachExistInSvr; // @dynamic m_bAppAttachExistInSvr;
@property(nonatomic) _Bool m_bCanFold; // @dynamic m_bCanFold;
@property(nonatomic) _Bool m_bFolded; // @dynamic m_bFolded;
@property(nonatomic) _Bool m_bHasApprove; // @dynamic m_bHasApprove;
@property(nonatomic) _Bool m_bIsForceUpdate; // @dynamic m_bIsForceUpdate;
@property(nonatomic) _Bool m_bIsUpdatableMsgSubscribeMsg; // @dynamic m_bIsUpdatableMsgSubscribeMsg;
@property(nonatomic) _Bool m_bNeedReloadSubView; // @dynamic m_bNeedReloadSubView;
@property(nonatomic) _Bool m_bNewApprove; // @dynamic m_bNewApprove;
@property(nonatomic) _Bool m_bNewInv; // @dynamic m_bNewInv;
@property(nonatomic) _Bool m_bShowRewardTips; // @dynamic m_bShowRewardTips;
@property(retain, nonatomic) BrandMpVideoItem *m_brandMpVideoItem; // @dynamic m_brandMpVideoItem;
@property(retain, nonatomic) NSString *m_cdnUrlString; // @dynamic m_cdnUrlString;
@property(retain, nonatomic) NSString *m_clientAppDataId; // @dynamic m_clientAppDataId;
@property(retain, nonatomic) NSMutableDictionary *m_dicQuitRoomInfo; // @dynamic m_dicQuitRoomInfo;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @dynamic m_dicStatParas;
@property(retain, nonatomic) NSData *m_dtImg; // @dynamic m_dtImg;
@property(retain, nonatomic) NSData *m_dtSenderMidImg; // @dynamic m_dtSenderMidImg;
@property(retain, nonatomic) NSData *m_dtVoice; // @dynamic m_dtVoice;
@property(nonatomic) unsigned int m_duration; // @dynamic m_duration;
@property(retain, nonatomic) NSString *m_encryptUrlString; // @dynamic m_encryptUrlString;
@property(nonatomic) double m_fLatitude; // @dynamic m_fLatitude;
@property(nonatomic) double m_fLongitude; // @dynamic m_fLongitude;
@property(retain, nonatomic) WCFinderMessageShareNameCard *m_finderShareNameCard;
@property(retain, nonatomic) NSString *m_fromChatUserName; // @dynamic m_fromChatUserName;
@property(nonatomic) unsigned int m_fullXmlLength; // @dynamic m_fullXmlLength;
@property(nonatomic) long long m_i64VoipKey; // @dynamic m_i64VoipKey;
@property(nonatomic) int m_iVoipRoomid; // @dynamic m_iVoipRoomid;
@property(retain, nonatomic) NSString *m_infoUrl; // @dynamic m_infoUrl;
@property(retain, nonatomic) CContact *m_inviterContact;
@property(retain, nonatomic) NSString *m_inviterName; // @dynamic m_inviterName;
@property(nonatomic) _Bool m_isCanUpload; // @dynamic m_isCanUpload;
@property(readonly, nonatomic) _Bool m_isContentOriginal; // @dynamic m_isContentOriginal;
@property(nonatomic) _Bool m_isDirectSend; // @dynamic m_isDirectSend;
@property(nonatomic) _Bool m_isForNewYear; // @dynamic m_isForNewYear;
@property(nonatomic) _Bool m_isHideHead; // @dynamic m_isHideHead;
@property(nonatomic) _Bool m_isReaderForbidForward; // @dynamic m_isReaderForbidForward;
@property(nonatomic) double m_latitude; // @dynamic m_latitude;
@property(retain, nonatomic) NSString *m_lensId;
@property(retain, nonatomic) NSString *m_locationLabel; // @dynamic m_locationLabel;
@property(nonatomic) double m_longitude; // @dynamic m_longitude;
@property(nonatomic) double m_mapScale; // @dynamic m_mapScale;
@property(retain, nonatomic) NSString *m_mapType; // @dynamic m_mapType;
@property(retain, nonatomic) NSString *m_mediaId; // @dynamic m_mediaId;
@property(nonatomic) unsigned int m_mmreaderSubType; // @dynamic m_mmreaderSubType;
@property(nonatomic) long long m_msgInnerType; // @dynamic m_msgInnerType;
@property(nonatomic) int m_nDownloadLimit; // @dynamic m_nDownloadLimit;
@property(retain, nonatomic) NSString *m_newXmlType; // @dynamic m_newXmlType;
@property(retain, nonatomic) NSString *m_nsActivityId; // @dynamic m_nsActivityId;
@property(retain, nonatomic) NSString *m_nsAesKey; // @dynamic m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsAppAction; // @dynamic m_nsAppAction;
@property(retain, nonatomic) NSString *m_nsAppAttachID; // @dynamic m_nsAppAttachID;
@property(retain, nonatomic) NSString *m_nsAppContent; // @dynamic m_nsAppContent;
@property(retain, nonatomic) NSString *m_nsAppExtInfo; // @dynamic m_nsAppExtInfo;
@property(retain, nonatomic) NSString *m_nsAppFileExt; // @dynamic m_nsAppFileExt;
@property(retain, nonatomic) NSString *m_nsAppID; // @dynamic m_nsAppID;
@property(retain, nonatomic) NSString *m_nsAppMediaDataUrl; // @dynamic m_nsAppMediaDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowBandDataUrl; // @dynamic m_nsAppMediaLowBandDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowUrl; // @dynamic m_nsAppMediaLowUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaTagName; // @dynamic m_nsAppMediaTagName;
@property(retain, nonatomic) NSString *m_nsAppMediaUrl; // @dynamic m_nsAppMediaUrl;
@property(retain, nonatomic) NSString *m_nsAppMessageAction; // @dynamic m_nsAppMessageAction;
@property(retain, nonatomic) NSString *m_nsAppMessageExt; // @dynamic m_nsAppMessageExt;
@property(retain, nonatomic) NSString *m_nsAppName; // @dynamic m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAssetId; // @dynamic m_nsAssetId;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @dynamic m_nsAttachFileKey;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @dynamic m_nsAutoDownloadControl;
@property(retain, nonatomic) NSString *m_nsDesc; // @dynamic m_nsDesc;
@property(retain, nonatomic) NSString *m_nsDesignerId; // @dynamic m_nsDesignerId;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @dynamic m_nsEmoticonBelongToProductID;
@property(retain, nonatomic) NSString *m_nsEmoticonMD5; // @dynamic m_nsEmoticonMD5;
@property(retain, nonatomic) NSString *m_nsExternMd5; // @dynamic m_nsExternMd5;
@property(retain, nonatomic) NSString *m_nsExternUrl; // @dynamic m_nsExternUrl;
@property(retain, nonatomic) NSString *m_nsFileParam; // @dynamic m_nsFileParam;
@property(retain, nonatomic) NSString *m_nsImgHDUrl; // @dynamic m_nsImgHDUrl;
@property(retain, nonatomic) NSString *m_nsImgMidUrl; // @dynamic m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsImgSrc; // @dynamic m_nsImgSrc;
@property(retain, nonatomic) NSString *m_nsInviteReason; // @dynamic m_nsInviteReason;
@property(retain, nonatomic) NSString *m_nsInviteTickets; // @dynamic m_nsInviteTickets;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @dynamic m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsMsgAttachUrl; // @dynamic m_nsMsgAttachUrl;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @dynamic m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @dynamic m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @dynamic m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbMd5; // @dynamic m_nsMsgThumbMd5;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @dynamic m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsNewMd5; // @dynamic m_nsNewMd5;
@property(retain, nonatomic) NSString *m_nsNoPreDownloadRange; // @dynamic m_nsNoPreDownloadRange;
@property(retain, nonatomic) NSString *m_nsRemindAttachId; // @dynamic m_nsRemindAttachId;
@property(retain, nonatomic) NSString *m_nsRevokeContent; // @dynamic m_nsRevokeContent;
@property(retain, nonatomic) AppMsgShareItem *m_nsShareItem; // @dynamic m_nsShareItem;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @dynamic m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @dynamic m_nsShareOriginUrl;
@property(retain, nonatomic) NSString *m_nsSolitaireXml; // @dynamic m_nsSolitaireXml;
@property(copy, nonatomic) NSString *m_nsSongAlbumUrl;
@property(copy, nonatomic) NSString *m_nsSongLyric;
@property(retain, nonatomic) NSString *m_nsSourceDisplayname; // @dynamic m_nsSourceDisplayname;
@property(retain, nonatomic) NSString *m_nsSourceUsername; // @dynamic m_nsSourceUsername;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @dynamic m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @dynamic m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @dynamic m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @dynamic m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @dynamic m_nsStreamVideoTitle;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @dynamic m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @dynamic m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @dynamic m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsTemplateId; // @dynamic m_nsTemplateId;
@property(retain, nonatomic) NSString *m_nsThumbImgUrl; // @dynamic m_nsThumbImgUrl;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @dynamic m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsTitle; // @dynamic m_nsTitle;
@property(retain, nonatomic) AppInnerJumpItem *m_oAppInnerJumpItem; // @dynamic m_oAppInnerJumpItem;
@property(retain, nonatomic) AppProductItem *m_oAppProductItem; // @dynamic m_oAppProductItem;
@property(retain, nonatomic) AppTVItem *m_oAppTVItem; // @dynamic m_oAppTVItem;
@property(retain, nonatomic) WCCanvasPageItem *m_oCanvasPageItem; // @dynamic m_oCanvasPageItem;
@property(retain, nonatomic) CardTicketItem *m_oCardTicketItem; // @dynamic m_oCardTicketItem;
@property(retain, nonatomic) EmoticonAppMsgItem *m_oEmoticonAppMsgItem;
@property(retain, nonatomic) EmoticonSharedItem *m_oEmoticonSharedItem; // @dynamic m_oEmoticonSharedItem;
@property(retain, nonatomic) EmotionDesignerSharedItem *m_oEmotionDesignerSharedItem; // @dynamic m_oEmotionDesignerSharedItem;
@property(retain, nonatomic) EmotionPageSharedItem *m_oEmotionPageSharedItem; // @dynamic m_oEmotionPageSharedItem;
@property(retain, nonatomic) GiftCardItem *m_oGiftCardItem;
@property(retain, nonatomic) HardWareItem *m_oHardWareItem; // @dynamic m_oHardWareItem;
@property(retain, nonatomic) ImageInfo *m_oImageInfo; // @dynamic m_oImageInfo;
@property(retain, nonatomic) MallProductItem *m_oMallProductItem; // @dynamic m_oMallProductItem;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @dynamic m_oMsgExpItem;
@property(retain, nonatomic) PushMailWrap *m_oPushMailWrap; // @dynamic m_oPushMailWrap;
@property(retain, nonatomic) FavoritesItem *m_oRecordItem; // @dynamic m_oRecordItem;
@property(retain, nonatomic) MMTemplateMsg3rdAppShowItem *m_oTemplateMsg3rdAppShowItem;
@property(retain, nonatomic) VideoUploadStatInfo *m_oVideoUploadStatInfo; // @dynamic m_oVideoUploadStatInfo;
@property(retain, nonatomic) WAAppMsgItem *m_oWAAppItem; // @dynamic m_oWAAppItem;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; // @dynamic m_oWCPayInfoItem;
@property(retain, nonatomic) iWatchAppMsgItem *m_oiWatchMsgItem; // @dynamic m_oiWatchMsgItem;
@property(retain, nonatomic) OpenSDKAppBrandItem *m_openSDKAppBrandItem; // @dynamic m_openSDKAppBrandItem;
@property(retain, nonatomic) WCPayExtensionInfo *m_payExtensionInfo; // @dynamic m_payExtensionInfo;
@property(retain, nonatomic) NSString *m_poiId; // @dynamic m_poiId;
@property(retain, nonatomic) NSString *m_poiName; // @dynamic m_poiName;
@property(retain, nonatomic) NSString *m_qrCode; // @dynamic m_qrCode;
@property(nonatomic) unsigned int m_realInnerType;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @dynamic m_refMessageWrap;
@property(retain, nonatomic) ScanCodeHistoryItem *m_scanHistoryItem; // @dynamic m_scanHistoryItem;
@property(retain, nonatomic) AppMMScheduleItem *m_scheduleItem; // @dynamic m_scheduleItem;
@property(retain, nonatomic) NSString *m_sessionShowContent; // @dynamic m_sessionShowContent;
@property(retain, nonatomic) NSString *m_showContent; // @dynamic m_showContent;
@property(nonatomic) unsigned int m_subscrMsgScopeType; // @dynamic m_subscrMsgScopeType;
@property(retain, nonatomic) WCPayThirdInfo *m_thirdC2CInfo; // @dynamic m_thirdC2CInfo;
@property(retain, nonatomic) NSString *m_tpUrlString; // @dynamic m_tpUrlString;
@property(nonatomic) unsigned int m_uiApiSDKVersion; // @dynamic m_uiApiSDKVersion;
@property(nonatomic) unsigned int m_uiAppContentAttributeBitSetFlag; // @dynamic m_uiAppContentAttributeBitSetFlag;
@property(nonatomic) unsigned int m_uiAppDataSize; // @dynamic m_uiAppDataSize;
@property(nonatomic) unsigned int m_uiAppExtShowType; // @dynamic m_uiAppExtShowType;
@property(nonatomic) unsigned int m_uiAppMsgInnerType; // @dynamic m_uiAppMsgInnerType;
@property(nonatomic) unsigned int m_uiAppVersion; // @dynamic m_uiAppVersion;
@property(nonatomic) unsigned int m_uiCameraType; // @dynamic m_uiCameraType;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @dynamic m_uiContinueUploadCount;
@property(nonatomic) unsigned int m_uiDirectShare; // @dynamic m_uiDirectShare;
@property(nonatomic) unsigned int m_uiDownloadPercent; // @dynamic m_uiDownloadPercent;
@property(nonatomic) unsigned int m_uiEmoticonHeight; // @dynamic m_uiEmoticonHeight;
@property(nonatomic) unsigned int m_uiEmoticonType; // @dynamic m_uiEmoticonType;
@property(nonatomic) unsigned int m_uiEmoticonWidth; // @dynamic m_uiEmoticonWidth;
@property(nonatomic) unsigned int m_uiEncryVer; // @dynamic m_uiEncryVer;
@property(nonatomic) unsigned int m_uiGameContent; // @dynamic m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType; // @dynamic m_uiGameType;
@property(nonatomic) unsigned int m_uiHDImgSize; // @dynamic m_uiHDImgSize;
@property(nonatomic) unsigned int m_uiHevcNormalImgSize; // @dynamic m_uiHevcNormalImgSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @dynamic m_uiMsgThumbHeight;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @dynamic m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @dynamic m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiNormalImgSize; // @dynamic m_uiNormalImgSize;
@property(nonatomic) unsigned int m_uiOriginFormat; // @dynamic m_uiOriginFormat;
@property(nonatomic) unsigned int m_uiOriginMsgSvrId; // @dynamic m_uiOriginMsgSvrId;
@property(nonatomic) unsigned int m_uiPreDownloadNetType; // @dynamic m_uiPreDownloadNetType;
@property(nonatomic) unsigned int m_uiPreDownloadPercent; // @dynamic m_uiPreDownloadPercent;
@property(nonatomic) unsigned int m_uiRemindAttachTotalLen; // @dynamic m_uiRemindAttachTotalLen;
@property(nonatomic) unsigned int m_uiRemindFormat; // @dynamic m_uiRemindFormat;
@property(nonatomic) unsigned int m_uiRemindId; // @dynamic m_uiRemindId;
@property(nonatomic) unsigned int m_uiRemindTime; // @dynamic m_uiRemindTime;
@property(nonatomic) unsigned int m_uiScene; // @dynamic m_uiScene;
@property(nonatomic) unsigned int m_uiShowType; // @dynamic m_uiShowType;
@property(nonatomic) unsigned int m_uiSoundType; // @dynamic m_uiSoundType;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @dynamic m_uiStreamVideoTime;
@property(nonatomic) unsigned int m_uiTemplateType;
@property(nonatomic) unsigned int m_uiUploadStatus; // @dynamic m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiVideoFormat; // @dynamic m_uiVideoFormat;
@property(nonatomic) unsigned int m_uiVideoLen; // @dynamic m_uiVideoLen;
@property(nonatomic) unsigned int m_uiVideoOffset; // @dynamic m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoSource; // @dynamic m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoTime; // @dynamic m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVoiceCancelFlag; // @dynamic m_uiVoiceCancelFlag;
@property(nonatomic) unsigned int m_uiVoiceEndFlag; // @dynamic m_uiVoiceEndFlag;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @dynamic m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @dynamic m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @dynamic m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @dynamic m_uiVoipInviteType;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @dynamic m_uiVoipRecvTime;
@property(nonatomic) unsigned int m_uiVoipStatus; // @dynamic m_uiVoipStatus;
@property(nonatomic) unsigned int m_uiWeAppState; // @dynamic m_uiWeAppState;
@property(nonatomic) unsigned int m_uiWeAppVersion; // @dynamic m_uiWeAppVersion;
@property(retain, nonatomic) NSString *m_url; // @dynamic m_url;
@property(retain, nonatomic) WSVideoModel *m_videoFlowInfo; // @dynamic m_videoFlowInfo;
@property(nonatomic) unsigned int m_wordingType; // @dynamic m_wordingType;
@property(retain, nonatomic) NSString *referMessageSenderDisplayName; // @dynamic referMessageSenderDisplayName;
@property(retain, nonatomic) NSString *referMessageSenderUsrname; // @dynamic referMessageSenderUsrname;
@property(retain, nonatomic) CMessageWrap *referingMessageWrap; // @dynamic referingMessageWrap;
@property(nonatomic) _Bool roomToolsFlag; // @dynamic roomToolsFlag;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSData *wxamData;

@end

