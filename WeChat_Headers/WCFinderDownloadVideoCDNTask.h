//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderFeedMediaWrap;

@interface WCFinderDownloadVideoCDNTask : NSObject
{
    _Bool _bSourceChanged;
    _Bool _bChatRoomPreload;
    _Bool _bPreloadTask;
    _Bool _bPreloadFinish;
    _Bool _bReceiveMoov;
    _Bool _bReceivePreData;
    _Bool _hasPreloadFirstFrame;
    _Bool _bUseDCIP;
    int _downloadMode;
    unsigned int _createTime;
    unsigned int _preloadPercent;
    unsigned int _totalLength;
    unsigned int _finishedLegth;
    int _filetype;
    int _apptype;
    NSString *_clientId;
    WCFinderFeedMediaWrap *_mediaItem;
    NSString *_tmpPath;
    NSString *_formatPath;
    NSString *_dataUrl;
    unsigned long long _ui64StartTime;
    double _getMoovTime;
    unsigned long long _enQueueTime;
    unsigned long long _preloadMinSize;
    unsigned long long _firstFrameSize;
    NSArray *_arryIP;
    struct C2CDownloadResult _result;
}

@property(retain, nonatomic) NSArray *arryIP; // @synthesize arryIP=_arryIP;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(nonatomic) unsigned long long firstFrameSize; // @synthesize firstFrameSize=_firstFrameSize;
@property(nonatomic) unsigned long long preloadMinSize; // @synthesize preloadMinSize=_preloadMinSize;
@property(nonatomic) unsigned long long enQueueTime; // @synthesize enQueueTime=_enQueueTime;
@property(nonatomic) double getMoovTime; // @synthesize getMoovTime=_getMoovTime;
@property(nonatomic) struct C2CDownloadResult result; // @synthesize result=_result;
@property(nonatomic) unsigned long long ui64StartTime; // @synthesize ui64StartTime=_ui64StartTime;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(nonatomic) _Bool hasPreloadFirstFrame; // @synthesize hasPreloadFirstFrame=_hasPreloadFirstFrame;
@property(nonatomic) _Bool bReceivePreData; // @synthesize bReceivePreData=_bReceivePreData;
@property(nonatomic) _Bool bReceiveMoov; // @synthesize bReceiveMoov=_bReceiveMoov;
@property(nonatomic) int apptype; // @synthesize apptype=_apptype;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;
@property(nonatomic) unsigned int finishedLegth; // @synthesize finishedLegth=_finishedLegth;
@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) unsigned int preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(nonatomic) _Bool bPreloadFinish; // @synthesize bPreloadFinish=_bPreloadFinish;
@property(nonatomic) _Bool bPreloadTask; // @synthesize bPreloadTask=_bPreloadTask;
@property(nonatomic) _Bool bChatRoomPreload; // @synthesize bChatRoomPreload=_bChatRoomPreload;
@property(retain, nonatomic) NSString *formatPath; // @synthesize formatPath=_formatPath;
@property(retain, nonatomic) NSString *tmpPath; // @synthesize tmpPath=_tmpPath;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool bSourceChanged; // @synthesize bSourceChanged=_bSourceChanged;
@property(nonatomic) int downloadMode; // @synthesize downloadMode=_downloadMode;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)getDNSKey;
- (id)getHost;

@end

