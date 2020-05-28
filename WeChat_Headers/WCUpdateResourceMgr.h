//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCUpdateBootsExt-Protocol.h"

@class NSString;

@interface WCUpdateResourceMgr : MMService <MMResourceMgrExt, WCUpdateBootsExt, MMKernelExt, MMServiceProtocol>
{
}

- (void)cleanOldOne;
- (void)cleanLocalUpdateZip;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onBootsDeleteFinish;
- (void)onBootsUpdateFinish:(unsigned long long)arg1;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceInit;
- (void)dealloc;
- (void)forceUpdate:(_Bool)arg1;
- (id)getUpdateZipFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

