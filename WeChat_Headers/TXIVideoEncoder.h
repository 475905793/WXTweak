//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

@protocol TXINotifyDelegate, TXIVideoEncoderDelegate;

@interface TXIVideoEncoder : TXCModule
{
    id <TXIVideoEncoderDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    long long _realFPS;
    long long _encodeFrameCount;
    long long _encodeGop;
    long long _bitrate;
    long long _frameRef;
    long long _encodeFps;
    long long _rPSEncodeMode;
}

@property(nonatomic) long long rPSEncodeMode; // @synthesize rPSEncodeMode=_rPSEncodeMode;
@property(nonatomic) long long encodeFps; // @synthesize encodeFps=_encodeFps;
@property(nonatomic) long long frameRef; // @synthesize frameRef=_frameRef;
@property(nonatomic, getter=realBitrate) long long bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) long long encodeGop; // @synthesize encodeGop=_encodeGop;
@property(readonly, nonatomic) long long encodeFrameCount; // @synthesize encodeFrameCount=_encodeFrameCount;
@property(readonly, nonatomic) long long realFPS; // @synthesize realFPS=_realFPS;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property __weak id <TXIVideoEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (long long)stop;
- (void)enableNearestRPS:(long long)arg1;
- (void)restartIDR;
- (long long)startWith:(struct TXSVideoEncoderParam *)arg1;
- (void)sendNotifyEvent:(int)arg1;
- (id)init;

@end

