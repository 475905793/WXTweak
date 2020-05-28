//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerView.h"

#import "IVOIPWindowExt-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"
#import "WCPlayerResourceLoaderDelegate-Protocol.h"
#import "WCTPPlayerDelegate-Protocol.h"

@class NSRecursiveLock, NSString, TPVideoFrameBuffer, UIView, WCPlayerResourceLoader, WCTPPlayer;

@interface WCTPPlayerView : WCPlayerView <WCTPPlayerDelegate, WCPlayerResourceLoaderDelegate, WCAudioSessionExt, IVOIPWindowExt>
{
    float _seekWaitingRequestLen;
    WCTPPlayer *_player;
    NSRecursiveLock *_lock;
    WCPlayerResourceLoader *_resourceloader;
    TPVideoFrameBuffer *_currentVideoFrameBuffer;
    UIView *_displayView;
}

@property(nonatomic) float seekWaitingRequestLen; // @synthesize seekWaitingRequestLen=_seekWaitingRequestLen;
@property(retain, nonatomic) UIView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) TPVideoFrameBuffer *currentVideoFrameBuffer; // @synthesize currentVideoFrameBuffer=_currentVideoFrameBuffer;
@property(retain, nonatomic) WCPlayerResourceLoader *resourceloader; // @synthesize resourceloader=_resourceloader;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) WCTPPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)onChangeVideoSource;
- (void)onVideoDownloadFail:(int)arg1;
- (void)onRecieveAllVideoData;
- (void)onRecievePreLoadData;
- (void)onRecieveSeekLoadingRequest;
- (void)onResponseDataToResourceLoader;
- (void)applicationWillResignActive:(id)arg1;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)onPlayerGetAudioDecoderType:(long long)arg1;
- (void)onPlayerGetVideoDecoderType:(long long)arg1;
- (void)onPlayerAudioFrameOut:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onPlayerErrorWithType:(long long)arg1 errorCode:(long long)arg2;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerBufferingEnd;
- (void)onPlayerBufferingStart;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerStateReady;
- (void)onPlayerSeekComplete;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)requestNextBufferSec;
- (void)checkStreamPlayerState;
- (CDUnknownBlockType)getPlayCallBackBlock;
- (void)setAudioSessionCategroyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateVideoPlayArgs;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)onBufferingToPlay;
- (void)onVideoBufferEnd;
- (void)startBuffering;
- (void)setPlayerAllowsExternalPlayback:(_Bool)arg1;
- (void)stopVideoDowload;
- (void)fetchAllVideoData;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (void)destoryResourceLoader;
- (void)realPlayVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)clearLeakPlayer;
- (void)clearPlayer;
- (void)initPlayer;
- (void)stopPlayer;
- (void)startPlayer;
- (void)setPlayerContentMode:(long long)arg1;
- (id)generateResourceloader;
- (void)initData;
- (void)dealloc;
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 ControlView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
