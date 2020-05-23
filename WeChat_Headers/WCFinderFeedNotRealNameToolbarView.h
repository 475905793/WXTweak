//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"

@class NSString;
@protocol WCFinderFeedNotRealNameToolbarViewDelegate;

@interface WCFinderFeedNotRealNameToolbarView : UIView <ILinkEventExt>
{
    id <WCFinderFeedNotRealNameToolbarViewDelegate> _delegate;
}

+ (double)toolbarHeightWith:(double)arg1;
@property(nonatomic) __weak id <WCFinderFeedNotRealNameToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickRetryAction;
- (void)clickCancelAction;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

