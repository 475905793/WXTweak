//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAppTaskLoaderContextDelegate-Protocol.h"
#import "WACacheVersionPreCheckerMgrExt-Protocol.h"
#import "WALoadingViewControllerDelegate-Protocol.h"

@class NSString, WAAppTaskLoaderContext, WALoadingViewController, WASerialWorkFlow;
@protocol WAAppTaskLoaderDelegate, WAMinimizeDelegate;

@interface WAAppTaskLoader : NSObject <WALoadingViewControllerDelegate, WAAppTaskLoaderContextDelegate, WACacheVersionPreCheckerMgrExt>
{
    NSString *_appID;
    WAAppTaskLoaderContext *_context;
    CDUnknownBlockType _completeHandler;
    id <WAAppTaskLoaderDelegate> _loaderDelegate;
    WASerialWorkFlow *_firstPageWorkFlow;
    WASerialWorkFlow *_childPageWorkFlow;
    WASerialWorkFlow *_forceRelaunchWorkFlow;
    CDUnknownBlockType _forceRelaunchCompleteHandler;
    WAAppTaskLoaderContext *_forceRelaunchContext;
    id <WAMinimizeDelegate> _minimizeDelegate;
    WALoadingViewController *_loadingVC;
    CDUnknownBlockType _preCheckCacheVersionCompletion;
}

+ (CDUnknownBlockType)blockPushChildWebViewTimeout;
+ (CDUnknownBlockType)blockPushChildWebView;
+ (CDUnknownBlockType)blockSetupChildWebView;
+ (_Bool)getHomePageBaseURL:(id *)arg1 pageRelativeURL:(id *)arg2 withAppID:(id)arg3 contact:(id)arg4 getError:(id *)arg5;
+ (CDUnknownBlockType)blockPageReadyTimeoutWithMillisecond:(long long)arg1;
+ (CDUnknownBlockType)blockPageInitReady;
+ (CDUnknownBlockType)blockCheckSyncUpdatePubLib;
+ (CDUnknownBlockType)blockCheckLaunchPermissionInfo;
+ (CDUnknownBlockType)blockCheckCacheVersion;
+ (CDUnknownBlockType)blockWaitPreCheckCacheVersion;
+ (CDUnknownBlockType)blockPushWebViewTimeout;
+ (CDUnknownBlockType)blockPushWebView;
+ (CDUnknownBlockType)blockShowEnterAnimationTimeout;
+ (CDUnknownBlockType)blockShowEnterAnimation;
+ (CDUnknownBlockType)blockShowLoadingView;
+ (CDUnknownBlockType)blockFetchPreloadAppServiceIfPossible;
+ (id)genLoadingVCWithContext:(id)arg1;
+ (CDUnknownBlockType)blockSetupAppServiceAndWebView;
+ (CDUnknownBlockType)blockWeAppPrivacyConfirm;
@property(copy, nonatomic) CDUnknownBlockType preCheckCacheVersionCompletion; // @synthesize preCheckCacheVersionCompletion=_preCheckCacheVersionCompletion;
@property(retain, nonatomic) WALoadingViewController *loadingVC; // @synthesize loadingVC=_loadingVC;
@property(nonatomic) __weak id <WAMinimizeDelegate> minimizeDelegate; // @synthesize minimizeDelegate=_minimizeDelegate;
@property(retain, nonatomic) WAAppTaskLoaderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)preCheckerContext:(id)arg1 didFinishPreCheckWithResult:(id)arg2;
- (void)onLoadingAnimationDone;
- (void)onAppBrandLoadingViewReturn:(id)arg1;
- (void)resetLoadingViewDelegate;
- (void)releaseLoadingView;
- (void)removeLoadingViewSlient;
- (void)popLoadingView;
- (id)getLoadingViewController;
- (void)showLoadingView;
- (void)fetchPreloadAppServiceIfPossibleWithContact:(id)arg1;
- (void)didFinishCheckInfoDatasWithResult:(id)arg1;
- (void)onDidShowLoadingViewControllerWithPresentingViewController:(id)arg1;
- (void)onWillShowLoadingViewControllerWithPresentingViewController:(id)arg1;
- (void)onDidPresentWithPresentingViewController:(id)arg1;
- (id)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeParentWebView:(id)arg1;
- (void)removeChildWebView:(id)arg1 fromParentWebView:(id)arg2;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParentWebView:(id)arg4;
- (void)onPushWebViewDidAppear;
- (void)onBeforePushWebView;
- (void)setupTaskForSpecificPageMode;
- (void)setupAppServiceAndWebViewWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 baseURL:(id)arg4 pageRelativeURL:(id)arg5 getWebView:(id *)arg6 shouldUseComponentLazyLoad:(_Bool)arg7;
- (void)abortChildPageLoadingWithErrorMessage:(id)arg1;
- (void)cancelFirstPageLoadingWithErrorMessage:(id)arg1;
- (void)abortFirstPageLoadingWithErrorMessage:(id)arg1;
- (void)cancelLoadingAndAlertMsg:(id)arg1 title:(id)arg2;
- (void)cancelLoadingAndJumpToH5:(id)arg1;
- (void)removeChildWebViewOnFail;
- (void)runChildPageWorkFlow;
- (void)cancelForceRelaunchWorkFlow;
- (void)cancelChildPageWorkFlow;
- (void)cancelFirstPageWorkFlow;
- (void)finalyRunFirstPageWorkFlow;
- (void)runFirstPageWorkFlow;
- (void)callCompleteHandler:(unsigned int)arg1 message:(id)arg2;
- (id)appID;
- (void)forceRelaunchUpdatePackageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (id)ignoreWebViewDidAppearListOnReloadFirstPage;
- (void)loadChildPageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)loadFirstPageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

