//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMScrollActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderCommentDatailViewControllerDelegate-Protocol.h"
#import "WCFinderCommentIdentityViewControllerDelegate-Protocol.h"
#import "WCFinderContentTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedCommentTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderMulitMediaTableViewCellDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderToolbarTableViewCellDelegate-Protocol.h"
#import "WCFinderVideoPlayerExt-Protocol.h"
#import "WCGeneralListMonitorExt-Protocol.h"

@class NSString, UITableView, WCFinderCommentDatailViewController, WCFinderCreateCoordinator, WCFinderFeedContentVM;

@interface WCFinderMentionDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt, WCFinderMulitMediaTableViewCellDelegate, WCFinderContentTableViewCellDelegate, WCFinderToolbarTableViewCellDelegate, WCFinderFeedCommentTableViewCellDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCGeneralListMonitorExt, WCFinderCommentDatailViewControllerDelegate, WCFinderCommentIdentityViewControllerDelegate, WCFinderVideoPlayerExt>
{
    _Bool _shouldShowCommentList;
    _Bool _hasShowTopComment;
    _Bool _isSilencePlay;
    _Bool _hasShowComment;
    _Bool _needsResumeTimelineVideo;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _scene;
    UITableView *_tableView;
    double _startExposureTime;
    WCFinderCommentDatailViewController *_commentVC;
    WCFinderCreateCoordinator *_createCoordinator;
    WCFinderCommentDatailViewController *_lastCommentVC;
    double _currentVideoPlayProgress;
}

@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(nonatomic) double currentVideoPlayProgress; // @synthesize currentVideoPlayProgress=_currentVideoPlayProgress;
@property(retain, nonatomic) WCFinderCommentDatailViewController *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) __weak WCFinderCommentDatailViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(nonatomic) _Bool hasShowComment; // @synthesize hasShowComment=_hasShowComment;
@property(nonatomic) double startExposureTime; // @synthesize startExposureTime=_startExposureTime;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(nonatomic) _Bool hasShowTopComment; // @synthesize hasShowTopComment=_hasShowTopComment;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool shouldShowCommentList; // @synthesize shouldShowCommentList=_shouldShowCommentList;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void).cxx_destruct;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (_Bool)enableFeedShare;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClickCommentUserName:(id)arg1;
- (void)finderCommentCell:(id)arg1 didClickCommentLikeWithcomment:(id)arg2 contentVM:(id)arg3;
- (void)onClickCommentAction:(id)arg1 contentVM:(id)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)profileViewDidClickFullTextWithTid:(id)arg1;
- (id)getItemArrayConfigWith:(_Bool)arg1;
- (void)showDetialCommentListVCOnlyList:(_Bool)arg1;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2;
- (void)onClickToolbarLikeAction:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)followUserName:(id)arg1 isFollowing:(_Bool)arg2;
- (void)onFeedFollowStatusChanged:(id)arg1 isFollow:(_Bool)arg2 contentVM:(id)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)onFeedCellDidClickHeaderView:(id)arg1 contentVM:(id)arg2;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFeedContentLikedDataChanged:(id)arg1;
- (void)onFeedContentHotCommentListChanged:(id)arg1 needAnimation:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specialParamsForFeedId:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reloadDataWrap;
- (id)getListView;
- (id)feedIdByIndex:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
@property(readonly, nonatomic) _Bool shouldReloadDataItem;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopVideoPlay;
- (void)startVideoPlay;
- (void)throttleStartPlayProcess;
- (void)willDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureTableView;
- (void)dealloc;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

