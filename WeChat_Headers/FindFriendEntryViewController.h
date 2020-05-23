//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CSettingExt-Protocol.h"
#import "FriendAsistSessionExt-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"
#import "IMMFontMgrExt-Protocol.h"
#import "IOnlineClientMgrExt-Protocol.h"
#import "ISearchConfigDataExt-Protocol.h"
#import "ISettingExtChange-Protocol.h"
#import "IUpdateProfileMgrExt-Protocol.h"
#import "IWCJdBussinessMgrExt-Protocol.h"
#import "IWCLabsMgrExt-Protocol.h"
#import "IWCNearbyMgrExt-Protocol.h"
#import "IWSSearchUtilExtension-Protocol.h"
#import "IWebSearchRedPointMgrExt-Protocol.h"
#import "MMCleanCacheMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMNewTipsMgrExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "MainTableDelegate-Protocol.h"
#import "SettingDiscoverEntranceViewControllerExt-Protocol.h"
#import "ShakeMgrExt-Protocol.h"
#import "ShakeViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBeaconGuideModeExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCFinderFeedViewControllerDelegate-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCTimeLineViewControllerDelegate-Protocol.h"
#import "WCWebSearchViewControllerDelegate-Protocol.h"
#import "WSLocalWebViewControllerDelegate-Protocol.h"

@class GameIndexSettingControl, MMHeadImageView, MMMainTableView, MMTimer, NSIndexPath, NSString, UIImageView, UIView, WCDataItem, WCFinderFeedViewController, WCTimeLineViewController, WCWebSearchViewControllerNewH5;

@interface FindFriendEntryViewController : MMTabBarBaseViewController <MMCleanCacheMgrExt, MainTableDelegate, IWebSearchRedPointMgrExt, WSLocalWebViewControllerDelegate, WCWebSearchViewControllerDelegate, SettingDiscoverEntranceViewControllerExt, IUpdateProfileMgrExt, CSettingExt, MMWebViewDelegate, IWSSearchUtilExtension, IWCNearbyMgrExt, MMNewTipsMgrExt, WCFinderFeedViewControllerDelegate, WCFinderRedDotNotifyExt, WCFinderRedDotExt, ShakeViewDelegate, UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCTimeLineViewControllerDelegate, FriendAsistSessionExt, ISettingExtChange, ShakeMgrExt, MMConfigMgrExt, IOnlineClientMgrExt, WCActionSheetDelegate, IMMFontMgrExt, IWCJdBussinessMgrExt, IGameCenterExt, IGameCenterMsgNotifyExt, MMWebImageViewDelegate, WCBeaconGuideModeExt, ISearchConfigDataExt, IWCLabsMgrExt>
{
    _Bool m_hasInitData;
    MMMainTableView *m_tableView;
    struct stEntryRow *m_aryEntryRow;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapSectionType;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAlbum;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSocial;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeMotion;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSearch;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeOpen;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeWCO;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAppBrand;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeFinder;
    NSIndexPath *m_WCTimeLineIndexPath;
    WCDataItem *m_latestSeenDataItem;
    WCDataItem *m_latesetDataItem;
    NSIndexPath *m_lbsIndexPath;
    NSIndexPath *m_shakeIndexPath;
    NSIndexPath *m_gameIndexPath;
    _Bool m_needDoGameSync;
    WCTimeLineViewController *m_timelineViewController;
    MMTimer *m_timelineCacheTimer;
    MMHeadImageView *m_timelineHeadView;
    UIImageView *m_timelineRedDotView;
    _Bool m_inTimeline;
    int m_gameNotifyType;
    _Bool m_bNeedToDestroySelf;
    _Bool m_bBeingAppear;
    _Bool m_bCanUpdateTopStoryReddotExpose;
    NSString *m_gameCenterNoticeID;
    NSString *m_gameCenterAppIDForStat;
    unsigned int _startTime;
    GameIndexSettingControl *m_gameEntrySetting;
    NSString *m_ffBrowseReddotMsgIdDuringSelect;
    WCWebSearchViewControllerNewH5 *m_FFWebSearchViewController;
    MMTimer *m_FFWebSearchViewCacheTimer;
    NSString *m_hadRptRedSnsId;
    _Bool _isViewDidAppear;
    WCFinderFeedViewController *_finderFeedVC;
    UIView *_allEntriesClosedHintView;
    double _lastExitFinderVCTimestamp;
}

