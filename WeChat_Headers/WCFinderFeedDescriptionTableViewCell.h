//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel, UIView;
@protocol WCFinderFeedDescriptionTableViewCellDelegate;

@interface WCFinderFeedDescriptionTableViewCell : UITableViewCell
{
    _Bool _addActionShadow;
    _Bool _setMoreActionFloat;
    NSString *_descriptionText;
    id <WCFinderFeedDescriptionTableViewCellDelegate> _delegate;
    unsigned long long _type;
    UILabel *_descriptionLabel;
    UIButton *_actionButton;
    UIView *_actionButtonBGView;
    double _floatTopY;
}

@property(nonatomic) double floatTopY; // @synthesize floatTopY=_floatTopY;
@property(nonatomic) _Bool setMoreActionFloat; // @synthesize setMoreActionFloat=_setMoreActionFloat;
@property(nonatomic) _Bool addActionShadow; // @synthesize addActionShadow=_addActionShadow;
@property(retain, nonatomic) UIView *actionButtonBGView; // @synthesize actionButtonBGView=_actionButtonBGView;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <WCFinderFeedDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void).cxx_destruct;
- (void)resetMoreActionView;
- (void)setMoreButtonFloat;
- (id)moreActionView;
- (void)clickAction:(id)arg1;
- (void)layoutSubviews;
- (double)getFloatViewBeginY;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

