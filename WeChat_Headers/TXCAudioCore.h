//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TXCReverbParams;
@protocol OS_dispatch_queue, TXIAudioCoreEventDelegate, TXIAudioCorePlayDelegate, TXIAudioCoreRecordDelegate, TXIAudioSessionDelegate, TXIAudioTestDelegate;

@interface TXCAudioCore : NSObject
{
    float _innerSamplerate;
    unsigned int _innerChannels;
    _Bool _isInterruption;
    _Bool _isStartPlay;
    _Bool _isPauseRecord;
    NSString *_oldAudioCategroy;
    NSString *_oldAudioMode;
    NSString *_localID;
    unsigned int _frameLen;
    int _mixFrameLen;
    unsigned long long _lastRecordErrNotifyTs;
    double _tsWhenInterrupt;
    unsigned long long _timeWhenInterrupt;
    char *_emptyPcm;
    _Bool _sendEmptyPcm;
    NSObject<OS_dispatch_queue> *_sendEmptyQueue;
    struct TXCMutex _sendEmptyLock;
    NSMutableArray *_playDelegates;
    struct TXCMutex _playDelegatesMutex;
    int _workMode;
    double _timeForLogLimit;
    unsigned int _needPCMLen;
    struct TXCVolumeLevelS16 _playLevelCal;
    struct AudioStreamBasicDescription _effectStreamFormat;
    TXCReverbParams *_reverbParams;
    TXCReverbParams *_reverbParams_0;
    TXCReverbParams *_reverbParams_1;
    TXCReverbParams *_reverbParams_2;
    TXCReverbParams *_reverbParams_3;
    TXCReverbParams *_reverbParams_4;
    TXCReverbParams *_reverbParams_5;
    TXCReverbParams *_reverbParams_6;
    TXCReverbParams *_reverbParams_7;
    NSArray *_reverbParamsArray;
    float _silenceIntervalForStart;
    _Bool _needReStartAUGraph;
    struct TXCStatusModule _statusModule;
    int _headsetState;
    void *_captureRingBuf;
    void *_playRingBuf;
    struct _TXSAudioData _corePlayCallbackQueryBuffer;
    struct _TXSAudioData _corePlayCallbackMixBuffer;
    unsigned long long _recordDelegateCountAfterRoutechange;
    _Bool _isVOIPMode;
    _Bool _enableReverb;
    _Bool _isAudioPreview;
    _Bool _isCustomRecord;
    _Bool _isStartRecord;
    _Bool _isHeadset;
    _Bool _enableCorePlayVolumeLevelCal;
    unsigned short _conversionBufferLen;
    unsigned int _audioCorePlayCallbackSampleNum;
    int _ioNode;
    int _convertNode;
    int _processNode;
    int _encFormat;
    long long _audioMode;
    long long _reverbType;
    id <TXIAudioCoreRecordDelegate> _recordDelegate;
    id <TXIAudioTestDelegate> _audioTestDelegate;
    id <TXIAudioCoreEventDelegate> _eventDelegate;
    id <TXIAudioCorePlayDelegate> _audioCorePlayDelegate;
    struct OpaqueAUGraph *_auGraph;
    struct OpaqueAudioComponentInstance *_ioUnit;
    struct OpaqueAudioComponentInstance *_convertUnit;
    struct OpaqueAudioComponentInstance *_processUnit;
    id <TXIAudioSessionDelegate> _audioSessionDelegate;
    short *_conversionBuffer;
    NSObject<OS_dispatch_queue> *_unitQueue;
    long long _systemVolumeType;
}

