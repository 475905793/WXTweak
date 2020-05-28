//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerView.h"

#import "WCAudioSessionExt-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, NSObject, NSRecursiveLock, NSString, WCPlayerLayerView;

@interface WCAVPlayerBaseView : WCPlayerView <WCAudioSessionExt>
{
    float _lastPlayBackRate;
    AVAsset *_asset;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    WCPlayerLayerView *_playerLayerView;
    AVPlayerItemVideoOutput *_snapshotOutput;
    NSObject *_playbackTimeObserver;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) float lastPlayBackRate; // @synthesize lastPlayBackRate=_lastPlayBackRate;
@property(retain, nonatomic) NSObject *playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput; // @synthesize snapshotOutput=_snapshotOutput;
@property(retain, nonatomic) WCPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)didTakeVideoSnapshot:(id)arg1;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)onSliderScrubbingDidStart;
- (void)onScrubbedToTime:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPlaybackLikelyToKeepUp;
- (CDUnknownBlockType)getPlayCallBackBlock;
- (void)addPlayerNotification;
- (void)updateVideoPlayArgs;
- (void)onVideoNewErrorLogEntry:(id)arg1;
- (void)onVideoNewAccessLogEntry:(id)arg1;
- (void)onVideoPlaybackStalled:(id)arg1;
- (void)onVideoPlayToEnd:(id)arg1;
- (void)onVideoBufferEnd:(double)arg1;
- (void)onBufferingToPlay;
- (void)onTimeControlStatus:(id)arg1;
- (void)pauseVideo;
- (void)avplayerPause;
- (void)avplayerPlay;
- (void)setPlayBackRate:(float)arg1;
- (void)playVideo;
- (void)realPlayVideo;
- (void)stopPlayer;
- (void)startPlayer;
- (void)setAudioSessionCategroyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (id)getAVPlayerItemVideoOutput;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (void)setPlayerContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)onStatusChange:(id)arg1;
- (void)createAVPlayerItem;
- (_Bool)isAutoloadDuration;
- (void)createAsset;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)checkStreamPlayerState;
- (void)requestNextBufferSec;
- (void)resetPlayerToLocalPlay;
- (void)startBuffering;
- (void)changeToDownloadFirstMode;
- (void)stopVideoDowload;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)destoryResourceLoader;
- (void)removeTimeObserver;
- (void)addPeriodicTimeObserver;
- (void)generateAVPlayerItem;
- (void)generateAVPlayer;
- (void)destroyAVPlayerItem;
- (void)destroyAVPlayer;
- (void)clearPlayer;
- (void)clearLeakPlayer;
- (void)initPlayer;
- (void)dealloc;
- (void)initData;
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 ControlView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
