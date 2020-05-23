//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "AutoplayController-Protocol.h"
#import "BaseMsgContentDelgate-Protocol.h"
#import "BaseMsgContentInBackgroundThreadDelgate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "ITrackPresentExt-Protocol.h"
#import "ITrackRoomMgrExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IWXTalkPresentExt-Protocol.h"
#import "IWXTalkieExt-Protocol.h"
#import "ImageControllerDelegate-Protocol.h"
#import "ImplicitAnimationControllerDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MMInputToolViewCustomizationDelegate-Protocol.h"
#import "MMNewMultiSelectContactsViewControllerDelegate-Protocol.h"
#import "MMPickLocationViewControllerDelegate-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "MsgDelegate-Protocol.h"
#import "MultiSelectContollerDelegate-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"
#import "MyFavoritesListViewControllerDelegate-Protocol.h"
#import "PlayControllerDelegate-Protocol.h"
#import "RecordControllerDelegate-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "ShakeControllerDelegate-Protocol.h"
#import "ShareFriendOnChatDelegate-Protocol.h"
#import "ShareMessageConfirmLogicHelperDelegate-Protocol.h"
#import "TypingControllerDelgate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UrlControllerDelegate-Protocol.h"
#import "ViewLocationDelegate-Protocol.h"
#import "VoiceAutoTranslateHelperDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCardPackageViewControllerDelegate-Protocol.h"
#import "WCFileBrowseDelegate-Protocol.h"
#import "WCScheduleLogicControllerDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class AutoplayController, BaseMsgContentViewController, CBaseContact, CContact, CContactVerifyLogic, ForwardMessageLogicController, GameController, ImageController, ImplicitAnimationController, MMPickLocationViewController, MMUIViewController, MultiSelectController, MyFavoritesListViewController, NSArray, NSMutableDictionary, NSMutableSet, NSString, PlayingController, RecordController, ShakeController, ShareDataToOpenSDKController, ShareFriendOnChatLogicController, ShareMessageConfirmLogicHelper, TypingController, UINavigationController, UrlController, VoiceAutoTranslateHelper, WAAppIdToUsernameTransfer, WCScheduleLogicController;

@interface BaseMsgContentLogicController : MMObject <MMNewMultiSelectContactsViewControllerDelegate, ForwardMessageLogicDelegate, UIDocumentPickerDelegate, WCScheduleLogicControllerDelegate, VoiceAutoTranslateHelperDelegate, WCFileBrowseDelegate, BaseMsgContentDelgate, BaseMsgContentInBackgroundThreadDelgate, WCActionSheetDelegate, ImageControllerDelegate, contactInfoDelegate, UINavigationControllerDelegate, MessageObserverDelegate, TypingControllerDelgate, MsgDelegate, IMsgExt, ILinkEventExt, contactVerifyLogicDelegate, UrlControllerDelegate, IContactMgrExt, IMMNewSessionMgrExt, RecordControllerDelegate, PlayControllerDelegate, AutoplayController, ShakeControllerDelegate, ShareFriendOnChatDelegate, MFMailComposeViewControllerDelegate, MMPickLocationViewControllerDelegate, ImplicitAnimationControllerDelegate, IVOIPUILogicMgrExt, MMInputToolViewCustomizationDelegate, IWXTalkPresentExt, IWXTalkieExt, ITrackPresentExt, ITrackRoomMgrExt, MultiSelectContollerDelegate, ViewLocationDelegate, MultiTalkMgrExt, MyFavoritesListViewControllerDelegate, IMsgRevokeExt, FavForwardLogicDelegate, WCCardPackageViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate, SessionSelectControllerDelegate>
{
    BaseMsgContentViewController *m_viewController;
    CBaseContact *m_contact;
    ImageController *m_imageController;
    UrlController *m_urlController;
    RecordController *m_recordController;
    PlayingController *m_playingController;
    AutoplayController *m_autoplayController;
    VoiceAutoTranslateHelper *m_autoTranslateController;
    TypingController *m_typingController;
    GameController *m_GameController;
    ShakeController *m_shakeController;
    ShareFriendOnChatLogicController *m_shareCardController;
    MMPickLocationViewController *m_pickLocationController;
    ImplicitAnimationController *m_implicitAnimationController;
    CContactVerifyLogic *m_contactVerifyLogic;
    MultiSelectController *m_multiSelectController;
    MyFavoritesListViewController *m_myFavListController;
    MMUIViewController *m_cardPkgViewController;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    unsigned int m_uiDownLeftCount;
    unsigned int m_uiSearchedResultNodeLocalID;
    unsigned long long m_uiDownLastCreateTime;
    unsigned int m_uiDownLastSequence;
    unsigned int m_uiLastCreateTime;
    unsigned int m_uiLastSequence;
    unsigned int m_uiLeftCount;
    unsigned int m_uiLeftUnreadCount;
    _Bool m_bInContacts;
    _Bool m_bAddUsr;
    UINavigationController *m_navigationController;
    long long m_pushTime;
    unsigned int m_uiSubviewShowStatus;
    int m_eViewDisshowStatus;
    _Bool m_bIsEditing;
    NSString *m_redirectToEmoticonPid;
    CDUnknownBlockType multiMsgCompleteHandler;
    NSMutableDictionary *m_dicExtraInfo;
    CContact *m_selectContact;
    NSArray *m_searchKeywordList;
    ForwardMessageLogicController *m_forwardLogic;
    ShareMessageConfirmLogicHelper *m_shareMessageHelper;
    _Bool m_bIsInContentView;
    int m_uiFromScene;
    _Bool m_bHasUnreadMsg;
    WAAppIdToUsernameTransfer *_appIdTransfer;
    WCScheduleLogicController *m_scheduleLogic;
    _Bool m_hasRecevieMsgAndScrollToBottom;
    NSMutableSet *m_sendAppmsgMsgLocalIDSet;
    _Bool _isStayInPage;
    _Bool _hasOpenedWebViewUseFastLoad;
    _Bool _hasInvokeFastLoadPVBiz;
    NSMutableSet *_setFastLoadTemplateType;
    _Bool m_bHighlightTargetCell;
    _Bool isSharePreview;
    _Bool _redEnvelopesClickBlocking;
    int m_searchScene;
}

