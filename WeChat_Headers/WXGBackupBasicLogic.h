//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WXGBackupBasicLogicDelegate;

@interface WXGBackupBasicLogic : NSObject
{
    _Bool _retransfer;
    id <WXGBackupBasicLogicDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_processLogicQueue;
}

@property(nonatomic) __weak NSObject<OS_dispatch_queue> *processLogicQueue; // @synthesize processLogicQueue=_processLogicQueue;
@property(nonatomic) _Bool retransfer; // @synthesize retransfer=_retransfer;
@property(nonatomic) __weak id <WXGBackupBasicLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyOnMainThreadCanReconnect;
- (void)processOnMainThreadAlert:(unsigned long long)arg1;
- (void)processProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processOnMainThreadProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)processCancelRequest:(id)arg1;
- (void)processFinishRequest:(id)arg1;
- (void)processFinishRequestData:(id)arg1;
- (void)processBackupDataTagResponse:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processBackupDataTag:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processSvrIDResponse:(id)arg1;
- (void)processSvrIDRequest:(id)arg1;
- (void)processDataPushResponse:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processDataPush:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processRequestSessionResponse:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processRequestSession:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processStartRequest:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)processStartResponse:(id)arg1;
- (void)processStartResponseData:(id)arg1;
- (void)confirmLogic;
- (void)resendService;
- (void)stopService;
- (void)startService;
- (id)initWithProtoHandler:(id)arg1 withProcessQueue:(id)arg2;
- (id)initWithProtoHandler:(id)arg1;

@end

