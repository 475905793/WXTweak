//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FaceRecogBaseView.h"

@class CADisplayLink, CAShapeLayer, FaceRecogPrepareView, FaceRecogRoundView, MMUILabel, NSString, UIImageView, UIView;
@protocol FaceRecogReflectLightViewDelegate;

@interface FaceRecogReflectLightView : FaceRecogBaseView
{
    FaceRecogPrepareView *_prepareView;
    UIView *_reflectView;
    UIImageView *_lightCircleView;
    UIImageView *_colorCircleView;
    CAShapeLayer *_shapeLayer;
    CADisplayLink *_displayLink;
    double _curArc;
    FaceRecogRoundView *_faceRectView;
    MMUILabel *_bigTipFaceTitle;
    MMUILabel *_businessTitle;
    UIImageView *_bigTipBg;
    _Bool _finished;
    _Bool _animating;
    NSString *_curErrorTip;
    NSString *_curMotionTip;
    NSString *_businessTip;
}

@property(retain, nonatomic) NSString *businessTip; // @synthesize businessTip=_businessTip;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onFeedback;
- (void)retryButtonDone;
- (void)closeButtonDone;
- (void)cancelButtonDone;
- (void)procedureDidFailed:(id)arg1 canRetry:(_Bool)arg2;
- (void)showFinish;
- (void)procedureDidFinish;
- (void)procedureDidDoneLoading:(id)arg1;
- (void)procedureDidStartHightLight;
- (void)procedurePreStartReflectLight;
- (void)procedureDidStartReflectLight;
- (void)startColorCircleAnimation;
- (void)updateColorCircle;
- (void)setColor:(unsigned int)arg1;
- (void)resetColor;
- (void)procedureDidStartDetectFace;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned long long)arg2 failedType:(long long)arg3;
- (void)attachPreviewLayer:(id)arg1;
- (void)initCancelBtn;
- (void)viewDidAppear;
- (void)initFaceRectView;
- (void)initBitTipTitle:(id)arg1;
- (void)initView;
- (void)resetViews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <FaceRecogReflectLightViewDelegate> delegate; // @dynamic delegate;

@end

