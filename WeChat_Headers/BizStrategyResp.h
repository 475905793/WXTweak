//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppMsgCoverPreloadInfo, BaseResponse, BizStrategyControlInfo, PaySubscribeInfo, ProfilePreloadInfo, VideoChannelControlInfo;

@interface BizStrategyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) VideoChannelControlInfo *channelInfo; // @dynamic channelInfo;
@property(retain, nonatomic) BizStrategyControlInfo *controlInfo; // @dynamic controlInfo;
@property(retain, nonatomic) AppMsgCoverPreloadInfo *coverPreloadInfo; // @dynamic coverPreloadInfo;
@property(retain, nonatomic) PaySubscribeInfo *userPaySubscribeInfo; // @dynamic userPaySubscribeInfo;
@property(retain, nonatomic) ProfilePreloadInfo *userProfilePreloadInfo; // @dynamic userProfilePreloadInfo;

@end

