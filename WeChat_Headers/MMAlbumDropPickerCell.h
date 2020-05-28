//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView, UIView;

@interface MMAlbumDropPickerCell : UITableViewCell
{
    UIImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_countLabel;
    UIImageView *_selectedImageView;
    UIView *_separatorView;
    NSString *_albumId;
}

+ (double)height;
+ (id)cellInTableView:(id)arg1 album:(id)arg2 isSelected:(_Bool)arg3;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)layout;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)updateWithPhotoCount:(long long)arg1;
- (void)updateWithImage:(id)arg1;
- (void)updateWithImage:(id)arg1 title:(id)arg2 count:(long long)arg3 isSelected:(_Bool)arg4;

@end

