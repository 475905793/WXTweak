//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingBaseViewController.h"

@interface PushNoDisturbViewController : SettingBaseViewController
{
    unsigned int m_uSelectedRow;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCloseCell:(id)arg1;
- (void)makeOpenAtNightCell:(id)arg1;
- (void)makeOpenCell:(id)arg1;
- (void)doConfigNoDisturb:(unsigned int)arg1;
- (void)sendNoDisturbOplog;
- (void)saveLocalSetting:(unsigned int)arg1;
- (void)onReturn;
- (void)onSave;
- (void)viewDidLoad;
- (unsigned int)getSelectedRow;
- (void)viewDidLayoutSubviews;

@end

