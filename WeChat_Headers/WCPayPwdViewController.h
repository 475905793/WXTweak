//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "CSettingExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "SetWCPayWebLogicStateExt-Protocol.h"
#import "WCPayGetTransferWordingCgiDelegate-Protocol.h"
#import "WCPayHongBaoRefundConfigCgiDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayOpenTouchIDAuthLogicDelegate-Protocol.h"
#import "WCPayTransferPhoneChangeSwitchCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneGetSwitchCgiDelegate-Protocol.h"

@class GetHbRefundConfigResp, GetTransferWordingResponse, MMWebViewController, NSDictionary, NSString, TransferPhoneGetSwitchResp, WCPayGetTransferWordingCgi, WCPayHongBaoRefundConfigCgi, WCPayTransferPhoneChangeSwitchCgi, WCPayTransferPhoneGetSwitchCgi;
@protocol WCPayPwdViewControllerDelegate;

@interface WCPayPwdViewController : WCPayBaseViewController <WCPayTransferPhoneChangeSwitchCgiDelegate, WCPayTransferPhoneGetSwitchCgiDelegate, CSettingExt, WCPayGetTransferWordingCgiDelegate, MMWebViewDelegate, WCPayOpenTouchIDAuthLogicDelegate, WCPayLogicMgrExt, SetWCPayWebLogicStateExt, WCPayHongBaoRefundConfigCgiDelegate, ILinkEventExt>
{
    id <WCPayPwdViewControllerDelegate> m_delegate;
    _Bool _isDeductShowNew;
    unsigned int _m_fromScene;
    NSDictionary *_payManageData;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayHongBaoRefundConfigCgi *_hbRefundConfigCgi;
    GetHbRefundConfigResp *_hbRefundConfigResp;
    WCPayTransferPhoneGetSwitchCgi *_transferPhoneGetSwitchCgi;
    WCPayTransferPhoneChangeSwitchCgi *_transferPhoneChangeSwitchCgi;
    TransferPhoneGetSwitchResp *_transferPhoneGetSwitchResp;
    MMWebViewController *_uploadIdWebView;
}

@property(retain) MMWebViewController *uploadIdWebView; // @synthesize uploadIdWebView=_uploadIdWebView;
@property(retain) TransferPhoneGetSwitchResp *transferPhoneGetSwitchResp; // @synthesize transferPhoneGetSwitchResp=_transferPhoneGetSwitchResp;
@property(retain) WCPayTransferPhoneChangeSwitchCgi *transferPhoneChangeSwitchCgi; // @synthesize transferPhoneChangeSwitchCgi=_transferPhoneChangeSwitchCgi;
@property(retain) WCPayTransferPhoneGetSwitchCgi *transferPhoneGetSwitchCgi; // @synthesize transferPhoneGetSwitchCgi=_transferPhoneGetSwitchCgi;
@property(retain, nonatomic) GetHbRefundConfigResp *hbRefundConfigResp; // @synthesize hbRefundConfigResp=_hbRefundConfigResp;
@property(retain, nonatomic) WCPayHongBaoRefundConfigCgi *hbRefundConfigCgi; // @synthesize hbRefundConfigCgi=_hbRefundConfigCgi;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(nonatomic) _Bool isDeductShowNew; // @synthesize isDeductShowNew=_isDeductShowNew;
@property(retain, nonatomic) NSDictionary *payManageData; // @synthesize payManageData=_payManageData;
@property(nonatomic) unsigned int m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(nonatomic) __weak id <WCPayPwdViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onWCPayTransferPhoneChangeSwitchCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneChangeSwitchCgiResp:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genTransferPhoneSectionFooterView;
- (void)onTransferPhoneSwitch:(id)arg1;
- (void)onWCPayTransferPhoneGetSwitchCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetSwitchCgiResp:(id)arg1;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)setWCPayWebLogicStateJsapi:(id)arg1 didGetInfo:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onRealnameVerifySuccess;
- (void)onRealname;
- (void)gotoPayManage:(id)arg1;
- (void)reloadTableFromCache;
- (void)initPayManageDataFromCacheOrNetwork;
- (void)updatePayManageData;
- (void)onSettingChanged:(int)arg1;
- (void)reloadTable;
- (void)unregisterWCPay;
- (void)onChangeDelayTransferDuration;
- (void)onResetPwd;
- (void)onModifyPwd;
- (void)onSimpleUserSetPwd;
- (void)onTouchIDSwitchChanged:(id)arg1;
- (void)requestWording;
- (id)delayDurationDesc;
- (void)onPayManageLabelToWeb:(id)arg1;
- (void)onSwitchWallet:(id)arg1;
- (void)onChangeHongBaoRefundPayWay;
- (void)managePlanData;
- (void)initCellView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)OnHongBaoRefundConfigRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)arg1;
- (void)requestHbRefundConfig;
- (void)requestTransferPhoneConfig;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnBack;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

