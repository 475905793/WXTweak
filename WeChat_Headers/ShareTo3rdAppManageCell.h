//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class AppRegisterInfo, MMWebImageView, UILabel, UISwitch;
@protocol ShareTo3rdAppManageCellDelegate;

@interface ShareTo3rdAppManageCell : MMUIView
{
    MMWebImageView *_iconImageView;
    UILabel *_nameLabel;
    UISwitch *_switchView;
    AppRegisterInfo *m_appInfo;
    id <ShareTo3rdAppManageCellDelegate> m_delegate;
}

@property(nonatomic) __weak id <ShareTo3rdAppManageCellDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)actionSwitchValueChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withAppInfo:(id)arg2;

@end

