//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimerLabel, MMUIButton, UIButton, UILabel, VoipDescriptionButton;
@protocol MultiTalkTalkingOperateViewDelegate, MultiTalkTalkingOperateViewLayoutDelegate;

@interface MultiTalkTalkingOperateView : UIView
{
    _Bool _isOperateViewFolded;
    _Bool _m_videoOn;
    _Bool _m_muteOn;
    _Bool _m_speakerOn;
    MMUIButton *_foldedBtn;
    MMTimerLabel *_m_timerView;
    UILabel *_m_statusLabel;
    VoipDescriptionButton *_m_videoButton;
    VoipDescriptionButton *_m_muteButton;
    VoipDescriptionButton *_m_speakerButton;
    UIButton *_m_addMemberButton;
    UIButton *_m_minimizeButton;
    UIButton *_m_hangupButton;
    UIButton *_m_flipCameraButton;
    id <MultiTalkTalkingOperateViewDelegate> _m_delegate;
    id <MultiTalkTalkingOperateViewLayoutDelegate> _m_layoutDelegate;
}

@property(nonatomic) _Bool m_speakerOn; // @synthesize m_speakerOn=_m_speakerOn;
@property(nonatomic) _Bool m_muteOn; // @synthesize m_muteOn=_m_muteOn;
@property(nonatomic) _Bool m_videoOn; // @synthesize m_videoOn=_m_videoOn;
@property(nonatomic) __weak id <MultiTalkTalkingOperateViewLayoutDelegate> m_layoutDelegate; // @synthesize m_layoutDelegate=_m_layoutDelegate;
@property(nonatomic) __weak id <MultiTalkTalkingOperateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIButton *m_flipCameraButton; // @synthesize m_flipCameraButton=_m_flipCameraButton;
@property(retain, nonatomic) UIButton *m_hangupButton; // @synthesize m_hangupButton=_m_hangupButton;
@property(retain, nonatomic) UIButton *m_minimizeButton; // @synthesize m_minimizeButton=_m_minimizeButton;
@property(retain, nonatomic) UIButton *m_addMemberButton; // @synthesize m_addMemberButton=_m_addMemberButton;
@property(retain, nonatomic) VoipDescriptionButton *m_speakerButton; // @synthesize m_speakerButton=_m_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *m_muteButton; // @synthesize m_muteButton=_m_muteButton;
@property(retain, nonatomic) VoipDescriptionButton *m_videoButton; // @synthesize m_videoButton=_m_videoButton;
@property(retain, nonatomic) UILabel *m_statusLabel; // @synthesize m_statusLabel=_m_statusLabel;
@property(retain, nonatomic) MMTimerLabel *m_timerView; // @synthesize m_timerView=_m_timerView;
@property(retain, nonatomic) MMUIButton *foldedBtn; // @synthesize foldedBtn=_foldedBtn;
@property(nonatomic) _Bool isOperateViewFolded; // @synthesize isOperateViewFolded=_isOperateViewFolded;
- (void).cxx_destruct;
- (void)onClickFoldedBtn;
- (void)onFlipCameraButtonClick;
- (void)onHangupButtonClick;
- (void)onSpeakerButtonClick;
- (void)onMuteButtonClick;
- (void)onVideoButtonClick;
- (void)layoutSubviews;
- (void)initFlipCameraButton;
- (void)initHangupButton;
- (void)initSpeakerButton;
- (void)initMuteButton;
- (void)initVideoButton;
- (void)initStatusLabel;
- (void)initFoldedButton;
- (void)initTimerView;
- (void)relayoutPanelButton;
- (void)updateStatusWording:(id)arg1;
- (void)reloadHeadView;
- (_Bool)videoSelected;
- (_Bool)MuteSelected;
- (_Bool)SpeakerSelected;
- (void)updateFlipCameraButtonHidden:(_Bool)arg1;
- (void)updateAddMemberEnabled:(_Bool)arg1;
- (void)updateMuteButtonEnabled:(_Bool)arg1;
- (void)updateVideoButtonEnabled:(_Bool)arg1;
- (void)updateSpeakerButtonEnabled:(_Bool)arg1;
- (void)updateMuteButtonSelected:(_Bool)arg1;
- (void)updateVideoButtonSelected:(_Bool)arg1;
- (void)updateSpeakerButtonSelected:(_Bool)arg1;
- (void)updateLayoutDelegate:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (long long)currentDuration;
- (void)restartTimer;
- (void)updateStatusLabelHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)viewSize;
- (void)showOperateView;
- (void)hideOperateView;

@end

