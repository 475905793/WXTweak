//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "OpenProfileLogicHelperDelegate-Protocol.h"

@class GetA8KeyLogic, MMLoadingView, NSString, OpenProfileData, OpenProfileLogicHelper;
@protocol OpenProfileBlockViewControllerDelegate;

@interface OpenProfileBlockViewController : MMUIViewController <OpenProfileLogicHelperDelegate>
{
    OpenProfileData *_infoData;
    OpenProfileLogicHelper *_logicHelper;
    MMLoadingView *_loadingView;
    id <OpenProfileBlockViewControllerDelegate> _delegate;
    GetA8KeyLogic *_a8KeyLogic;
}

@property(nonatomic) __weak id <OpenProfileBlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onOpenProfile:(int)arg1 WithErrMsg:(id)arg2 WithContact:(id)arg3 Ticket:(id)arg4;
- (void)onReturn;
- (void)showFailViewWithErrMsg:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithInfoData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

