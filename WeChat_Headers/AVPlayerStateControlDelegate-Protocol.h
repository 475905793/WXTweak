//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnDownloadTaskInfo;

@protocol AVPlayerStateControlDelegate <NSObject>
- (void)updateVideoTotalTime:(double)arg1;
- (void)videoDownloadErrorExpired:(_Bool)arg1;
- (void)showVideoLoadingView;
- (void)hideVideoLoadingView;
- (void)tryToPlayVideo;
- (void)startToPlayVideo;

@optional
- (void)onDownloadVideoReturn:(CdnDownloadTaskInfo *)arg1;
- (void)OnDownloadPercent:(double)arg1;
- (void)OnCurrentTimeUpdate:(double)arg1;
- (void)OnPlayToEnd;
- (void)OnPlayStatusFail;
@end

