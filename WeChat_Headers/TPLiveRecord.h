//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TPTimeTracker, TPTimer;

@interface TPLiveRecord : NSObject
{
    TPTimer *_livePeroidTimer;
    TPTimeTracker *_liveBufferingTracker;
    long long _peroidBufferedDurationMs;
    long long _peroidBufferedCount;
}

@property(nonatomic) long long peroidBufferedCount; // @synthesize peroidBufferedCount=_peroidBufferedCount;
@property(nonatomic) long long peroidBufferedDurationMs; // @synthesize peroidBufferedDurationMs=_peroidBufferedDurationMs;
@property(retain, nonatomic) TPTimeTracker *liveBufferingTracker; // @synthesize liveBufferingTracker=_liveBufferingTracker;
@property(retain, nonatomic) TPTimer *livePeroidTimer; // @synthesize livePeroidTimer=_livePeroidTimer;
- (void).cxx_destruct;

@end

