//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderItemView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class CAGradientLayer, CALayer, NSString, UIImageView;

@interface ImageReaderItemView : ReaderItemView <MMWebImageViewDelegate>
{
    UIImageView *m_imageIcon;
    CAGradientLayer *m_gradientLayer;
    CALayer *m_coverMaskLayer;
    unsigned int _imageCount;
}

@property(nonatomic) unsigned int imageCount; // @synthesize imageCount=_imageCount;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)topView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

