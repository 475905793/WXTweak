//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface MMQRCodeMgr : MMService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableSet *m_downloadSet;
    NSMutableSet *m_revokeQRCodeSet;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRevokeOpenIMChatrommQRCodeResponse:(id)arg1;
- (void)handleGetOpenIMChatRoomQRCodeResponse:(id)arg1;
- (void)handleRevokeChatrommQRCodeResponse:(id)arg1;
- (void)handleGetQRCodeResponse:(id)arg1;
- (void)setHasShowRevokeTip:(id)arg1 TipID:(id)arg2;
- (_Bool)revokeOpenIMChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (_Bool)p_revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (_Bool)revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (void)getNextQRCode:(id)arg1;
- (id)getQRCode:(id)arg1 pullIfNotExist:(_Bool)arg2;
- (void)revokeQRCode:(id)arg1;
- (void)refreshQRCode:(id)arg1;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2;
- (void)getOpenIMChatRoomQRCodeFromServer:(id)arg1;
- (void)p_getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2 withOpCode:(unsigned int)arg3;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2 withOpCode:(unsigned int)arg3;
- (unsigned int)getCurStyle:(id)arg1;
- (id)getQRCodeConfig:(id)arg1;
- (id)getQRCodeConfigPath:(id)arg1;
- (id)getQRCodeStylePath:(id)arg1;
- (id)getQRCodeImagePath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

