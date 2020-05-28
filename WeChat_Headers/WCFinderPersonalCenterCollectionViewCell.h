//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FinderUserPrepareResponse, MMUIButton, UILabel, UIView, WCFinderContact, WCFinderHeadImageView;

@interface WCFinderPersonalCenterCollectionViewCell : UICollectionViewCell
{
    FinderUserPrepareResponse *_prepareResponse;
    WCFinderContact *_contact;
    UIView *_containerView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UILabel *_reviewLabel;
    MMUIButton *_arrowBtn;
    MMUIButton *_badgeView;
    UILabel *_createTipsLabel;
}

@property(retain, nonatomic) UILabel *createTipsLabel; // @synthesize createTipsLabel=_createTipsLabel;
@property(retain, nonatomic) MMUIButton *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMUIButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
@property(retain, nonatomic) UILabel *reviewLabel; // @synthesize reviewLabel=_reviewLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
- (void).cxx_destruct;
- (void)adjustNickNameLabelWidth;
- (void)setupSubviews;
- (_Bool)isShowRedDot;
- (void)updateUnreadNotificationCount:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

