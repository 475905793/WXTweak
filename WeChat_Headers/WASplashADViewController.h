//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WAWebViewControllerMenuActionCustomDelegate-Protocol.h"
#import "WAWebViewMutiFuncMenuViewDataSource-Protocol.h"
#import "WAWebViewMutiFuncMenuViewDelegate-Protocol.h"

@class NSString, WASplashAdRootView, WAWebViewMutiFuncMenuView;
@protocol WASplashADViewControllerDelegate;

@interface WASplashADViewController : MMUIViewController <WAWebViewMutiFuncMenuViewDelegate, WAWebViewMutiFuncMenuViewDataSource, WAWebViewControllerMenuActionCustomDelegate>
{
    unsigned long long _scene;
    id <WASplashADViewControllerDelegate> _delegate;
    WAWebViewMutiFuncMenuView *_funcMenuView;
    WASplashAdRootView *_adRootView;
}

@property(retain, nonatomic) WASplashAdRootView *adRootView; // @synthesize adRootView=_adRootView;
@property(retain, nonatomic) WAWebViewMutiFuncMenuView *funcMenuView; // @synthesize funcMenuView=_funcMenuView;
@property(nonatomic) __weak id <WASplashADViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (_Bool)webViewControllerMenuMustNotHandleMenuShowOrDismiss:(id)arg1;
- (_Bool)webViewControllerMenuMustNotShowADMenuItem:(id)arg1;
- (_Bool)webViewControllerMenuMustShowGoHomeInWeApp:(id)arg1;
- (_Bool)webViewControllerMenuMustNotShareTimeline:(id)arg1;
- (_Bool)webViewControllerMenuMustNotShare:(id)arg1;
- (unsigned long long)leftButtonTypeForMultiFuncMenuView:(id)arg1;
- (void)onWebViewMenuAllExit;
- (void)onWebViewMenuMore;
- (void)onWebViewMenuReturn;
- (id)backgroundColor;
- (void)onClickButtonClicked:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (_Bool)hidesStatusBar;
- (_Bool)useCustomNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithScene:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

