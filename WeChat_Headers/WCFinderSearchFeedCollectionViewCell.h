//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCFinderDownloadImageCdnMgrExt-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderSearchHighLightItemExt-Protocol.h"

@class FavAttributeCPLabel, NSString, UIImageView, UILabel, UIView, WCFinderFeedMediaWrap, WCFinderHeadImageView, WCFinderSearchHighLightItemModel;
@protocol WCFinderSearchFeedCollectionViewCellDelegate;

@interface WCFinderSearchFeedCollectionViewCell : UICollectionViewCell <WCFinderDownloadImageCdnMgrExt, WCFinderHeadImageViewDelegate, WCFinderSearchHighLightItemExt>
{
    id <WCFinderSearchFeedCollectionViewCellDelegate> _delegate;
    FavAttributeCPLabel *_descLabel;
    UIImageView *_imageView;
    WCFinderSearchHighLightItemModel *_dataModel;
    UIImageView *_tagImageView;
    UIView *_maskView;
    UIImageView *_likeIconView;
    UILabel *_likeNumLabel;
    WCFinderHeadImageView *_avatarImageView;
    FavAttributeCPLabel *_nickNameLabel;
    WCFinderFeedMediaWrap *_currentMediaWrap;
}

+ (double)streamCellHeightWith:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) WCFinderFeedMediaWrap *currentMediaWrap; // @synthesize currentMediaWrap=_currentMediaWrap;
@property(retain, nonatomic) FavAttributeCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) WCFinderSearchHighLightItemModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FavAttributeCPLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak id <WCFinderSearchFeedCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFeedLikedDataChanged:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)reloadImage;
- (void)updateImage:(id)arg1;
- (void)onFinderThumbDownloadSuccess:(id)arg1;
- (void)onFinderImageDownloadSuccess:(id)arg1;
- (void)updateContentWith:(id)arg1;
- (void)clickAvator;
- (void)initSubview;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
