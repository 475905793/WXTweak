//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRefreshTableFooterView.h"

@class NSString, UILabel, UITapGestureRecognizer;
@protocol WCFinderRefreshTableFooterViewDelegate;

@interface WCFinderRefreshTableFooterView : MMRefreshTableFooterView
{
    id <WCFinderRefreshTableFooterViewDelegate> _actionDelegate;
    NSString *_normalText;
    UILabel *_label;
    UITapGestureRecognizer *_singleGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer; // @synthesize singleGestureRecognizer=_singleGestureRecognizer;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(nonatomic) __weak id <WCFinderRefreshTableFooterViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)onConfigDotNoMore;
- (void)onClickRetry;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onConfigLabelTop:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

