//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface MMOpenVoiceJoinRoomCGIImp : NSObject <PBMessageObserverDelegate>
{
    NSString *_currentRequestAppId;
    CDUnknownBlockType _currentRoomCGICallback;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)cgiJoinRoomWithAppid:(id)arg1 groupId:(id)arg2 signature:(id)arg3 nonceStr:(id)arg4 timeStamp:(int)arg5 privateData:(id)arg6 callback:(CDUnknownBlockType)arg7;

@end

