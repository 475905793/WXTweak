//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class NSString, UIImageView, UILabel;

@interface BSSLoadMoreItemView : BSSBaseItemView
{
    UIImageView *_imgView;
    UILabel *_contentLabel;
    NSString *_title;
}

+ (double)heightForItem;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)initView;
- (id)initLoadmoreItemViewWithTitle:(id)arg1;
- (void)dealloc;

@end

