//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSFunctionDef, NSDictionary, NSString, WebViewSanboxSessionTask;

@protocol WebViewSanboxSessionTaskDelegate <NSObject>
- (void)mainThread_fetchCurrentSesessionEvalMainFrameBeginTimeStamp:(unsigned long long *)arg1 endTimeStamp:(unsigned long long *)arg2;
- (void)mainThread_onInvokeJsApiFromContext:(NSString *)arg1 params:(NSDictionary *)arg2 callBackId:(NSString *)arg3 task:(WebViewSanboxSessionTask *)arg4;
- (JSFunctionDef *)mainThread_jsapiDef:(NSString *)arg1;
- (void)mainThread_onSendMessageToSanbox:(NSString *)arg1 task:(WebViewSanboxSessionTask *)arg2;
@end

