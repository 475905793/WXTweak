//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayerItemVideoOutput, UIImage, UIView, WCPlayerPlayArgs;
@protocol WCPlayerControlProtocol;

@protocol WCPlayerProtocol <NSObject>
- (void)configWithPlayerInfo:(WCPlayerPlayArgs *)arg1 ControlView:(UIView<WCPlayerControlProtocol> *)arg2;

@optional
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(WCPlayerPlayArgs *)arg2 ControlView:(UIView<WCPlayerControlProtocol> *)arg3;
- (void)fetchAllVideoData;
- (void)changeToDownloadFirstWithDownloadMode:(unsigned long long)arg1;
- (void)stopVideoDowload;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)setThumbImageHidden:(_Bool)arg1;
- (void)setThumbImage:(UIImage *)arg1;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)setPlayerMaxBufferLength:(unsigned int)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (AVPlayerItemVideoOutput *)getAVPlayerItemVideoOutput;
- (UIImage *)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(void (^)(UIImage *))arg1;
- (void)pauseVideo;
- (void)playVideo;
- (void)clearLeakPlayer;
- (void)clearPlayer;
- (void)stopPlayer;
- (void)startPlayer;
- (void)preload;
@end

