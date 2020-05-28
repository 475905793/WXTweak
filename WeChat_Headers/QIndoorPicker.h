//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QIndoorBuilding, UILabel, UITableView;
@protocol QIndoorPickerDelegate;

@interface QIndoorPicker : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <QIndoorPickerDelegate> _delegate;
    NSString *_fontName;
    UITableView *_tableView;
    UILabel *_head;
    QIndoorBuilding *_indoorBuilding;
}

@property(retain, nonatomic) QIndoorBuilding *indoorBuilding; // @synthesize indoorBuilding=_indoorBuilding;
@property(retain, nonatomic) UILabel *head; // @synthesize head=_head;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) __weak id <QIndoorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithIndoorBuilding:(id)arg1 levelIndex:(unsigned long long)arg2;
- (void)setupTableView;
- (void)setupBackgroundUI;
- (void)setupTopUI;
- (double)internalHorizontalGap;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)imageForName:(id)arg1;
- (void)reloadWithIndoorBuilding:(id)arg1 levelIndex:(unsigned long long)arg2;
- (void)selectLevelIndex:(unsigned long long)arg1;
- (void)callDelegateDidSelectLevelIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
