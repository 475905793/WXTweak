//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPMTKViewDelegate-Protocol.h"

@class NSString, TPMTKView, TPMetalRenderProxy, UIView;
@protocol MTLDevice;

@interface TPMetalVideoRenderImpl : NSObject <TPMTKViewDelegate>
{
    NSObject *_renderLock;
    _Bool _needUpdateRenderTarget;
    _Bool _metalActivePaused;
    int _gravity;
    int _tryLockErrorCount;
    id <MTLDevice> _metalDevice;
    TPMetalRenderProxy *_metalRender;
    TPMTKView *_mtkView;
    struct TPFrame *_videoFrame;
    UIView *_targetView;
}

@property(nonatomic) int tryLockErrorCount; // @synthesize tryLockErrorCount=_tryLockErrorCount;
@property _Bool metalActivePaused; // @synthesize metalActivePaused=_metalActivePaused;
@property(nonatomic) int gravity; // @synthesize gravity=_gravity;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) struct TPFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) TPMTKView *mtkView; // @synthesize mtkView=_mtkView;
@property(retain, nonatomic) TPMetalRenderProxy *metalRender; // @synthesize metalRender=_metalRender;
@property(retain, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
- (void).cxx_destruct;
- (void)reshape:(id)arg1;
- (void)render:(id)arg1;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (long long)getContentModeFromGravity:(int)arg1;
- (void)setVideoGravity:(int)arg1;
- (void)updateRenderTarget;
- (void)setRenderTarget:(void *)arg1;
- (void)setDrawableSize;
- (int)drawFrame:(struct TPFrame *)arg1;
- (void)destory;
- (_Bool)setup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

