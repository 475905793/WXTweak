//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, UIImageView, UILabel, UIView, WCPayCss;
@protocol WCPayTransferPhoneWelcomePageDelegate;

@interface WCPayTransferPhoneWelcomePage : WCPayBaseViewController
{
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleView;
    UILabel *_subTitleView2;
    UIView *_bottomContainerView;
    UIButton *_confirmButton;
    UIView *_headerView;
    WCPayCss *_css;
    id <WCPayTransferPhoneWelcomePageDelegate> _m_delegate;
}

@property __weak id <WCPayTransferPhoneWelcomePageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain) UILabel *subTitleView2; // @synthesize subTitleView2=_subTitleView2;
@property(retain) UILabel *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)onTapStart;
- (void)updateStartButton;
- (void)updateBottomContainerView;
- (void)updateSubTitleView2;
- (void)updateSubTitleView;
- (void)updateTitleView;
- (void)updateIcon;
- (void)updateHeaderView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

@end