+ (id)sharedInstance;
@property(nonatomic) long long systemVolumeType; // @synthesize systemVolumeType=_systemVolumeType;
@property _Bool enableCorePlayVolumeLevelCal; // @synthesize enableCorePlayVolumeLevelCal=_enableCorePlayVolumeLevelCal;
@property int encFormat; // @synthesize encFormat=_encFormat;
@property _Bool isHeadset; // @synthesize isHeadset=_isHeadset;
@property _Bool isStartRecord; // @synthesize isStartRecord=_isStartRecord;
@property _Bool isCustomRecord; // @synthesize isCustomRecord=_isCustomRecord;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *unitQueue; // @synthesize unitQueue=_unitQueue;
@property(nonatomic) unsigned short conversionBufferLen; // @synthesize conversionBufferLen=_conversionBufferLen;
@property(nonatomic) short *conversionBuffer; // @synthesize conversionBuffer=_conversionBuffer;
@property __weak id <TXIAudioSessionDelegate> audioSessionDelegate; // @synthesize audioSessionDelegate=_audioSessionDelegate;
@property(nonatomic) int processNode; // @synthesize processNode=_processNode;
@property(nonatomic) struct OpaqueAudioComponentInstance *processUnit; // @synthesize processUnit=_processUnit;
@property int workMode; // @synthesize workMode=_workMode;
@property(nonatomic) struct OpaqueAudioComponentInstance *convertUnit; // @synthesize convertUnit=_convertUnit;
@property(nonatomic) int convertNode; // @synthesize convertNode=_convertNode;
@property(nonatomic) int ioNode; // @synthesize ioNode=_ioNode;
@property(nonatomic) struct OpaqueAudioComponentInstance *ioUnit; // @synthesize ioUnit=_ioUnit;
@property(nonatomic) struct OpaqueAUGraph *auGraph; // @synthesize auGraph=_auGraph;
@property unsigned int audioCorePlayCallbackSampleNum; // @synthesize audioCorePlayCallbackSampleNum=_audioCorePlayCallbackSampleNum;
@property __weak id <TXIAudioCorePlayDelegate> audioCorePlayDelegate; // @synthesize audioCorePlayDelegate=_audioCorePlayDelegate;
@property(nonatomic) __weak id <TXIAudioCoreEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) __weak id <TXIAudioTestDelegate> audioTestDelegate; // @synthesize audioTestDelegate=_audioTestDelegate;
@property(nonatomic) __weak id <TXIAudioCoreRecordDelegate> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
@property(nonatomic) _Bool isAudioPreview; // @synthesize isAudioPreview=_isAudioPreview;
@property(nonatomic) long long reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) _Bool enableReverb; // @synthesize enableReverb=_enableReverb;
@property(nonatomic) long long audioMode; // @synthesize audioMode=_audioMode;
@property(readonly, nonatomic) _Bool isVOIPMode; // @synthesize isVOIPMode=_isVOIPMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyPlayPCMDataToSoftAEC:(char *)arg1 dataLen:(unsigned int)arg2;
- (void)notifyRecordPCMData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)clean;
- (_Bool)shouldEnableVOIPMode;
- (void)calPlayVolumeLevel:(char *)arg1 len:(unsigned int)arg2 sampleRate:(unsigned int)arg3 channels:(unsigned int)arg4;
- (void)sendEvent:(int)arg1 message:(id)arg2;
- (void)printAndSetCategoryInfo:(_Bool)arg1;
- (void)setAudioModeInternal:(long long)arg1;
@property(readonly) unsigned int corePlayVolumeLevel;
- (void)setRevrb:(id)arg1;
- (_Bool)isBluetooth;
- (_Bool)isSysHeadSet;
- (_Bool)_isHeadphone:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)mixAudioWithFixedQueryLen:(char *)arg1 length:(int)arg2;
- (void)mixAudio:(char *)arg1 length:(int)arg2;
- (unsigned int)queryPlayData:(char *)arg1 withMaxLen:(unsigned int)arg2;
- (void)notifyRecordErr:(long long)arg1 info:(id)arg2;
- (void)sendRecordDataInternal;
- (void)sendRecordData;
- (void)sendRecordData:(char *)arg1 withLen:(unsigned int)arg2 withTS:(double)arg3;
- (void)clearAudioDataList:(list_3e119c15 *)arg1;
- (long long)resetPlay;
- (long long)resumePlay;
- (long long)pausePlay;
- (long long)stopPlay:(id)arg1;
- (long long)startPlay:(id)arg1;
- (long long)stopRecord;
- (long long)resetRecord;
- (long long)resumeRecord;
- (long long)pauseRecord;
- (long long)startRecord;
- (void)setEnableAEC:(_Bool)arg1;
- (void)stopAUGraph;
- (void)startAUGraph;
- (void)connectAUGraph;
- (void)configAUGraph;
- (void)configStreamFormat:(double)arg1 channels:(unsigned int)arg2;
- (void)createAUGraph;
- (void)removeAudioSession;
- (void)setupAudioSession;
- (void)setupNotification;
- (void)dealloc;
- (id)init;

@end