@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) double lastExitFinderVCTimestamp; // @synthesize lastExitFinderVCTimestamp=_lastExitFinderVCTimestamp;
@property(retain, nonatomic) UIView *allEntriesClosedHintView; // @synthesize allEntriesClosedHintView=_allEntriesClosedHintView;
@property(retain, nonatomic) WCFinderFeedViewController *finderFeedVC; // @synthesize finderFeedVC=_finderFeedVC;
@property(retain, nonatomic) NSIndexPath *m_lbsIndexPath; // @synthesize m_lbsIndexPath;
@property(retain, nonatomic) NSIndexPath *m_gameIndexPath; // @synthesize m_gameIndexPath;
@property(retain, nonatomic) NSIndexPath *m_shakeIndexPath; // @synthesize m_shakeIndexPath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)finderNewSystemReportRedDot:(unsigned long long)arg1;
- (void)finderReportRedDot:(unsigned long long)arg1;
- (void)onFinderNotifyFinderPostRedDotStatusChange;
- (void)onFinderNotifyFinderRedDotStatusChange;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onNearbyMgrExtRedNewStateChange:(_Bool)arg1;
- (void)onNearbyMgrExtRedDotStateChange:(_Bool)arg1;
- (void)rptEnterTimeLine:(id)arg1;
- (void)rptSnsRedDotDisplay:(id)arg1;
- (_Bool)tryPreloadWebRecommendPage;
- (id)getSharedWebRecommendViewController;
- (void)onCloseSearchPreloadWebview;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onSettingChanged:(int)arg1;
- (void)onProfileChange;
- (void)settingDiscoverEntranceViewControllerDidChangeSetting:(id)arg1;
- (void)onEnterSettingView;
- (void)checkAndShowAllEntriesClosedHintView;
- (void)setupAllEntriesClosedHintView;
- (void)closeWCWebSearchViewWithNeedPreload:(_Bool)arg1;
- (void)onCloseWCWebSearchViewTimeOut;
- (void)onForbidCacheWCWebSearchView;
- (void)onWCWebSearchViewReturn:(id)arg1;
- (void)onWebRecommendTabDataChange:(_Bool)arg1;
- (void)onForbidCacheWSLocalWebView;
- (void)onWebSearchRedPointChange:(id)arg1;
- (void)onLabAppSwitchChanged:(id)arg1;
- (void)onSearchConfigDataUpdated;
- (void)onSearchConfigDataFailToUpdate;
- (void)updateSearchInfo;
- (void)initSearchInfo;
- (id)getGameCenterHomeViewController:(int)arg1 EntranceRedDot:(id)arg2;
- (void)openGameCenter:(int)arg1;
- (void)openGameCenter;
- (void)preloadGameCenterWebViewControllerIfNeed;
- (void)onLoadImageOK:(id)arg1;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterEntryIconStatusChanged;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterMessageReceived;
- (void)onCacheMgrCleanCacheWarning;
- (void)initDeepLinkConfig;
- (id)webViewWithURL:(id)arg1;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onDidFetchedNoContentWithError:(unsigned long long)arg1;
- (void)onDidFetchedContent:(id)arg1;
- (void)onFontSizeChange;
- (void)onMarkTimelineListReadWithTid:(id)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onMMDynamicConfigUpdated;
- (void)onJdBussinessReloadTip;
- (void)onJdBussinessEntranceChanged;
- (void)onNewGameAdChanged;
- (void)onGameNewAppCountChanged;
- (void)onGameGiftInfoChanged;
- (void)onGameMessageUnReadCountChanged;
- (void)onGameEntryChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void)onShakeStatusChanged;
- (void)onSettingExtChanged:(int)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)onTimeLineViewReturn;
- (void)onMarkWCObjectAsRead:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onDatabaseReloaded;
- (void)onNotificationShowSettingChanged;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onLatestWCObjectChanged:(id)arg1;
- (void)updateFinderCellLineViewHeadImage:(id)arg1;
- (void)resetFinderCellLineViewHeadImage:(id)arg1;
- (void)updateWCTimeLineView:(id)arg1;
- (_Bool)shouldShowFinderEntry;
- (_Bool)shouldShowNearbyEntry;
- (_Bool)shouldShowWCOEntry;
- (_Bool)shouldShowAppBrandEntry;
- (_Bool)shouldShowGameEntry;
- (_Bool)shouldShowJDStoreEntry;
- (_Bool)shouldShowScanQRCodeEntry;
- (_Bool)shouldShowSearchEntry;
- (_Bool)shouldShowBrowseEntry;
- (_Bool)isShowReddotForWebRecommend;
- (id)preOpenWSLocalWebView;
- (int)getReportKeyWhenEnterWithVCType:(int)arg1;
- (int)getHitTypeWhenEnterWithVCType:(int)arg1;
- (void)openBrowseEntry;
- (id)preOpenWebSearchView;
- (void)openNearbyEntry;
- (void)openSearchEntry;
- (void)openWeAppDestopWithAnimate:(_Bool)arg1;
- (void)openWeAppDestopForScene:(unsigned long long)arg1;
- (void)openCameraScan:(int)arg1;
- (void)openLBS;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reportFFSearchEntranceExpose;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tryPreloadFFSearchWebview;
- (void)tryPreloadFFBrowseWebview;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkIfAnimationFail;
- (void)statViewOrClickJDCell:(unsigned int)arg1;
- (void)clearWebRecommendReddot;
- (void)clearWebRecommendNumReddot:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitle;
- (void)initTableView;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)willAppear;
- (void)updateTabBarBadge;
- (_Bool)shouldShowTabBarBadgeForWCUploadFail;
- (long long)getCurrentTotalCount;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleAppBrandEntry;
- (void)handleWCOEntry;
- (void)handleJDStoreCell:(id)arg1;
- (void)handleSelectedEntryCell:(unsigned long long)arg1;
- (void)reloadGameRow;
- (void)resetReddot:(struct stEntryRow *)arg1;
- (void)configNewTipsReddot:(struct stEntryRow *)arg1;
- (void)configIconReddot:(struct stEntryRow *)arg1 Title:(id)arg2 IconUrl:(id)arg3;
- (void)configTitleReddot:(struct stEntryRow *)arg1 Title:(id)arg2;
- (void)configBadgeReddot:(struct stEntryRow *)arg1 Badge:(id)arg2;
- (id)getRightImageViewWithUrl:(id)arg1;
- (_Bool)disposeNewTipsWithPathKey:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeEntryCell:(id)arg1 rowType:(unsigned long long)arg2;
- (void)getSearchBadgeViewWithRedPointInfo:(id)arg1 numRedPointInfo:(id)arg2 entryRow:(struct stEntryRow *)arg3;
- (id)updateGameCenterEntry;
- (void)updateJDStoreEntry;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doSelectCell:(long long)arg1;
- (void)onCloseAlbumTimeOut;
- (void)closeAlbum;
- (void)openAlbum;
- (void)openAlbumAnimated:(_Bool)arg1;
- (id)preOpenAlbumView;
- (void)openNormalShake;
- (void)OnShakeVCDealloc;
- (void)openShakeWithAnimate:(_Bool)arg1;
- (void)openShakeFromInnerWithAnimate:(_Bool)arg1;
- (void)goToShakeWithAnimate:(_Bool)arg1;
- (void)openFinder;
- (void)finderVCWillDisappear;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)tryInit;
- (_Bool)isSameFlatArray:(id)arg1 withOtherArray:(id)arg2;
- (id)flatAllRowData;
- (_Bool)checkAndReloadData;
- (void)reloadData;
- (void)pluginsChanged:(id)arg1;
- (void)resetSectionType;
- (void)resetRowType;
- (void)initRow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

