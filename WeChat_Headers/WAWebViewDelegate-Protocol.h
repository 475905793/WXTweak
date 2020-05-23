//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIViewController, WAAppTaskExtInfo, WAGameExtraInfo, WAPermissionResult, WAWebViewController;

@protocol WAWebViewDelegate <NSObject>

@optional
- (void)webviewNeedDismissSlientlyBelowMaskViewOnIpad:(WAWebViewController *)arg1;
- (void)webviewUpdateMaskViewForIpad:(WAWebViewController *)arg1;
- (void)webviewDidShow404ErrorView:(WAWebViewController *)arg1;
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned int)arg2;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isRemoteDebugMode;
- (void)webviewDidResize:(WAWebViewController *)arg1;
- (WAGameExtraInfo *)getGameExtraInfo;
- (WAAppTaskExtInfo *)getTaskExtInfo;
- (void)triggerTaskRouteToHomePage:(WAWebViewController *)arg1;
- (unsigned long long)getWebViewDepthInStack;
- (WAWebViewController *)getLastWebViewFrom:(WAWebViewController *)arg1;
- (WAWebViewController *)getFirstWebViewFrom:(WAWebViewController *)arg1;
- (_Bool)taskUsePreload;
- (void)publishPostMessage:(NSDictionary *)arg1 fromWebView:(WAWebViewController *)arg2;
- (_Bool)hasPermissionToShowActionSheetMenuType:(unsigned int)arg1;
- (_Bool)checkWebViewRunMode:(NSString *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3 fromWebView:(WAWebViewController *)arg4;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2 byTempPermission:(NSArray *)arg3;
- (_Bool)isForceEnableClose;
- (_Bool)isNeedWriteGameEvaluateBeforeExit;
- (_Bool)isNeedWriteEvaluateBeforeExit;
- (void)firstPageWebViewDidSweepBack:(WAWebViewController *)arg1;
- (_Bool)webViewIsFirstPage:(WAWebViewController *)arg1;
- (void)webViewClickCustomRightButton:(WAWebViewController *)arg1;
- (void)webViewClickExitButton:(WAWebViewController *)arg1;
- (void)webViewBeforeClickReturnButton:(WAWebViewController *)arg1;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2 reason:(long long)arg3;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2;
- (void)enterBackgroundFrom:(WAWebViewController *)arg1 mode:(long long)arg2 animate:(_Bool)arg3 completion:(void (^)(void))arg4;
- (WAWebViewController *)popWebViewCount:(int)arg1 fromWebView:(WAWebViewController *)arg2 completion:(void (^)(void))arg3;
- (void)popToWebView:(WAWebViewController *)arg1 fromWebView:(WAWebViewController *)arg2 completion:(void (^)(void))arg3;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1 animated:(_Bool)arg2;
- (void)webViewDidSwitchTab:(WAWebViewController *)arg1;
- (WAWebViewController *)getPreviousWebViewFromWebView:(WAWebViewController *)arg1;
- (WAWebViewController *)getTabChildWebViewWithRelativeURL:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)webViewOnPageReload:(WAWebViewController *)arg1 withRouteInfo:(NSDictionary *)arg2;
- (void)webViewInjectScriptFail:(WAWebViewController *)arg1;
- (void)webviewDidManuallyTerminated:(WAWebViewController *)arg1;
- (void)webViewDidTerminateInContentProcess:(WAWebViewController *)arg1;
- (void)webViewOnBeforeEveluateIndexData:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didPresent:(UIViewController *)arg2;
- (void)webViewDidPush:(WAWebViewController *)arg1;
- (void)webViewDidBeDismissed:(WAWebViewController *)arg1;
- (void)webViewDidBePoped:(WAWebViewController *)arg1;
- (void)webViewDidDisappear:(WAWebViewController *)arg1;
- (void)webViewDidAppear:(WAWebViewController *)arg1;
@end

