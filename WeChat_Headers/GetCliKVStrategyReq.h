//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HeavyUserReqInfo, NSData;

@interface GetCliKVStrategyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int generalVersion; // @dynamic generalVersion;
@property(retain, nonatomic) HeavyUserReqInfo *heavyUserInfo; // @dynamic heavyUserInfo;
@property(nonatomic) unsigned int kvgeneralVersion; // @dynamic kvgeneralVersion;
@property(nonatomic) unsigned int kvspecialVersion; // @dynamic kvspecialVersion;
@property(nonatomic) unsigned int kvwhiteOrBlackUinVersion; // @dynamic kvwhiteOrBlackUinVersion;
@property(retain, nonatomic) NSData *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int specialVersion; // @dynamic specialVersion;
@property(nonatomic) unsigned int whiteOrBlackUinVersion; // @dynamic whiteOrBlackUinVersion;

@end

