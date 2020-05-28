//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXIAudioPlayDataDelegate-Protocol.h"

@class NSString, TXCRenderAndDec, UIView;
@protocol TRTCAudioFrameDelegate;

@interface TRTCUserInfo : NSObject <TXIAudioPlayDataDelegate>
{
    _Bool _mainVideoMuted;
    _Bool _smallVideoMuted;
    _Bool _subVideoMuted;
    _Bool _audioMuted;
    int _videoState;
    unsigned int _exitReason;
    int _streamType;
    unsigned long long _tinyId;
    NSString *_strTinyId;
    NSString *_userId;
    UIView *_mainView;
    UIView *_subStreamView;
    TXCRenderAndDec *_render;
    TXCRenderAndDec *_subRender;
    id <TRTCAudioFrameDelegate> _delegate;
}

@property(nonatomic) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic) _Bool subVideoMuted; // @synthesize subVideoMuted=_subVideoMuted;
@property(nonatomic) _Bool smallVideoMuted; // @synthesize smallVideoMuted=_smallVideoMuted;
@property(nonatomic) _Bool mainVideoMuted; // @synthesize mainVideoMuted=_mainVideoMuted;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) __weak id <TRTCAudioFrameDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TXCRenderAndDec *subRender; // @synthesize subRender=_subRender;
@property(retain, nonatomic) TXCRenderAndDec *render; // @synthesize render=_render;
@property(nonatomic) unsigned int exitReason; // @synthesize exitReason=_exitReason;
@property(nonatomic) int videoState; // @synthesize videoState=_videoState;
@property(nonatomic) __weak UIView *subStreamView; // @synthesize subStreamView=_subStreamView;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *strTinyId; // @synthesize strTinyId=_strTinyId;
@property(nonatomic) unsigned long long tinyId; // @synthesize tinyId=_tinyId;
- (void).cxx_destruct;
- (void)onAudioPlayData:(id)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (_Bool)muteSubVideo;
- (_Bool)hasSubVideoStream;
- (_Bool)muteMainVideo;
- (_Bool)hasSmallVideoStream;
- (_Bool)hasBigVideoStream;
- (_Bool)muteAudio;
- (_Bool)hasAudioStream;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

