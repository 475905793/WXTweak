//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SightPreviewViewF2.h"

@class CAEAGLLayer;

@interface SightCameraPreviewView : SightPreviewViewF2
{
    CAEAGLLayer *_previewLayer;
    struct CGSize _videoSize;
}

@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) CAEAGLLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)updatePreviewLayer:(id)arg1 needsEffectManager:(_Bool)arg2;
- (void)setVideoOuputSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

