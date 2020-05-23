//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface QQEmojiViewWithPreview : MMUIView
{
    _Bool _needReloadPreview;
    UIImageView *_m_emojiImageView;
    UILabel *_m_emojiLabel;
    UIImageView *_m_emojiPreviewBackView;
    UILabel *_m_emojiDescriptionLabel;
    UIButton *_m_emojiPreviewView;
    NSString *_m_emojiKey;
}

@property(nonatomic) _Bool needReloadPreview; // @synthesize needReloadPreview=_needReloadPreview;
@property(retain, nonatomic) NSString *m_emojiKey; // @synthesize m_emojiKey=_m_emojiKey;
@property(retain, nonatomic) UIButton *m_emojiPreviewView; // @synthesize m_emojiPreviewView=_m_emojiPreviewView;
@property(retain, nonatomic) UILabel *m_emojiDescriptionLabel; // @synthesize m_emojiDescriptionLabel=_m_emojiDescriptionLabel;
@property(retain, nonatomic) UIImageView *m_emojiPreviewBackView; // @synthesize m_emojiPreviewBackView=_m_emojiPreviewBackView;
@property(retain, nonatomic) UILabel *m_emojiLabel; // @synthesize m_emojiLabel=_m_emojiLabel;
@property(retain, nonatomic) UIImageView *m_emojiImageView; // @synthesize m_emojiImageView=_m_emojiImageView;
- (void).cxx_destruct;
- (void)reloadPreview;
- (void)hidePreview;
- (void)showPreview;
- (void)showEmojiLabel;
- (void)updateEmojiImageViewWithImage:(id)arg1;
- (_Bool)changeKey:(id)arg1 needSyncLoad:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

