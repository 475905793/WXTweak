//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "EditImageInitialViewDelegate-Protocol.h"
#import "EditVideoLogicItemDelegate-Protocol.h"
#import "MMAssetPickerBrowserViewDelegate-Protocol.h"
#import "MMAssetSelectedCollectionViewDelegate-Protocol.h"
#import "MultiImageScrollViewDelegate-Protocol.h"
#import "SightLocalVideoProcessingViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCEditImageViewControllerDelegate-Protocol.h"
#import "WCEditVideoViewControllerDelegate-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, EditImageCropGridView, EditImageIntialView, EditVideoLogicItem, MMAsset, MMAssetInfo, MMAssetPickerSendButton, MMAssetSelectCheckButton, MMAssetSelectedCollectionView, MMUIButton, MMUIView, MultiImageScrollView, NSMutableArray, NSMutableDictionary, NSString, NSURL, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCFinderReportPostStateModel;
@protocol MMImagePickerControlCenter, MMImagePreviewBrowserControllerDataSource, MMImagePreviewBrowserControllerDelegate;

@interface WCFinderAlbumCropViewController : WCDragToCloseViewController <EditImageInitialViewDelegate, WCEditImageViewControllerDelegate, EditVideoLogicItemDelegate, WCEditVideoViewControllerDelegate, MMAssetPickerBrowserViewDelegate, MMAssetSelectedCollectionViewDelegate, SightLocalVideoProcessingViewControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, MultiImageScrollViewDelegate, WCActionSheetDelegate>
{
    MultiImageScrollView *_pagingScrollView;
    UIView *oTitleBackGroundView;
    UIView *_bottomBar;
    UIButton *_editButton;
    MMAssetPickerSendButton *m_sendButton;
    MMAssetSelectCheckButton *m_selectCheckButton;
    NSMutableDictionary *m_browserViewCache;
    UILabel *m_tipInfoLabel;
    UIButton *m_cropVideoButton;
    _Bool m_hasClickSendButton;
    _Bool _isChangePageBySelected;
    _Bool _isOriginSelected;
    _Bool _scrollViewDidScrollEnable;
    _Bool _firstToCome;
    _Bool _enableVideoCheckButtonSelectedExceedTimeLimit;
    _Bool _enableVideoCheckButtonSelectedBelowTimeLimit;
    _Bool _manualTriggerScrollViewDidScroll;
    _Bool _enableCollectDataForRestore;
    _Bool _belongToSamePanGesture;
    _Bool _isSmallScreen;
    _Bool _hasDirectToEditVideo;
    _Bool _hasEnterEditVideo;
    unsigned int _startPageIndex;
    id <MMImagePickerControlCenter> controlCenter;
    id <MMImagePreviewBrowserControllerDelegate> m_delegate;
    EditImageIntialView *_editImageInitialView;
    EditVideoLogicItem *editVideoLogicItem;
    id <MMImagePreviewBrowserControllerDataSource> _m_dataSource;
    MMAsset *__editAsset;
    NSMutableArray *_hybridFileArray;
    NSMutableArray *_GPSInfoArray;
    MMAssetSelectedCollectionView *_m_selectedCollectionView;
    NSURL *_playerURL;
    NSMutableArray *_videoPathForPostVC;
    NSMutableArray *_cropHybridImageVideoArray;
    AVPlayer *_player;
    UIView *_headerBackgroundView;
    UILabel *_videoTimeLimitView;
    UILabel *_durationBlurView;
    UIImageView *_mPreviewImageView;
    UIScrollView *_previewBackgroundScrollView;
    MMAsset *_previewAsset;
    MMUIView *_playerView;
    UIImageView *_thumbnailImageView;
    AVAsset *_playerAsset;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    NSMutableArray *_selectedAssetInfos;
    MMAssetInfo *_previewAssetInfo;
    EditImageCropGridView *_cropGridView;
    NSMutableArray *_videoPathTmpSave;
    MMUIButton *_cropFrameUpButton;
    MMUIButton *_cropFrameDownButton;
    double _forbidSetScrollViewContentFromSystem;
    UIView *_headBlurView;
    UIView *_bottomBlurView;
    UIButton *_backButton;
    NSMutableArray *_rawHybridFileArray;
    NSMutableArray *_assetEditAttributeArray;
    double _isSmallScreenDistance;
    WCFinderReportPostStateModel *_reportModel;
    struct CGPoint _sliderContentOffset;
    CDStruct_e83c9415 _videoTimeRange;
}

