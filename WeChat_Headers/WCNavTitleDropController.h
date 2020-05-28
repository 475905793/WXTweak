//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDropableTitleViewDelegate-Protocol.h"

@class MMUIViewController, NSArray, NSString, UIView, WCDropableTitleView;
@protocol WCNavTitleDropControllDelegate;

@interface WCNavTitleDropController : NSObject <WCDropableTitleViewDelegate>
{
    MMUIViewController *_attachViewController;
    NSString *_title;
    UIView *_backgroundView;
    UIView *_operateContentView;
    _Bool _isShowingItems;
    id <WCNavTitleDropControllDelegate> _delegate;
    NSArray *_arrItems;
    WCDropableTitleView *_titleView;
    double _dropViewOriginY;
}

@property(nonatomic) double dropViewOriginY; // @synthesize dropViewOriginY=_dropViewOriginY;
@property(readonly, nonatomic) WCDropableTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) _Bool isShowingItems; // @synthesize isShowingItems=_isShowingItems;
@property(readonly, nonatomic) NSArray *arrItems; // @synthesize arrItems=_arrItems;
@property(nonatomic) __weak id <WCNavTitleDropControllDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickOperateItem:(id)arg1;
- (void)onTapCancel:(id)arg1;
- (void)onClickDropableTitleView:(id)arg1;
- (id)getSelectedItem;
- (unsigned int)getSelectedIndex;
- (void)updateItemSelectedIndex:(unsigned int)arg1;
- (id)getButtonByIndex:(unsigned int)arg1;
- (void)dismissView;
- (void)showItems;
- (id)makeButtonWithItem:(id)arg1 index:(int)arg2;
- (void)addTopLineView;
- (void)initItemView;
- (void)initOperateContentView;
- (void)initBackgroundViews;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)initTitleView;
- (id)initWithViewController:(id)arg1 title:(id)arg2 dropItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

