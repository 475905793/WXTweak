//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CameraScanBaseContentView.h"

@class MMSightRecordView, UIButton;
@protocol CameraScanOCRContentViewDelegate;

@interface CameraScanOCRContentView : CameraScanBaseContentView
{
    UIButton *_takePhotoButton;
    MMSightRecordView *_takePhotoView;
}

@property(retain, nonatomic) MMSightRecordView *takePhotoView; // @synthesize takePhotoView=_takePhotoView;
@property(retain, nonatomic) UIButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
- (void).cxx_destruct;
- (void)onTakePhotoBtnPressed:(id)arg1;
- (void)onTakePhotoBtnClicked:(id)arg1;
- (void)hiddenTakePhotoButton;
- (void)showTakePhotoButton;
- (void)layoutSubviews;
- (void)setupTakePhotoView;
- (void)setupTakePhotoButton;
- (void)setupSubViews;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <CameraScanOCRContentViewDelegate> delegate; // @dynamic delegate;

@end

