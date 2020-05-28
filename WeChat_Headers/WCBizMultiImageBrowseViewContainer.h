//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "CAAnimationDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, NSArray, NSString, UIImage, UIImageView, WCActionSheet, WCBizImageBrowseItem;
@protocol WCBizMultiImageBrowseViewContainerDelegate;

@interface WCBizMultiImageBrowseViewContainer : MMUIScrollView <CAAnimationDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    WCBizImageBrowseItem *m_oImageBrowseItem;
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    UIImageView *m_oBackGroundImageView;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    _Bool m_isImageReady;
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    UIImage *m_processBackGroundImage;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCActionSheet *m_actionSheet;
    id <WCBizMultiImageBrowseViewContainerDelegate> m_delegate;
}

@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <WCBizMultiImageBrowseViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
@property(retain, nonatomic) WCBizImageBrowseItem *m_oImageBrowseItem; // @synthesize m_oImageBrowseItem;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationRotateDidStop;
- (void)onDeviceRotate;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (void)tryDownloadImage:(_Bool)arg1;
- (void)setImageWithoutAnimation:(id)arg1;
- (void)animationShowWithImageBrowseData:(id)arg1 ProgressBackGroundImageView:(id)arg2;
- (void)animationShowStep2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (void)showProcessView;
- (void)initScrollViewHelper;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)startLoadingBlocked;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
- (void)dealloc;
- (void)stopAllAnimation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

