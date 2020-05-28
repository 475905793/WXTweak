//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SightLocalViewSliderMaskViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AVAsset, AVAssetImageGenerator, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, SightLocalViewSliderMaskView, UICollectionView;
@protocol SightLocalVideoImageSliderDelegate;

@interface SightLocalVideoImageSlider : UIView <UIScrollViewDelegate, SightLocalViewSliderMaskViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct CGRect _normalModeFrame;
    _Bool _isSystemCrop;
    _Bool _isCropAllowEnlarge;
    _Bool _isLargeMode;
    _Bool _isLargeAnimationBegin;
    float _playRate;
    float _usrDefOutputDuration;
    float _minDuration;
    float _maxDuration;
    float _outputDuration;
    float _totalDuration;
    id <SightLocalVideoImageSliderDelegate> _delegate;
    AVAsset *_asset;
    UICollectionView *_thumbImagesCollectionView;
    double _widthOfImage;
    double _currentRateOfImage;
    double _numberOfImagesPerSecond;
    double _lastContentOffset;
    unsigned long long _currentScrollDirection;
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_thumbImageDictionary;
    NSMutableArray *_totalTimeList;
    NSMutableArray *_largeModeTimeListOnShow;
    SightLocalViewSliderMaskView *_maskView;
    double _lastStartTime;
    double _lastEndTime;
    NSIndexPath *_enlargeCellIndex;
    unsigned long long _scene;
    struct CGPoint _sliderContentOffset;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) NSIndexPath *enlargeCellIndex; // @synthesize enlargeCellIndex=_enlargeCellIndex;
@property(nonatomic) _Bool isLargeAnimationBegin; // @synthesize isLargeAnimationBegin=_isLargeAnimationBegin;
@property(nonatomic) _Bool isLargeMode; // @synthesize isLargeMode=_isLargeMode;
@property(nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(retain, nonatomic) SightLocalViewSliderMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSMutableArray *largeModeTimeListOnShow; // @synthesize largeModeTimeListOnShow=_largeModeTimeListOnShow;
@property(retain, nonatomic) NSMutableArray *totalTimeList; // @synthesize totalTimeList=_totalTimeList;
@property(retain, nonatomic) NSMutableDictionary *thumbImageDictionary; // @synthesize thumbImageDictionary=_thumbImageDictionary;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) unsigned long long currentScrollDirection; // @synthesize currentScrollDirection=_currentScrollDirection;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double numberOfImagesPerSecond; // @synthesize numberOfImagesPerSecond=_numberOfImagesPerSecond;
@property(nonatomic) float totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) float outputDuration; // @synthesize outputDuration=_outputDuration;
@property(nonatomic) double currentRateOfImage; // @synthesize currentRateOfImage=_currentRateOfImage;
@property(nonatomic) struct CGPoint sliderContentOffset; // @synthesize sliderContentOffset=_sliderContentOffset;
@property(nonatomic) _Bool isCropAllowEnlarge; // @synthesize isCropAllowEnlarge=_isCropAllowEnlarge;
@property(nonatomic) _Bool isSystemCrop; // @synthesize isSystemCrop=_isSystemCrop;
@property(nonatomic) float maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) float minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) float usrDefOutputDuration; // @synthesize usrDefOutputDuration=_usrDefOutputDuration;
@property(nonatomic) double widthOfImage; // @synthesize widthOfImage=_widthOfImage;
@property(retain, nonatomic) UICollectionView *thumbImagesCollectionView; // @synthesize thumbImagesCollectionView=_thumbImagesCollectionView;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) __weak id <SightLocalVideoImageSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)queryIsCropAllowEnlarge;
- (_Bool)queryIsSystemCrop;
- (void)shouldSwitchToLargeMode:(_Bool)arg1;
- (void)thumbImagesCollectionViewContentInsetNeedChange;
- (void)sightLocalViewSliderMaskView:(id)arg1 didStopMovingAtPosition:(double)arg2 isStartFlag:(_Bool)arg3;
- (void)sightLocalViewSliderMaskViewPlayFlagDidChange:(id)arg1;
- (double)positionOfTime:(double)arg1;
- (double)timeOfPosition:(double)arg1;
- (void)stopPlayFlag;
- (void)startPlayFlagAtTime:(double)arg1;
- (double)timeOfEndFlag;
- (double)timeOfStartFlag;
- (void)endOfMaskDidMoveToTime:(double)arg1;
- (void)playFlagOfMaskDidMoveToTime:(double)arg1;
- (void)startOfMaskDidMoveToTime:(double)arg1;
- (void)didStopScrolling;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnlargedCell:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)cancelAllImageGeneration;
- (void)loadMoreImagesFromIndexPath:(id)arg1 withSrollDirection:(unsigned long long)arg2;
- (void)loadMoreImages;
- (struct CGPoint)getSliderCollectionViewContentOffset;
- (void)setStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2;
- (void)loadSingleImageAtIndexPath:(id)arg1 needFakeResultImmediately:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadSingleImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (CDStruct_1b6d18a9)timeStampAtIndex:(long long)arg1;
- (id)visibleIndexPathAtTime:(CDStruct_1b6d18a9)arg1;
- (id)timeValueForThumbAtRowIndex:(long long)arg1;
- (struct CGRect)validFrameOfMaskView;
- (id)initWithFrame:(struct CGRect)arg1 withSystemCrop:(_Bool)arg2 withCropAllowEnlarge:(_Bool)arg3 scene:(unsigned long long)arg4 sliderContentOffset:(struct CGPoint)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

