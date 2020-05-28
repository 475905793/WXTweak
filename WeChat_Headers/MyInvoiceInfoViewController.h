//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "IMyInvoiceLogicMgrExt-Protocol.h"
#import "LongPressMenuViewDelegate-Protocol.h"
#import "LongPressViewDelegate-Protocol.h"

@class MMUIButton, MyInvoiceData, NSIndexPath, NSMutableArray, NSString, UIButton, UIImageView, UIView, WCBankNumberTextFieldItem, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCClearModeTextViewItem;
@protocol MyInvoiceInfoViewControllerDelegate;

@interface MyInvoiceInfoViewController : WCBizBaseViewController <IMyInvoiceLogicMgrExt, LongPressMenuViewDelegate, LongPressViewDelegate>
{
    UIButton *m_footerButton;
    WCClearModeTextViewItem *m_textFieldCompanyTitleItem;
    WCClearModeTextViewItem *m_textFieldPersonTitleItem;
    WCBaseTextFieldItem *m_textFieldTaxNumberItem;
    WCClearModeTextViewItem *m_textFieldAddressItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    WCClearModeTextViewItem *m_textFieldBankItem;
    WCBankNumberTextFieldItem *m_textFieldBankNumberItem;
    WCBaseTextFieldItem *m_textFieldEmail;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSMutableArray *m_arrayInfo;
    id <MyInvoiceInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
    MyInvoiceData *m_invoiceData;
    NSString *m_title_type;
    unsigned long long m_invoice_mode;
    int m_scene;
    _Bool m_inAnimation;
    struct CGRect m_oldFrame;
    UIView *m_oldSuperView;
    double m_oldBrightness;
    NSString *m_nsItemTitle;
    NSString *m_nsItemContent;
    UIView *m_oLastLongPressView;
    UIButton *m_tipsButton;
    NSString *m_type;
    MMUIButton *_companyTypeBtn;
    MMUIButton *_personTypeBtn;
    UIImageView *_qrcodeView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *qrcodeView; // @synthesize qrcodeView=_qrcodeView;
@property(retain, nonatomic) MMUIButton *personTypeBtn; // @synthesize personTypeBtn=_personTypeBtn;
@property(retain, nonatomic) MMUIButton *companyTypeBtn; // @synthesize companyTypeBtn=_companyTypeBtn;
- (void).cxx_destruct;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (id)getInvoiceCopiedString:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)setFromScene:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)clickInfoCell:(struct WCTableViewNormalCellManager *)arg1 index:(id)arg2;
- (void)onTitleTypeChangeTo:(id)arg1;
- (void)onCompanyTypeBtnClick;
- (void)onPersonTypeBtnClick;
- (void)makeInfoModeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (double)getCellHeightWithId:(int)arg1;
- (void)setItemTitleAndContentOfId:(int)arg1;
- (void)makeTitleTypeCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (double)cellHightForContent:(id)arg1 andKey:(id)arg2;
- (double)getTextViewHeightForContent:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)checkIsTaxNumberRight;
- (_Bool)checkIsEmpty:(id)arg1;
- (_Bool)canDoSave;
- (void)OnSaveInvoiceRet:(_Bool)arg1 andGroupId:(long long)arg2 withInvoiceUrl:(id)arg3;
- (void)onNext;
- (void)onEdit;
- (_Bool)fillDataTo:(id)arg1;
- (void)setMyTitle;
- (void)viewDidBeInteractivePoped;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnReturnClick;
- (void)OnCancelClick;
- (void)OnComfireEnsureAlert;
- (void)reloadInfoModeTableView;
- (void)refreshViewWithInvoiceData:(id)arg1;
- (void)setInvoiceMode:(unsigned long long)arg1;
- (void)setupWithInvoiceData:(id)arg1;
- (_Bool)shouldShowInfoItem:(id)arg1;
- (void)addTitleTypeHeader;
- (void)updateBrightness;
- (void)setBrightness:(double)arg1;
- (void)qrcodeTapped:(id)arg1;
- (void)makeEmptyCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeQRCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)reloadTableView;
- (void)resetTextFieldContent;
- (void)initInfoTemplate;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

