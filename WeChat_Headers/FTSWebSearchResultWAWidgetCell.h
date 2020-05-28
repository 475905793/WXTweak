//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSWebSearchBaseResultTableViewCell.h"

#import "IWAWidgetLocalSearchExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAAppCanvasWrapperViewDelegate-Protocol.h"
#import "WSActionSheetDelegate-Protocol.h"

@class MMUIButton, MMUILabel, MMWebImageView, NSIndexPath, NSMutableDictionary, NSString, UIButton, UITapGestureRecognizer, UIView, WAAppCanvasWrapperView, WAWebSearchMgr, WSActionSheet;
@protocol FTSWebSearchResultWAWidgetCellDelegate;

@interface FTSWebSearchResultWAWidgetCell : FTSWebSearchBaseResultTableViewCell <WAAppCanvasWrapperViewDelegate, UIGestureRecognizerDelegate, WSActionSheetDelegate, IWAWidgetLocalSearchExt>
{
    _Bool _needLine;
    id <FTSWebSearchResultWAWidgetCellDelegate> _widgetDelegate;
    NSMutableDictionary *_widgetData;
    NSIndexPath *_indexPath;
    WAAppCanvasWrapperView *_widgetView;
    UIView *_lineView;
    MMWebImageView *_iconView;
    MMUILabel *_providerLabel;
    UIButton *_providerLabelBtn;
    UITapGestureRecognizer *_tapGesture;
    MMUIButton *_switchButton;
    MMUIButton *_downSwitchButton;
    MMUILabel *_failLabel;
    MMUIButton *_failButton;
    long long _failCount;
    UIView *_lineView2;
    WSActionSheet *_actionSheet;
    long long _currentProvider;
    WAWebSearchMgr *_waWebSearchMgr;
}

+ (double)heightForWidgetItem:(id)arg1;
@property(retain, nonatomic) WAWebSearchMgr *waWebSearchMgr; // @synthesize waWebSearchMgr=_waWebSearchMgr;
@property(nonatomic) long long currentProvider; // @synthesize currentProvider=_currentProvider;
@property(retain, nonatomic) WSActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIView *lineView2; // @synthesize lineView2=_lineView2;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(retain, nonatomic) MMUIButton *failButton; // @synthesize failButton=_failButton;
@property(retain, nonatomic) MMUILabel *failLabel; // @synthesize failLabel=_failLabel;
@property(retain, nonatomic) MMUIButton *downSwitchButton; // @synthesize downSwitchButton=_downSwitchButton;
@property(retain, nonatomic) MMUIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIButton *providerLabelBtn; // @synthesize providerLabelBtn=_providerLabelBtn;
@property(retain, nonatomic) MMUILabel *providerLabel; // @synthesize providerLabel=_providerLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) WAAppCanvasWrapperView *widgetView; // @synthesize widgetView=_widgetView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool needLine; // @synthesize needLine=_needLine;
@property(retain, nonatomic) NSMutableDictionary *widgetData; // @synthesize widgetData=_widgetData;
@property(nonatomic) __weak id <FTSWebSearchResultWAWidgetCellDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (void)triggerClickMoreArea:(id)arg1;
- (void)onWrapperView:(id)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onWrapperView:(id)arg1 authorizeSuccess:(id)arg2;
- (void)onWrapperView:(id)arg1 openApp:(id)arg2;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)kvReportJumpAction:(unsigned long long)arg1 path:(id)arg2 weappUsrname:(id)arg3;
- (void)onWAWidgetSearchEndSearch;
- (double)calcDefaultHeight;
- (id)actionSheetDescFromRelayInfo:(id)arg1;
- (void)openApp:(id)arg1 weappUsrName:(id)arg2 debugMode:(unsigned int)arg3;
- (void)openApp:(id)arg1;
- (id)genWeAppPathFromDevelop:(id)arg1;
- (void)openDefaultAppPath;
- (void)onClickFail:(id)arg1;
- (void)logClickSwitchBtnForProvider:(long long)arg1 actionType:(unsigned long long)arg2;
- (void)onClickRightSwitch:(id)arg1;
- (void)onClickLeftSwitch:(id)arg1;
- (void)onClickSwitch:(id)arg1;
- (void)onClickWidgetView:(id)arg1;
- (void)relayoutFailView;
- (double)getSwitchRightPadding;
- (void)newRelayoutSupplementViewForWidgetHeight:(double)arg1;
- (void)relayoutSupplementViewForWidgetHeight:(double)arg1;
- (void)abtestRelayoutSupplementViewForWidgetHeight:(double)arg1;
- (void)changeCurrentProvider;
- (void)clearCore;
- (void)resetWidgetView;
- (void)reportForShow;
- (void)resumeCore;
- (void)pauseCore;
- (void)updateWidgetItem:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

