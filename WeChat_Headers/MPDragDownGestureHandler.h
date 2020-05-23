//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MPCustomInteractiveHandler, MPDragDownGestureRecognizer, NSString, UIGestureRecognizer;
@protocol MPDragDownGestureHandlerDelegate;

@interface MPDragDownGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isShouldBegin;
    _Bool _isRunning;
    UIGestureRecognizer *_recognizeSimultaneouslyGestureRecognizer;
    MPCustomInteractiveHandler *_interactiveHandler;
    id <MPDragDownGestureHandlerDelegate> _delegate;
    MPDragDownGestureRecognizer *_recognizer;
    double _distance;
}

@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool isShouldBegin; // @synthesize isShouldBegin=_isShouldBegin;
@property(retain, nonatomic) MPDragDownGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak id <MPDragDownGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MPCustomInteractiveHandler *interactiveHandler; // @synthesize interactiveHandler=_interactiveHandler;
@property(nonatomic) __weak UIGestureRecognizer *recognizeSimultaneouslyGestureRecognizer; // @synthesize recognizeSimultaneouslyGestureRecognizer=_recognizeSimultaneouslyGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleGestureRecognizer:(id)arg1;
- (id)gestureRecognizer;
- (void)clearGesture;
- (void)setupGestureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 interactiveHandler:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