@property _Bool redEnvelopesClickBlocking; // @synthesize redEnvelopesClickBlocking=_redEnvelopesClickBlocking;
@property(nonatomic) _Bool isSharePreview; // @synthesize isSharePreview;
@property(nonatomic) _Bool m_bHighlightTargetCell; // @synthesize m_bHighlightTargetCell;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicExtraInfo; // @synthesize m_dicExtraInfo;
@property(retain, nonatomic) NSString *m_redirectToEmoticonPid; // @synthesize m_redirectToEmoticonPid;
@property(nonatomic) long long m_pushTime; // @synthesize m_pushTime;
@property(retain, nonatomic) MMPickLocationViewController *m_pickLocationController; // @synthesize m_pickLocationController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=m_navigationController;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)onTapLuckyBagImplicitView;
- (struct CGRect)getImplicitAnimationBoundsForAnimationType:(long long)arg1;
- (id)getImplicitAnimationParentView;
- (id)getImplicitAnimationViewController;
- (void)OnFavForwardCancel;
- (void)OnFavForwardDone;
- (id)getFavForawrdViewController;
- (void)modMsgStatusWithoutNotify:(id)arg1;
- (void)UnRegister;
- (void)Register;
- (void)onTableViewDidEndDisplayingCell:(id)arg1;
- (void)onScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onAddMsgAndScrollToBottomAnimated:(id)arg1;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onAddMsgAndNoScroll:(id)arg1;
- (void)onScrollViewDidScrollToTop:(id)arg1;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onWillPushFromNavigationController;
- (void)onWillPopFromNavigationController;
- (void)onWillEnterRoom;
- (void)onPopFromNavigationController;
- (void)onExitRoom;
- (id)getBackgroundView;
- (void)dealloc;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (id)getExtraInfo;
- (void)onMultiTalkBannerChange:(id)arg1 status:(unsigned int)arg2;
- (void)OnOpenTrackRoom:(id)arg1;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)ViewDidDisappear;
- (void)ViewWillDisappear;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)CameraControllerDidTakeSight:(id)arg1 editVideoAttr:(id)arg2;
- (id)chatUserNameForSightStatistics;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onFinishedShareMyFriend:(_Bool)arg1;
- (id)getShareMyFriendParentViewController;
- (void)onAddToContacts:(id)arg1;
- (void)sendAddContactRequestTo:(id)arg1 chatRoom:(id)arg2;
- (void)sendAddContactRequestTo:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)updateTypingTitle:(id)arg1;
- (_Bool)isChatroom;
- (void)processInsertedGifData:(id)arg1;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (void)processImageControllerDidCancel:(unsigned long long)arg1;
- (void)processInsertedAsset:(id)arg1;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)DidEnterBackground:(id)arg1;
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)CanRemoteRecord;
- (id)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned int)CheckVoiceBtnState;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)SetPeakPower:(float)arg1;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)onRecordModMsg:(id)arg1;
- (void)onRecordAddMsg:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onForwardMessageOK;
- (id)getCurrentViewController;
- (void)onMultiOprationComplete;
- (void)setMultiSelectModeOnComplete:(CDUnknownBlockType)arg1;
- (void)onMultiMsgSelected:(id)arg1 Username:(id)arg2;
- (void)onMultiMsgDelete:(id)arg1;
- (void)onMultiSelectCancel;
- (void)downloadMultiMsg:(id)arg1 saveToAlbum:(_Bool)arg2;
- (void)sendMultiMsgToBrandContact:(id)arg1 To:(id)arg2;
- (void)sendMultiMsgByMail:(id)arg1;
- (void)sendMultiMsgToFriend:(id)arg1;
- (void)addMultiMsgToMyFav:(id)arg1;
- (void)toBeEditing:(_Bool)arg1;
- (id)GetRightBarBtn;
- (_Bool)hasDownMoreMsg;
- (_Bool)hasMoreMsg;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)canShowChatRoomInfo;
- (void)resetWithMessageWrap:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 highlightKeywords:(id)arg2;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (unsigned int)getSearchedMsgLocalID;
- (_Bool)isInWillDismissStatus;
- (_Bool)isInForwardMsgPreView;
- (void)clearSearchKeywordList;
- (id)getSearchKeywordList;
- (_Bool)shouldHightlightSearchedKeyWord;
- (_Bool)shouldSearchedMsgHightlight;
- (unsigned int)getFromScene;
- (_Bool)ShouldShowSearchedAnyMsg;
- (_Bool)ShouldShowSearchResultMessageArray;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (_Bool)ShouldShowSearchBar;
- (id)GetRightBarButtonTitle;
- (id)GetRightBarButtonImageName;
- (void)StopPlaying:(id)arg1;
- (void)StartPlaying:(id)arg1 FromTouch:(_Bool)arg2;
- (void)SetMsgPlayed:(id)arg1;
- (void)StartPlayMessage:(id)arg1;
- (_Bool)IsRecording;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)CancelRecording;
- (void)StopRecording;
- (void)StartRecording;
- (id)genMsgSource;
- (id)GetHeadImageUrl:(id)arg1;
- (id)GetContact;
- (void)onChangeReferMsgId:(long long)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (double)GetTitleLabelOffset;
- (id)GetTitleTailImageView;
- (id)getDefaultTitleTailSubViews;
- (void)onSaveDraft;
- (void)onBackFromNavigationController;
- (void)QuicklySaveDraft:(id)arg1 referMsgSvrId:(long long)arg2;
- (void)SaveContentAndState;
- (void)saveDraft:(id)arg1 referMsgSvrId:(long long)arg2;
- (void)ResendMessage:(id)arg1;
- (void)VoiceModeClicked;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (id)getSubTitle;
- (id)GetUsrTitleCPKey;
- (_Bool)isUsrTitleUnsafe;
- (id)GetUsrTitle;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)OpenEmoticonToolView:(id)arg1;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (_Bool)canReloadViewIfMemoryWarning;
- (_Bool)onLoadDownMoreMessage;
- (id)onLoadMoreMessage;
- (void)onVideoOperation;
- (void)selectVideo;
- (void)onSendCaptrueImage:(id)arg1;
- (void)onOpenCameraController;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onOpeniCloudFileBrowser;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowseSelect:(id)arg1;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onOpenFileBrowser;
- (void)onOpenMediaBrowser;
- (void)DelMsgWithMsgList:(id)arg1 DelAll:(_Bool)arg2;
- (id)GetDownMessageArray;
- (void)clearDownLeftCount;
- (void)clearLastCreateTime;
- (void)setLastCreateTime:(unsigned long long)arg1;
- (id)GetMessageArray;
- (id)GetSearchedResultContentMessageArray;
- (unsigned int)getMsgCountToLoad;
- (void)ViewLocation:(id)arg1;
- (void)onShareLocationMsgToOpenSDK:(id)arg1 ViewController:(id)arg2;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (id)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (void)onCardPackageViewCancelSelectCard;
- (id)getContactToForward;
- (void)exitTracking;
- (void)openTrackRoom:(id)arg1;
- (void)onOpenServiceApp:(id)arg1;
- (void)onGroupPayButtonClick;
- (void)onRedEnvelopesControlLogic;
- (void)onTransferMoneyControlLogic;
- (void)onOpenMyFavoritesListController;
- (void)onOpenMyCardPkgViewController;
- (void)SelectLocation:(_Bool)arg1;
- (void)AddLocationMessageWithLocation:(id)arg1;
- (void)AddAtUser:(id)arg1;
- (void)RecommenWego;
- (void)OpenNativeUrl:(id)arg1;
- (void)OpenUrl:(id)arg1;
- (id)getPreviewForLink:(id)arg1;
- (void)OnTagWeAppLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)ShareCard;
- (void)onMultiTalkButtonClick;
- (void)SendNotGameEmoticonMessage:(id)arg1 errorMsg:(id)arg2;
- (void)SendEmoticonMessage:(id)arg1;
- (void)SendEmojiArtMessage:(id)arg1;
- (void)SendTextMessage:(id)arg1 externInfo:(id)arg2;
- (void)SendTextMessageWithSolitaire:(id)arg1;
- (void)SendTextMessage:(id)arg1 replyingMessage:(id)arg2;
- (void)SendTextMessage:(id)arg1;
- (void)SendImageMessage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)SendImageMessageByMMAsset:(id)arg1;
- (void)setWillDismissStatus;
- (id)tagForCurrentPage;
- (_Bool)isChatStatusNotifyOpen;
- (void)SendMessageWrap:(id)arg1;
- (id)GetMessageFromImage:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)CanReportShowInfo;
- (_Bool)CanShowSight;
- (_Bool)CanShowBanner;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanRotateOrientation;
- (_Bool)CanWXTalk;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanAddApp;
- (_Bool)CanOpenCamera;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)HasCustomToolBar;
- (id)getMsgSendOpEntry;
- (void)contactAddContactOk:(id)arg1;
- (void)verifyContactByUsrName:(id)arg1;
- (void)OnVideoPlayEnd:(id)arg1 isForceStop:(_Bool)arg2;
- (void)onEndPlay:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)onForceEarpieceModeChanged;
- (_Bool)isShakeEnabled;
- (id)getMsgWithId:(unsigned int)arg1;
- (void)PlayNodeAtId:(unsigned int)arg1;
- (id)GetMessagesNodeArray;
- (_Bool)canAutoplayWhenMessageDownloaded;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)CreateAppSolitaireTextMsgWithSolitaire:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)backToWeApp:(id)arg1 pagePath:(id)arg2;
- (_Bool)isBackToWeApp:(id)arg1;
- (void)openWaApp:(id)arg1;
- (void)shareDataToOpenSDK:(id)arg1;
- (void)RevokeMsg:(id)arg1;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleCancelDatePickerView;
- (void)onScheduleMessage:(id)arg1;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(_Bool)arg2;
- (void)onClickMsg:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickVoiceTranslate:(id)arg1;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)SetReadWithMessageWrap:(id)arg1 isNotifyModMsg:(_Bool)arg2;
- (void)markChatRead;
- (void)clearAllUnread;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)performDeleteMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1 tmpDisplayView:(id)arg2;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)Reset;
- (id)init;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(int)arg3 fromScene:(int)arg4;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(int)arg3;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(int)arg3 searchKeywordList:(id)arg4 fromScene:(int)arg5;
- (id)getNavigationController;
- (id)getViewController;
- (id)getMsgContentViewController;
- (id)GetMessageArrayFrom:(unsigned int)arg1 createTime:(unsigned long long)arg2;
- (void)didShowFirstUnReadMessage;
- (id)GetFirstUnReadMessage;
- (unsigned int)GetFirstLocalID;
- (unsigned int)GetLastLocalID;
- (void)didPushTransitionFinish;
- (void)setViewControllerFullScreen;
- (void)initViewController;
- (void)initProperties;
- (void)initPropertiesWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2;
- (void)resetController;
- (void)initControllers;
@property(nonatomic) _Bool isPeekPreview;
- (void)OnMyselfCloseMode:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)DidAddMsg:(id)arg1;
- (_Bool)isNeedCached;
- (void)RestoreStatusAndRegisterFromCacheStatus;
- (void)ClearStatusAndUnRegisterForCacheStatus;
- (void)preDownloadPageDataForVisibleCells;
- (void)messageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)reportAllAppmsgExposureInfoForVisibleCells;
- (void)reportAppmsgExposureInfoForMessageWrap:(id)arg1;
- (void)recordAllAppmsgExposureInfoForVisibleCells;
- (void)recordAppmsgExposureInfoForMessageWrap:(id)arg1;
- (id)preDownloadUrlInfoListForMessageWrap:(id)arg1;
- (id)setTemplateTypeForAppMsgIfValid:(id)arg1;
- (_Bool)isAppmsgValidAfterCheckUrlDomain:(id)arg1 needCheckItemShowType:(_Bool)arg2;
- (_Bool)isAppmsgSupportExposure:(id)arg1;
- (_Bool)isForwardAppmsg:(id)arg1;
- (void)doResetAppMsgExposureParameter;
- (void)doPreCreateWebViewAndUpdateTemplateAndBatchReport:(id)arg1;
- (long long)currPageAppmsgReportScene;
- (long long)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)handleAppmsgWhenInPage;
- (void)handleAppmsgWhenDidExitPage;
- (void)handleAppmsgWhenWillExitPage;
- (void)handleAppmsgWhenEnterPage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

