//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCEditVideoLayoutViewDelegate-Protocol.h"

@class AVAsset, EditImageAttr, EditVideoAttr, MMAsset, NSString, UIImage, WCEditVideoLayoutView;
@protocol WCEditVideoViewControllerDelegate;

@interface WCEditVideoViewController : MMUIViewController <WCEditVideoLayoutViewDelegate>
{
    EditVideoAttr *_videoAttr;
    EditImageAttr *_originImageAttr;
    CDStruct_e83c9415 _editedTimeRange;
    CDStruct_e83c9415 _originalTimeRange;
    _Bool _isBlurHorizontalVideo;
    MMAsset *_asset;
    AVAsset *_avAsset;
    id <WCEditVideoViewControllerDelegate> _delegate;
    unsigned long long _entranceType;
    unsigned long long _editImageUIStyle;
    WCEditVideoLayoutView *_editVideoLayoutView;
    UIImage *_thumbImage;
    NSString *_videoPath;
    CDStruct_1b6d18a9 _videoDuration;
}

@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) _Bool isBlurHorizontalVideo; // @synthesize isBlurHorizontalVideo=_isBlurHorizontalVideo;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCEditVideoLayoutView *editVideoLayoutView; // @synthesize editVideoLayoutView=_editVideoLayoutView;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <WCEditVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)debugTap;
- (CDStruct_e83c9415)getEditedTimeRange;
- (void)updateInnerTimeRange:(CDStruct_e83c9415)arg1 play:(_Bool)arg2;
- (void)returnToTimelineOrAlbum;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (id)getAssetId;
- (id)getAssetUrl;
- (id)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (id)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (void)onClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (void)onOriginSoundChange:(_Bool)arg1;
- (void)onChooseVideoBGMDone:(id)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)onResigned:(id)arg1;
- (void)updateCancelStatus;
- (void)cancelLoopPlay;
- (void)loopPlay;
- (void)loadDurationComplete:(CDUnknownBlockType)arg1;
- (void)showEditVideoViewOn:(id)arg1;
- (void)resetEditVideoAttr;
- (id)getEditVideoAttr;
- (void)updateVideoAttrWithURL:(id)arg1;
- (void)onEditVideoAtPath:(id)arg1 andThumbImage:(id)arg2;
- (void)onEditVideo:(id)arg1;
- (void)onEditVideoWithAsset:(id)arg1 videoPath:(id)arg2 thumbImage:(id)arg3;
- (void)dealloc;
- (_Bool)hidesStatusBar;
- (void)viewDidLoad;
- (id)initWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

