//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol MinimizeEdgeGestureHandlerDelegate;

@interface MinimizeEdgeGestureHandler : NSObject
{
    _Bool _shouldForceCancel;
    id <MinimizeEdgeGestureHandlerDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) __weak id <MinimizeEdgeGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMinimizationEdgeGesture:(id)arg1;
- (_Bool)isInteracting;
- (void)dealloc;

@end

