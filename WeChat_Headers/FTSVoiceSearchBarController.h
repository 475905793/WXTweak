//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMNewVoiceSearchBar.h"

#import "ContactInfoViewControllerDelegate-Protocol.h"
#import "ContactPickerViewDelegate-Protocol.h"
#import "FTSAddressBookFriendCellDelegate-Protocol.h"
#import "FTSContactCellDelegate-Protocol.h"
#import "FTSFeatureDetailViewDelegate-Protocol.h"
#import "FTSResultViewDelegate-Protocol.h"
#import "FTSWebSearchBaseResultTableViewCellDelegate-Protocol.h"
#import "FTSWebSearchPardusWebHeaderViewDelegate-Protocol.h"
#import "FTSWebSearchResultSugCellDelegate-Protocol.h"
#import "FTSWebSearchResultWAWidgetCellDelegate-Protocol.h"
#import "FTSWebSearchViewDelegate-Protocol.h"
#import "IFTSContactMgrExt-Protocol.h"
#import "IFTSFavMgrExt-Protocol.h"
#import "IFTSMemorySearchMgrExt-Protocol.h"
#import "IFTSMessageMgrExt-Protocol.h"
#import "IFtsWebSearchExt-Protocol.h"
#import "IMiniGameSearchExt-Protocol.h"
#import "IWALocalSearchExt-Protocol.h"
#import "IWANetSearchExt-Protocol.h"
#import "IWAWidgetLocalSearchExt-Protocol.h"
#import "IWSSearchUtilExtension-Protocol.h"
#import "IWSViewControllerLifeCycleExt-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "SearchGuideViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayWalletLockVerifyLogicDelegate-Protocol.h"
#import "WCWebSearchViewControllerDelegate-Protocol.h"
#import "WebSearchLocalPageCellDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class AddressBookFriend, CContact, CContactVerifyLogic, ContactInfoViewController, FTSWebSearchController, FTSWebSearchPardusWebHeaderView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView, WCTimeLineFooterView, WCWebSearchViewControllerNewH5;

@interface FTSVoiceSearchBarController : MMNewVoiceSearchBar <WCPayWalletLockVerifyLogicDelegate, IFTSContactMgrExt, IFTSMemorySearchMgrExt, IFTSMessageMgrExt, IFTSFavMgrExt, IWALocalSearchExt, IMiniGameSearchExt, IWANetSearchExt, ContactInfoViewControllerDelegate, contactVerifyLogicDelegate, contactInfoDelegate, PBMessageObserverDelegate, MFMessageComposeViewControllerDelegate, ContactPickerViewDelegate, FTSWebSearchViewDelegate, IFtsWebSearchExt, WebSearchLocalPageCellDelegate, IWSSearchUtilExtension, FTSWebSearchBaseResultTableViewCellDelegate, FTSWebSearchResultSugCellDelegate, FTSWebSearchResultWAWidgetCellDelegate, IWSViewControllerLifeCycleExt, FTSWebSearchPardusWebHeaderViewDelegate, IWAWidgetLocalSearchExt, WCWebSearchViewControllerDelegate, MMWebViewDelegate, FTSFeatureDetailViewDelegate, SearchGuideViewDelegate, FTSResultViewDelegate, FTSContactCellDelegate, FTSAddressBookFriendCellDelegate, WCActionSheetDelegate, MMUIViewControllerDelegate>
{
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapSearchSectionType;
    AddressBookFriend *_curAddressBookFriend;
    ContactInfoViewController *_curAddressBookFriendView;
    CContact *_curContact;
    CContactVerifyLogic *_contactVerifyLogic;
    int _currentFeatureId;
    int _findType;
    int _searchScene;
    UIView *_emptyFooterView;
    WCTimeLineFooterView *_loadingFooterView;
    NSString *_newestSearchText;
    NSMutableDictionary *_dicDisplayInfo;
    NSString *_lastMonitorReportText;
    NSMutableSet *_markExposeSet;
    UIView *_weakFTSWebSearchViewCell;
    struct CGRect _currentKeyboardRect;
    _Bool _hasClickAnyResultDuringOneSearch;
    FTSWebSearchController *_webSearchController;
    UIView *_weakFTSWebSearchLocalPageCell;
    NSMutableArray *_arrHasLogSearchLocalPageShowQuery;
    WCWebSearchViewControllerNewH5 *_webSearchViewController;
    NSMutableDictionary *_reusableWidgetCell;
    unsigned long long _delayBusinessTypeForEu;
    _Bool _isAnimatingTopWebSearch;
    _Bool _hasDragDuringOneSearch;
    NSArray *_arrPardusDisplaySug;
    NSString *_lastKeywordForRelatedSugReport;
    FTSWebSearchPardusWebHeaderView *_pardusWebHeaderView;
}

