//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IStrongNotificationMgrExt-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSMutableDictionary, NSString, UIView;

@interface StrongNotificationListViewController : MMUIViewController <UISearchBarDelegate, IStrongNotificationMgrExt, UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *m_tableView;
    NSArray *m_strongNotificationArray;
    UIView *m_emptyView;
    NSMutableDictionary *m_cellHeightDic;
}

- (void).cxx_destruct;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)onDeleteStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(_Bool)arg3;
- (void)onAddStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(_Bool)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getStrongNotificatonExpiredTime:(id)arg1;
- (double)calculateWeAppCellHeightWithStrongNotificationItem:(id)arg1;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (id)genImageOfView:(id)arg1;
- (id)genDeleteConfirmIcon;
- (id)getCircleButtonImage:(id)arg1 coler:(id)arg2;
- (void)addMultiMenuInCell:(id)arg1;
- (id)getNormalTableCellWithCellIdentifier:(id)arg1;
- (id)getFailTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateWeAppTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getWeAppTableViewCellWithCellIdentifier:(id)arg1;
- (void)onResetStrongNotification:(id)arg1;
- (void)showEmptyView;
- (void)reloadTableData;
- (void)reloadTableView;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initEmptyView;
- (void)initTableView;
- (void)initTitleView;
- (void)tryUpdateResource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

