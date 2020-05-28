//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "VoiceVerifyLanguageDelegate-Protocol.h"

@class NSString, WCAccountTextFieldItem;
@protocol WCAccountVoiceVerifyViewControllerDelegate;

@interface WCAccountVoiceVerifyViewController : WCAccountBaseViewController <VoiceVerifyLanguageDelegate>
{
    NSString *m_nsLanguageName;
    NSString *m_nsLanguageCode;
    WCAccountTextFieldItem *m_textFieldLangItem;
    id <WCAccountVoiceVerifyViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onSelectLanguage:(id)arg1 Code:(id)arg2;
- (void)onGetVerifyCode;
- (void)initLanguage;
- (void)onChangeLang;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initNavigationBar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