@property(readonly, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onFTSSelectAddressBookFriend:(id)arg1;
- (void)onFTSChatWithContact:(id)arg1;
- (void)batchReportUnSelectedGroups:(id)arg1 exclude:(id)arg2;
- (_Bool)hasVoiceSearchResultForQuery:(id)arg1;
- (id)parseSeperatedKeyword:(id)arg1;
- (_Bool)isCreateChatRoomCellAtRow:(long long)arg1;
- (_Bool)shouldDisplayChatRoomEntry;
- (id)getViewController;
- (id)ftsResultGetWCSearchContainerView;
- (id)ftsResultGetWCSearcherPangesture;
- (void)onFTSDetailViewReturn:(_Bool)arg1;
- (void)onWSSearchViewClicked;
- (void)cancelSearchByTap;
- (void)onScrollToClosePopups;
- (void)startCommonSearch:(id)arg1;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)searchFavItems;
- (void)selectFavSearchItem:(id)arg1;
- (void)selectMsgTalkerSearchEntry;
- (void)searchMessage;
- (void)selectMsgItems:(id)arg1;
- (void)selectMsgItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)searchGameItems:(int)arg1;
- (void)selectWCGameItem:(id)arg1;
- (void)onFeatureDetailViewSelectItem:(id)arg1;
- (void)searchMoreFeatureItems;
- (void)searchMoreFollowedBrandContact;
- (void)searchMoreContact:(int)arg1;
- (void)tryRefreshSearchResult;
- (void)onClickSearchButton:(id)arg1;
- (void)handleTextDidChange:(id)arg1;
- (void)scrollToTop;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)cancelFTSSearch;
- (void)trySwitchSearchLoading;
- (void)doFTSSearch:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reportExposeForIndexPath:(id)arg1 cell:(id)arg2 tableView:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldForbidSelectAtIndexpath:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (unsigned int)getLogRowBeforeSectionType:(unsigned long long)arg1 queryText:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isFirstSectionExcludePardusResult:(long long)arg1;
- (_Bool)isSpectialSectionType:(unsigned int)arg1;
- (_Bool)isPardusSectionType:(unsigned int)arg1;
- (_Bool)isDisplayTalkerSearchEntry;
- (_Bool)isMsgTalkerSearchEntry:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)logForSectionTypes;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)resumeFooterViewHeight;
- (void)fixFooterViewForPadusAnimation:(double)arg1;
- (void)updateFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setLoadingStatus;
- (void)resetSearchSectionType;
- (_Bool)isTotalSearchDone;
- (void)updateSearchReport;
- (void)reloadSearchDataAnimated:(_Bool)arg1;
- (void)reloadSearchData;
- (void)resetSearchTableViewSize;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)handleSearchEnd;
- (void)clearAllResource;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)getDetailView;
- (void)handleRotateEvent;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (void)initFTSSearchBar;
- (id)getGeneralBackgroundColor;
- (void)finishStatModule:(unsigned long long)arg1 withResultCount:(unsigned int)arg2;
- (void)startStatModule:(unsigned long long)arg1;
- (id)addFTSResultCountLogParams:(id)arg1 clickTopHitType:(unsigned int)arg2;
- (id)addFTSResultCountLogParams:(id)arg1;
- (_Bool)searchWANetDone:(id)arg1;
- (_Bool)searchMiniGameDone:(id)arg1;
- (_Bool)searchWeAppDone:(id)arg1;
- (_Bool)searchMemoryDone:(id)arg1;
- (_Bool)searchFavDone:(id)arg1;
- (_Bool)searchMessageDone:(id)arg1;
- (void)tryDoMonitorReport:(id)arg1;
- (void)resetShowCellForType:(int)arg1;
- (void)markShowCellForType:(int)arg1 resultCount:(unsigned int)arg2;
- (void)markShowCellForType:(int)arg1;
- (_Bool)hasShownCellForType:(int)arg1;
- (_Bool)hasSoCalledWebSearchResultShown;
- (void)markDisplayForIndexPath:(id)arg1 cell:(id)arg2 tableView:(id)arg3;
- (unsigned int)convertLogClickTypeFromSectionType:(unsigned int)arg1 indexPath:(id)arg2;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (id)sectionType2String:(unsigned int)arg1;
- (void)openMobileRecharge;
- (void)openBalanceFeature;
- (void)openOfflinePayFeature;
- (void)openFacingRecvMoneyFeature;
- (void)openWXHongBao;
- (void)openWCPayView;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)onWANetSearchResultChanged;
- (void)onMiniGameSearchResultChanged;
- (void)onWASearchResultChanged;
- (void)onFTSHomePageFavResultChanged;
- (void)onFTSHomePageMessageResultChanged:(_Bool)arg1;
- (void)onFTSMemorySearchResultChanged:(_Bool)arg1;
- (void)onFTSTopHitFinishSearch;
- (void)onFTSTopHitBeginSearch;
- (void)onFTSContactSearchResultChanged:(_Bool)arg1;
- (void)doUnRegisterSearchModule;
- (void)doRegisterSearchModule;
- (void)openWeAppMainList;
- (void)openWeAppWithSchemeUrl:(id)arg1;
- (void)cancelWeAppRequestInfo;
- (void)openMiniGameForUsername:(id)arg1;
- (void)openWeAppWithUsrname:(id)arg1 withSceneNote:(id)arg2;
- (void)openWeAppSessionView;
- (void)weAppSearchResultKVReport:(id)arg1;
- (void)finishStatModule:(unsigned long long)arg1 withResultCount:(unsigned int)arg2;
- (void)startStatModule:(unsigned long long)arg1;
- (id)addFTSResultCountLogParams:(id)arg1 clickTopHitType:(unsigned int)arg2;
- (id)addFTSResultCountLogParams:(id)arg1;
- (_Bool)searchWANetDone:(id)arg1;
- (_Bool)searchMiniGameDone:(id)arg1;
- (_Bool)searchWeAppDone:(id)arg1;
- (_Bool)searchMemoryDone:(id)arg1;
- (_Bool)searchFavDone:(id)arg1;
- (_Bool)searchMessageDone:(id)arg1;
- (void)tryDoMonitorReport:(id)arg1;
- (void)resetShowCellForType:(int)arg1;
- (void)markShowCellForType:(int)arg1 resultCount:(unsigned int)arg2;
- (void)markShowCellForType:(int)arg1;
- (_Bool)hasShownCellForType:(int)arg1;
- (_Bool)hasSoCalledWebSearchResultShown;
- (void)markDisplayForIndexPath:(id)arg1 cell:(id)arg2 tableView:(id)arg3;
- (unsigned int)convertLogClickTypeFromSectionType:(unsigned int)arg1 indexPath:(id)arg2;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (id)sectionType2String:(unsigned int)arg1;
- (void)onSelectCancel;
- (void)onCreateChatRoom:(id)arg1;
- (void)selectFeatureItem:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)addContactFriendScene:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onlineSearchContact;
- (id)filterUserName:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (void)openContactPickerView;
- (void)openMessageContentViewForFeature:(int)arg1;
- (void)openBrandProfile:(id)arg1 params:(id)arg2;
- (void)openBrandSession:(id)arg1;
- (void)openHelperView;
- (void)openPrivateConfigView;
- (void)openWeSportFeature;
- (void)openChatMigrationVC;
- (void)openFavoriteView;
- (void)openEmoticonStoreView;
- (void)openMessageContentViewForFileHelper;
- (void)openContactInfoForFeature:(int)arg1;
- (void)openGameCenter:(id)arg1;
- (void)openCameraScan;
- (void)openAlbum;
- (void)openShake;
- (void)openLBS;
- (_Bool)isPluginOpen:(int)arg1;
- (void)jumpFeatureUrl:(id)arg1;
- (void)openContactInfo:(id)arg1 fromSearchContact:(_Bool)arg2;
- (void)openContactInfo:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openEnterpriseChatSessionListView:(id)arg1;
- (void)openEnterpriseBrandSessionListViewController:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openBrandSessionView;
- (void)selectAddressBookFriend:(id)arg1;
- (void)sendSMS:(id)arg1 arrMobile:(id)arg2;
- (void)operateAddressBookFriend:(id)arg1;
- (void)openMessageContentView:(id)arg1;
- (void)sendSMSInvite:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)addContactInternal;
- (void)verifyContact:(id)arg1;
- (void)addContact:(id)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (_Bool)hasPardusWebViewSug;
- (_Bool)hasReportedPardusCard;
- (_Bool)hasReportedSug;
- (id)pardusSearchRequestId;
- (id)pardusSearchId;
- (id)getPardusJumpUrl:(id)arg1;
- (id)getPardusTitle:(id)arg1;
- (id)getPardusDisplayName:(id)arg1;
- (id)getPardusWeAppId:(id)arg1;
- (id)getPardusDocId:(id)arg1;
- (id)getPardusItemFromResult:(id)arg1 pardusWebJson:(id)arg2;
- (unsigned int)convertReportTypeFromPardusResultType:(unsigned int)arg1;
- (void)checkAndSetPardusHeaderView;
- (void)setPardusTableHeaderViewAnimated:(_Bool)arg1;
- (id)makePardusHeaderView;
- (void)pardusWebView_didTerminate;
- (void)pardusWebView_actionClickNeedReport:(unsigned int)arg1 pos:(unsigned int)arg2 info:(id)arg3;
- (void)pardusWebView_startWebSearch:(id)arg1;
- (void)pardusWebView_renderFinish:(id)arg1;
- (void)pardusWebView_webViewReady:(id)arg1;
- (void)onWAWidgetSearchResultChanged:(_Bool)arg1;
- (void)webSearchVC:(id)arg1 willDisappear:(_Bool)arg2;
- (void)webSearchVC:(id)arg1 willAppear:(_Bool)arg2;
- (void)onClickFTSWAWidgetCell:(id)arg1;
- (void)onFTSWAWidgetCellHideKeyboard:(id)arg1;
- (void)onFTSWAWidgetCell:(id)arg1 reloadDataWithAppId:(id)arg2 serviceType:(long long)arg3;
- (void)onFTSWAWidgetCell:(id)arg1 shouldAnimateChangeHeight:(double)arg2;
- (void)onClickSugItemWith:(id)arg1 inView:(id)arg2 index:(long long)arg3;
- (void)handleWebSearchToBrand:(id)arg1;
- (void)handlePardusActionOpenVideoFlow:(id)arg1;
- (void)handlePardusActionOpenWeapp:(id)arg1 sceneNote:(id)arg2 weappPath:(id)arg3 weappVersion:(unsigned int)arg4;
- (void)handlePardusActionOpenUrl:(id)arg1 extInfo:(id)arg2;
- (void)onClickMusicArea:(id)arg1 type:(unsigned int)arg2 musicXml:(id)arg3 musicInfo:(id)arg4;
- (void)onClickCardArea:(id)arg1 type:(unsigned int)arg2;
- (void)onClickWebSearchMore;
- (void)onCloseSearchPreloadWebview;
- (void)onForbidCacheWCWebSearchView;
- (void)onWCWebSearchViewReturn:(id)arg1;
- (id)preOpenWebSearchView:(id)arg1 baseUrlParams:(id)arg2;
- (void)tryPreloadWCWebSearchWebview;
- (void)onClickSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2;
- (void)updateWebSearchCellVisualbility;
- (id)genLocalPageWordConcatStr;
- (void)tryLogFTSWebSearchLocalPageCellShow;
- (_Bool)hasLocalPageResult;
- (_Bool)canShowLocalPageResult;
- (id)localPageResult;
- (void)onPardusSearchResultFail:(id)arg1;
- (void)onPardusSearchResultReturn:(id)arg1;
- (void)onWebSearchViewHideKeyboard;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewWillPop;
- (void)onWebSearchViewReturn:(_Bool)arg1;
- (void)startWebSearch:(id)arg1 urlParams:(id)arg2;
- (void)openWebRecommend;
- (void)delayPardusSearchImp:(id)arg1;
- (void)delayPardusSearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)clearWidgetCellResource;
- (void)removeWebSearchView;
- (void)webSearchStartVerticalSearch:(unsigned long long)arg1;
- (void)webSearchStartCommonSearch:(id)arg1;
- (void)reportClickForPardusSug:(id)arg1 index:(long long)arg2;
- (void)reportClickForPardusResult:(id)arg1 type:(unsigned int)arg2 isMore:(_Bool)arg3;
- (void)preInitPardusWebView;
- (void)doDeallocWebSearch;
- (void)doInitWebSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

