//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdExposureInfo, AdExposureSocialInfo, BaseRequest, NSData, NSString;

@interface AdExposureRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adType; // @dynamic adType;
@property(retain, nonatomic) NSData *atFriendSelfInfo; // @dynamic atFriendSelfInfo;
@property(retain, nonatomic) NSData *atFriendSourceInfo; // @dynamic atFriendSourceInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bssid; // @dynamic bssid;
@property(retain, nonatomic) NSString *descxml; // @dynamic descxml;
@property(nonatomic) unsigned int exposureCnt; // @dynamic exposureCnt;
@property(nonatomic) unsigned int exposureDuration; // @dynamic exposureDuration;
@property(retain, nonatomic) AdExposureInfo *exposureInfo; // @dynamic exposureInfo;
@property(nonatomic) unsigned long long feedDuration; // @dynamic feedDuration;
@property(nonatomic) unsigned long long feedFullDuration; // @dynamic feedFullDuration;
@property(nonatomic) unsigned int flipStatus; // @dynamic flipStatus;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *snsStatext; // @dynamic snsStatext;
@property(retain, nonatomic) AdExposureSocialInfo *socialInfo; // @dynamic socialInfo;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) unsigned long long timestampMs; // @dynamic timestampMs;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *viewid; // @dynamic viewid;

@end

