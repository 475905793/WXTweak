//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WAAlertDialog;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_NativeView_AlerDisplayingtItem : MMObject
{
    WAAlertDialog *_alert;
    id <IWAWebViewPluginDelegate> _delegate;
}

@property(nonatomic) __weak id <IWAWebViewPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAAlertDialog *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;

@end

