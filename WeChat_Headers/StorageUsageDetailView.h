//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel, StorageUsageDetailModel, UIButton;
@protocol StorageUsageDetailViewDelegate;

@interface StorageUsageDetailView : UIView
{
    MMUILabel *m_titleLabel;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_subTitleLabel;
    UIButton *m_actionButton;
    MMUIActivityIndicatorView *m_loadingView;
    StorageUsageDetailModel *m_model;
    id <StorageUsageDetailViewDelegate> _delegate;
}

@property(nonatomic) __weak id <StorageUsageDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StorageUsageDetailModel *model; // @synthesize model=m_model;
- (void).cxx_destruct;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)updateSizeAfterCleaning:(unsigned long long)arg1;
- (void)showLoading;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)initLoadingView;
- (void)initActionButton;
- (void)initSubTitleLabel;
- (void)initSizeLabel;
- (void)initTitleLabel;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

