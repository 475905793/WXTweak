//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewSettingBaseViewController.h"

#import "WCActionSheetDelegate-Protocol.h"

@class DelaySwitchSettingLogic, MMNotificationSetting, NSString, UISwitch, WCActionSheet;

@interface SettingNotificationViewController : NewSettingBaseViewController <WCActionSheetDelegate>
{
    WCActionSheet *m_remindSwitchActionSheet;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    UISwitch *m_msgRemindSwitch;
    UISwitch *m_voipRemindSwitch;
    UISwitch *m_pushDetailSwitch;
    MMNotificationSetting *_notificationSetting;
}

@property(retain, nonatomic) MMNotificationSetting *notificationSetting; // @synthesize notificationSetting=_notificationSetting;
- (void).cxx_destruct;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)titleForFooterInSection:(long long)arg1;
- (unsigned int)getUseCallKitConfigValue;
- (id)makePushDetailCellWithRow:(unsigned long long)arg1;
- (id)makeNotificationRemindCellWithRow:(unsigned long long)arg1;
- (id)makeWCNotificationCellWithRow:(unsigned long long)arg1;
- (id)makeNotificationCellWithRow:(unsigned long long)arg1;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(_Bool)arg3 forbidOp:(_Bool)arg4 detailText:(id)arg5;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(_Bool)arg3 forbidOp:(_Bool)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reloadTableData;
- (void)voipNotificationUseCallKitSwitchSetting:(_Bool)arg1;
- (void)voipNotificationRemindSwitchSetting:(_Bool)arg1;
- (void)msgNotificationRemindSwitchSetting:(_Bool)arg1;
- (void)showPushDetailSwitchActionSheet:(id)arg1;
- (void)showVoipRemindSwitchActionSheet:(id)arg1;
- (void)showMsgRemindSwitchActionSheet:(id)arg1;
- (void)voipNotificationUseCallKitSwitchChanged:(id)arg1;
- (void)voipNotificationRemindSwitchChanged:(id)arg1;
- (void)msgNotificationRemindSwitchChanged:(id)arg1;
- (void)pushDetailSwitchChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)vibrationSwitchChanged:(id)arg1;
- (void)wcNotificationSwitchChanged:(id)arg1;
- (void)soundSwitchChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)enterForeground;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

