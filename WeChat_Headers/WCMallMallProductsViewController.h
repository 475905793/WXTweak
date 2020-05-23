//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCMallBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "WCMallCandidateTelephoneViewDelegate-Protocol.h"
#import "WCMallOldTelephoneViewDelegate-Protocol.h"

@class MMWebImageView, NSMutableDictionary, NSString, UIButton, UILabel, UIView, UrlLabel, WCBaseKeyboardToolBar, WCMallCandidateTelephoneView, WCMallOldTelephoneView;
@protocol WCMallMallProductsViewControllerDelegate;

@interface WCMallMallProductsViewController : WCMallBaseViewController <WCMallOldTelephoneViewDelegate, WCMallCandidateTelephoneViewDelegate, ILinkEventExt>
{
    id <WCMallMallProductsViewControllerDelegate> m_delegate;
    NSMutableDictionary *m_dicFunctionListView;
    WCBaseKeyboardToolBar *m_keyboardBar;
    UIButton *m_footerButton;
    UILabel *m_telphoneFooterLabel;
    UILabel *m_productFooterLabel;
    MMWebImageView *m_activityImageView;
    WCMallOldTelephoneView *m_oWCMallOldTelephoneView;
    WCMallCandidateTelephoneView *m_oWCMallCandidateTelephoneView;
    UIView *m_pickerBkgView;
    int m_eTelephoneNumberInputStatus;
    UrlLabel *m_rechargeTextView;
    NSString *m_balanceUrl;
    NSMutableDictionary *_disabledProducts;
}

@property(retain, nonatomic) NSString *m_balanceUrl; // @synthesize m_balanceUrl;
- (void).cxx_destruct;
- (id)keyFromMobile:(id)arg1 productName:(id)arg2;
- (void)updateFlowDataErrorIfNeedForMobile:(id)arg1 productName:(id)arg2;
- (void)preQueryDisabledWithErrorMessage:(id)arg1 forMobile:(id)arg2 productName:(id)arg3;
- (void)preQueryForFlowDataIfNeedWithMobile:(id)arg1;
- (id)footerTextFromResponseRemark:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)goToBalanceLink:(id)arg1;
- (id)GetCandidateTelephoneEnsureTip;
- (id)GetCandidateTelephoneDescription:(unsigned int)arg1 DifferentIndex:(id)arg2;
- (unsigned int)GetNumberOfCandidateTelephoneListCount;
- (void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
- (void)OnClickWCMallCandidateTelephoneCell:(unsigned int)arg1;
- (_Bool)isSupportSeparator;
- (id)GetOldTelephoneOwnerName:(unsigned int)arg1;
- (id)GetOldTelephoneNumber:(unsigned int)arg1;
- (unsigned int)GetNumberOfOldTelephoneListCount;
- (void)OnClickWCMallOldTelephoneClearButton;
- (void)OnClearTelphone;
- (void)OnClickWCMallOldTelephoneCell:(unsigned int)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)checkData:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)OnComfireEnsureAlert;
- (void)onNext;
- (_Bool)getData:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)initOldTelphoneTableView:(struct CGRect)arg1;
- (void)initCandidateTelphoneTableView:(struct CGRect)arg1;
- (void)initNavigationBarWithData:(id)arg1;
- (void)initNavigationBar;
- (void)initFooterViewWithData:(id)arg1;
- (void)initFooterView;
- (void)reloadTableView;
- (id)getClearHeaderView;
- (id)makeProductFooterView;
- (id)makeTelphoneFooterView;
- (void)initInfoTemplate;
- (void)clearPriceLabel;
- (void)updateTableView:(_Bool)arg1;
- (void)updateTableView;
- (void)setDelegate:(id)arg1;
- (void)reloadOldTelephoneListView;
- (void)updateFlowProducts:(id)arg1;
- (void)reloadCandidateTelephoneView;
- (id)getCurrentTelephoneNumberOwnerName;
- (void)setTelephoneNumberOwnerName:(id)arg1 Number:(id)arg2;
- (void)SetWCMallProductLatestInfo:(id)arg1;
- (void)editerBeginEditing:(id)arg1;
- (void)editerEndEditing:(id)arg1;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)OnActivityIconClick:(id)arg1;
- (void)OnActivityIconCancel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)initFilledDefaultData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

