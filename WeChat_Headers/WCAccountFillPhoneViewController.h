//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "CountryCodePickerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CountryCodeWrap, NSString, PhoneNumberFormatLogic, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar;
@protocol WCAccountFillPhoneViewControllerDelegate;

@interface WCAccountFillPhoneViewController : WCAccountBaseViewController <CountryCodePickerDelegate, UITextFieldDelegate>
{
    WCAccountTextFieldItem *m_textFieldContryCodeSelectItem;
    WCAccountTextFieldItem *m_textFieldContryCodeItem;
    WCAccountTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    CountryCodeWrap *m_curCountryCode;
    PhoneNumberFormatLogic *m_phoneNumFormatter;
    UIButton *m_btnNext;
    NSString *m_nsHeaderTip;
    id <WCAccountFillPhoneViewControllerDelegate> m_delegate;
    _Bool _m_bAgreementMobileCanBeFound;
}

@property(nonatomic) _Bool m_bAgreementMobileCanBeFound; // @synthesize m_bAgreementMobileCanBeFound=_m_bAgreementMobileCanBeFound;
- (void).cxx_destruct;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)findCountryCode;
- (void)checkNextBtnEnable;
- (void)showCountryCodePickerView;
- (void)hideKeyBoard;
- (void)initTableView;
- (void)setViewY;
- (void)showCountryCode;
- (void)vcResignFirstResponder;
- (void)vcBecomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBeInteractivePoped;
- (void)setLeftBarBtnTitle:(id)arg1;
- (void)showMobileCanBeFound;
- (void)onMobileCanBeFoundAgreementClick:(id)arg1;
- (void)fillCountryCode:(id)arg1 phoneNum:(id)arg2;
- (void)showNextFooter:(id)arg1;
- (void)showBindFooter;
- (id)createBottomBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)initNavigationBar;
- (void)onNext;
- (void)setHeaderTip:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isForbidPageSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

