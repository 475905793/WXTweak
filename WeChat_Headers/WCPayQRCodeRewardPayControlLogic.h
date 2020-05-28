//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IStrangerContactMgrExt-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"
#import "WCPayQRCodeRewardEditMoneyViewControllerDelegate-Protocol.h"
#import "WCPayQRCodeRewardPayCheckCgiDelegate-Protocol.h"
#import "WCPayQRCodeRewardPayerConfirmViewControllerDelegate-Protocol.h"
#import "WCPayQRCodeRewardPayerDetailViewControllerDelegate-Protocol.h"
#import "WCPayQRCodeRewardPlaceOrderCgiDelegate-Protocol.h"
#import "WCPayQRCodeRewardScanCodeCgiDelegate-Protocol.h"

@class NSString, WCPayPayMoneyLogic, WCPayQRCodeRewardPayCheckCgi, WCPayQRCodeRewardPlaceOrderCgi, WCPayQRCodeRewardScanCodeCgi;
@protocol WCPayQRCodeRewardPayControlLogicDelegate;

@interface WCPayQRCodeRewardPayControlLogic : WCPayControlLogic <WCPayQRCodeRewardPayerDetailViewControllerDelegate, WCPayQRCodeRewardPayerConfirmViewControllerDelegate, WCPayQRCodeRewardEditMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlLogicDeleagte, WCPayQRCodeRewardScanCodeCgiDelegate, WCPayQRCodeRewardPlaceOrderCgiDelegate, WCPayQRCodeRewardPayCheckCgiDelegate, IStrangerContactMgrExt, MMUseCaseCallback>
{
    id <WCPayQRCodeRewardPayControlLogicDelegate> _logicDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    WCPayQRCodeRewardScanCodeCgi *_scanCodeCgi;
    WCPayQRCodeRewardPlaceOrderCgi *_placeOrderCgi;
    WCPayQRCodeRewardPayCheckCgi *_payCheckCgi;
}

@property(retain, nonatomic) WCPayQRCodeRewardPayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain, nonatomic) WCPayQRCodeRewardPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(retain, nonatomic) WCPayQRCodeRewardScanCodeCgi *scanCodeCgi; // @synthesize scanCodeCgi=_scanCodeCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)onGetQRCodeRewardPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (_Bool)gotoViewController:(id)arg1;
- (void)continueToTransfer:(_Bool)arg1;
- (void)continueToTransfer;
- (void)onGetQRCodeRewardPlaceOrderResp:(id)arg1;
- (void)sendRewardPrePayRequestWithAmount:(long long)arg1 comment:(id)arg2 isSelectAmount:(_Bool)arg3 shouldShowNickName:(_Bool)arg4;
- (void)handleGotoViewControllerAfterGetTransferContact;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)scanCodeAlertViewConfirmClick;
- (void)onGetQRCodeRewardScanCodeCgiResp:(id)arg1;
- (void)sendScanCodeRequest;
- (void)onEditMoneyViewControllerConfirmRewardWithAmount:(long long)arg1 comment:(id)arg2 shouldShowNickName:(_Bool)arg3;
- (void)onEditMoneyViewControllerBack;
- (void)onPayerConfirmViewControllerConfirmWithPayerCommnet:(id)arg1 shouldShowNickName:(_Bool)arg2;
- (void)onPayerConfirmViewControllerBack;
- (void)onPayerDetailViewControllerClickAmount:(long long)arg1;
- (void)onPayerDetailViewControllerClickEditMoneyBtn;
- (void)onPayerDetailViewControllerBack;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithScanUrl:(id)arg1 sourceWebViewUrl:(id)arg2 payChannel:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

