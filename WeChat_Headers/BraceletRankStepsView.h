//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class BraceletRankSwitch, BraceletStepsBgView, NSArray, NSMutableArray, NSString, UILabel, UIWeRunStepsView;

@interface BraceletRankStepsView : MMUIView
{
    UILabel *m_scoreLbl;
    UILabel *m_scoreTitleLbl;
    BraceletStepsBgView *stepsBgView;
    NSArray *_stepItems;
    UIWeRunStepsView *_stepView;
    BraceletRankSwitch *_switchBtn;
    long long chartStatus;
    int slideIndex;
    unsigned int range;
    _Bool _isMySelf;
    NSString *_scoreTitle;
    NSString *_scoreString;
    NSMutableArray *_stepDatas;
}

@property(retain, nonatomic) NSMutableArray *stepDatas; // @synthesize stepDatas=_stepDatas;
@property(nonatomic) _Bool isMySelf; // @synthesize isMySelf=_isMySelf;
@property(copy, nonatomic) NSString *scoreString; // @synthesize scoreString=_scoreString;
@property(retain, nonatomic) NSArray *stepItems; // @synthesize stepItems=_stepItems;
@property(copy, nonatomic) NSString *scoreTitle; // @synthesize scoreTitle=_scoreTitle;
- (void).cxx_destruct;
- (void)switchStepWithAnimationSubtype:(id)arg1;
- (void)handleSwitchEvent:(id)arg1;
- (void)handleSwipeLeft;
- (void)handleSwipeRight;
- (void)bindAction;
- (void)resizeScoreTitle;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

