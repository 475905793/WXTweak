//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMigrationClientExt-Protocol.h"
#import "MMCircleProgressViewDelegate-Protocol.h"

@class MMCircleProgressView, MMUILabel, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WXGDotDotDotLabel;
@protocol WXGMigrationClientEntryViewControllerDelegate;

@interface WXGMigrationClientEntryViewController : MMWindowViewController <IMigrationClientExt, ILinkEventExt, MMCircleProgressViewDelegate, CNetworkStatusExt>
{
    UIView *m_backgroundView;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    MMUILabel *m_titleInGBPLable;
    MMCircleProgressView *m_circularProgressView;
    RichTextView *m_greyTextView;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    MMUILabel *m_wifiTipLabel;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    unsigned long long m_currentProcessCount;
    unsigned long long m_totalProcessCount;
    NSString *m_speedString;
    unsigned long long m_currentRecvSize;
    unsigned long long m_totalSize;
    unsigned long long m_currentShowAlertViewTag;
    _Bool m_bUserCancelImport;
    UILabel *m_debugInfoLabel;
    _Bool m_bHasBeenMigrated;
    id <WXGMigrationClientEntryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationClientEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMigrationAllData;
- (void)onMigrationNewImport;
- (void)onAlertPhoneSizeNotEnough;
- (void)onAlertNowShouldRecoverData;
- (void)onReScanCode;
- (void)onShowBuildHotspotTip;
- (void)onShowContinueToImport;
- (void)onPauseMigration;
- (void)onCancelMigration;
- (void)onStopImport;
- (void)onCancelImport;
- (void)onStartImport;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)circleProgressViewDidTapped:(id)arg1;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyProgressCurrent:(unsigned long long)arg1 totalProgress:(unsigned long long)arg2;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onClientMigrationAlertCode:(unsigned long long)arg1;
- (void)p_addDebugInfoView;
- (void)p_addGreyButton;
- (void)p_addGreenButton;
- (void)p_addSmallTipsLabel;
- (void)p_addTipsLabel;
- (void)p_addIconImageView;
- (void)p_addLeftCornerButton;
- (void)p_addBlurEffectForView;
- (void)p_setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