@property(retain, nonatomic) WCFinderReportPostStateModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool hasEnterEditVideo; // @synthesize hasEnterEditVideo=_hasEnterEditVideo;
@property(nonatomic) _Bool hasDirectToEditVideo; // @synthesize hasDirectToEditVideo=_hasDirectToEditVideo;
@property(nonatomic) double isSmallScreenDistance; // @synthesize isSmallScreenDistance=_isSmallScreenDistance;
@property(nonatomic) _Bool isSmallScreen; // @synthesize isSmallScreen=_isSmallScreen;
@property(nonatomic) _Bool belongToSamePanGesture; // @synthesize belongToSamePanGesture=_belongToSamePanGesture;
@property(retain, nonatomic) NSMutableArray *assetEditAttributeArray; // @synthesize assetEditAttributeArray=_assetEditAttributeArray;
@property(retain, nonatomic) NSMutableArray *rawHybridFileArray; // @synthesize rawHybridFileArray=_rawHybridFileArray;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) UIView *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) _Bool enableCollectDataForRestore; // @synthesize enableCollectDataForRestore=_enableCollectDataForRestore;
@property(nonatomic) _Bool manualTriggerScrollViewDidScroll; // @synthesize manualTriggerScrollViewDidScroll=_manualTriggerScrollViewDidScroll;
@property(nonatomic) _Bool enableVideoCheckButtonSelectedBelowTimeLimit; // @synthesize enableVideoCheckButtonSelectedBelowTimeLimit=_enableVideoCheckButtonSelectedBelowTimeLimit;
@property(nonatomic) _Bool enableVideoCheckButtonSelectedExceedTimeLimit; // @synthesize enableVideoCheckButtonSelectedExceedTimeLimit=_enableVideoCheckButtonSelectedExceedTimeLimit;
@property(nonatomic) double forbidSetScrollViewContentFromSystem; // @synthesize forbidSetScrollViewContentFromSystem=_forbidSetScrollViewContentFromSystem;
@property(nonatomic) _Bool firstToCome; // @synthesize firstToCome=_firstToCome;
@property(retain, nonatomic) MMUIButton *cropFrameDownButton; // @synthesize cropFrameDownButton=_cropFrameDownButton;
@property(retain, nonatomic) MMUIButton *cropFrameUpButton; // @synthesize cropFrameUpButton=_cropFrameUpButton;
@property(nonatomic) _Bool scrollViewDidScrollEnable; // @synthesize scrollViewDidScrollEnable=_scrollViewDidScrollEnable;
@property(retain, nonatomic) NSMutableArray *videoPathTmpSave; // @synthesize videoPathTmpSave=_videoPathTmpSave;
@property(retain, nonatomic) EditImageCropGridView *cropGridView; // @synthesize cropGridView=_cropGridView;
@property(retain, nonatomic) MMAssetInfo *previewAssetInfo; // @synthesize previewAssetInfo=_previewAssetInfo;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVAsset *playerAsset; // @synthesize playerAsset=_playerAsset;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MMUIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMAsset *previewAsset; // @synthesize previewAsset=_previewAsset;
@property(retain, nonatomic) UIScrollView *previewBackgroundScrollView; // @synthesize previewBackgroundScrollView=_previewBackgroundScrollView;
@property(retain, nonatomic) UIImageView *mPreviewImageView; // @synthesize mPreviewImageView=_mPreviewImageView;
@property(retain, nonatomic) UILabel *durationBlurView; // @synthesize durationBlurView=_durationBlurView;
@property(retain, nonatomic) UILabel *videoTimeLimitView; // @synthesize videoTimeLimitView=_videoTimeLimitView;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(nonatomic) _Bool isOriginSelected; // @synthesize isOriginSelected=_isOriginSelected;
@property(nonatomic) _Bool isChangePageBySelected; // @synthesize isChangePageBySelected=_isChangePageBySelected;
@property(nonatomic) struct CGPoint sliderContentOffset; // @synthesize sliderContentOffset=_sliderContentOffset;
@property(nonatomic) CDStruct_e83c9415 videoTimeRange; // @synthesize videoTimeRange=_videoTimeRange;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSMutableArray *cropHybridImageVideoArray; // @synthesize cropHybridImageVideoArray=_cropHybridImageVideoArray;
@property(retain, nonatomic) NSMutableArray *videoPathForPostVC; // @synthesize videoPathForPostVC=_videoPathForPostVC;
@property(retain, nonatomic) NSURL *playerURL; // @synthesize playerURL=_playerURL;
@property(retain, nonatomic) MMAssetSelectedCollectionView *m_selectedCollectionView; // @synthesize m_selectedCollectionView=_m_selectedCollectionView;
@property(retain, nonatomic) NSMutableArray *GPSInfoArray; // @synthesize GPSInfoArray=_GPSInfoArray;
@property(retain, nonatomic) NSMutableArray *hybridFileArray; // @synthesize hybridFileArray=_hybridFileArray;
@property(nonatomic) unsigned int startPageIndex; // @synthesize startPageIndex=_startPageIndex;
@property(copy, nonatomic) MMAsset *_editAsset; // @synthesize _editAsset=__editAsset;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDataSource> m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(retain, nonatomic) EditVideoLogicItem *editVideoLogicItem; // @synthesize editVideoLogicItem;
@property(retain, nonatomic) EditImageIntialView *_editImageInitialView; // @synthesize _editImageInitialView;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void).cxx_destruct;
- (void)fileArrayExchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (id)dictionaryWithGPSInfoString:(id)arg1;
- (id)getGPSInfoWith:(id)arg1;
- (void)fileArrayAddObject:(id)arg1 ExifInfo:(id)arg2;
- (void)fileArrayRemoveObjectAtIndex:(unsigned long long)arg1;
- (id)getCurrentScrollViewParamModel;
- (struct CGRect)getCurrentCropRect;
- (struct CGRect)getPreviewImageViewIntialFrameWithVisualableHeight:(double)arg1;
- (void)updateImageReportModel:(id)arg1;
- (void)setCurrentEditImageAttr:(id)arg1;
- (id)getCurrentEditImageAttr;
- (id)getCurrentOriginalAsset;
- (unsigned long long)getCurrentShowAssetIndexWithTargetAssetInfo:(id)arg1 previewInfos:(id)arg2;
- (void)updateHybridFileWithObject:(id)arg1;
- (void)updateVideoPath:(id)arg1 andThumbnail:(id)arg2;
- (void)updateReportMode:(_Bool)arg1 originalDuration:(double)arg2;
- (void)updateReportModelWithEditInfo:(id)arg1;
- (void)updateFinderEditVideoViewControllerDidCancel:(id)arg1 editingVideo:(id)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (void)updateVideoTimeLimitViewWithVideoPath:(id)arg1;
- (void)updatePlayerAssetWithURL:(id)arg1 andUpdateHybridFile:(_Bool)arg2;
- (void)updateFinderEditVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)scrollViewDidScrollWithoutCollectData;
- (void)scrollViewDidScrollManual;
- (id)timeStringBySeconds:(double)arg1;
- (void)setScrollViewContentOffset:(struct CGPoint)arg1;
- (id)customImageSize:(id)arg1 scaleToSize:(struct CGSize)arg2;
- (id)getDataItemWithImageInfo:(id)arg1;
- (id)convertImageToImagePathWithImage:(id)arg1;
- (id)resetCropHybridImageVideoArrayOrder;
- (id)convertImageArrayToImagePathArrayWithArray:(id)arg1;
- (void)pushHybridAssetToPostVC;
- (void)continueToPushPostVCWithVideoPath:(id)arg1;
- (void)cropImageWithImageArray:(id)arg1 withJSApiEnable:(_Bool)arg2;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)saveEditAssetToPhotoLibrary;
- (void)pushCropAssetToPostVC;
- (void)doubleTapPreviewScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)resetPreviewInitFrame;
- (void)showCropGridView;
- (void)updateCropGridViewFrame;
- (void)updateHeaderPreviewWithEditedImage:(id)arg1;
- (void)solvePanGestureConflictBetweenPlayerViewAndScrollView;
- (void)collectDataForRestoreHistoryOperation;
- (void)constraintScrollRange;
- (void)keepAssetViewCenteredOnZooming;
- (void)showVideoTimeLimitView:(_Bool)arg1 hiddenImmediately:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)getAVAssetOutputSize;
- (id)viewForZoomingInScrollView:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)sightLocalVideoProcessingViewController:(id)arg1 didFinishEditingWithSightDraft:(id)arg2;
- (void)updateCropButtonHiddenState;
- (void)onAssetSelectedCollectionViewMoveAssetInfo:(id)arg1 oldIndex:(unsigned long long)arg2;
- (void)restorePreviewVideoAssetFrame;
- (void)resetPlayerViewAndSetScrollViewFrame:(_Bool)arg1;
- (void)updatePlayerViewShow;
- (void)setPreviewScrollViewFrame;
- (void)resetPreviewScrollViewFrame;
- (void)restorePreviewImageAssetFrame;
- (void)resetPreviewImageAndSetScrollViewFrame;
- (double)getScrollViewInitialZoomScale;
- (void)updatePreviewImageShowWithImage:(id)arg1;
- (double)getVisualableHeight;
- (void)setPreviewBlurView:(double)arg1 changeVisiable:(_Bool)arg2;
- (void)pinchVideoAction:(id)arg1;
- (void)panVideoAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)itemDidFinishPlaying:(id)arg1;
- (void)adjustPreviewVideoFrame;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (void)onAssetSelectedCollectionViewClickAtIndex:(unsigned long long)arg1;
- (void)onAssetBrowserViewPlayingStateChanged:(id)arg1 isPlaying:(_Bool)arg2;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (_Bool)currentAssetIsVideo;
- (void)onChangePage;
- (void)multiImageScrollViewWillBeginDragging;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)changeToPageWithAssetInfo:(id)arg1;
- (void)updateBottomBarWithAssetInfo:(id)arg1 stateInfo:(id)arg2;
- (void)updateSelectedButtonWithAssetInfo:(id)arg1;
- (void)updateSelectCheckButtonWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)updateEditButtonEnableWithAssetInfo:(id)arg1;
- (void)setBottomAndTopBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addAssetToHybridArrayWith:(id)arg1;
- (void)OnSelectedButtonDone;
- (void)cancelSelected;
- (void)OnSend:(id)arg1;
- (void)sendSelectedImage;
- (void)prepareSend;
- (void)OnCancel:(id)arg1;
- (void)OnCrop:(id)arg1;
- (unsigned long long)imagePickerSceneToEditImageEnterScene;
- (void)onEditImage:(id)arg1;
- (_Bool)hidesStatusBar;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)videoIsMoreThanTimeLimit;
- (_Bool)shouldDirectToVideoTimeCrop;
- (void)viewDidLoad;
- (void)initPlayerView;
- (long long)getPreviewAssetType;
- (void)confirmScrollViewLayoutParamWithRecognizer:(id)arg1;
- (void)extendScrollViewSlidingRangeOperationWithZoomFactor:(double)arg1;
- (void)extendScrollViewSlidingRange;
- (void)updateVideoShowSize;
- (void)panCropFrameButton:(id)arg1;
- (void)initVideoTimeLimitView;
- (void)initCropFrameButton;
- (void)addNotificationObserver;
- (double)getFirstAssetSizeRatio;
- (void)initHeaderView;
- (void)initView;
- (void)OnClickDoneBarButton;
- (void)OnClickBackBarButton:(id)arg1;
- (void)initBackgroundView;
- (void)initDoneBarbutton;
- (void)initBackBarButton;
- (void)initSelectCheckButton;
- (void)judgeIsSmallScreen;
- (void)initBottomBar;
- (_Bool)useBlackStatusbar;
- (id)init;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)onEditImage:(int)arg1 withEditEntrance:(unsigned int)arg2;
- (void)safeSyncConvertItemToArray:(id)arg1;
- (void)getCropVideoURLAccordingToFirstImageWithAssetInfoArray:(id)arg1 andVideoURLArray:(id)arg2;
- (void)startEncodeAndCropVideoAsset;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (id)currentViewController;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)onEditVideoWithThumbImage:(id)arg1 withEditEntrance:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

