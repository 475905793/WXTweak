//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BindLinkedinContactRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *linkedinMemberId; // @dynamic linkedinMemberId;
@property(retain, nonatomic) NSString *linkedinName; // @dynamic linkedinName;
@property(retain, nonatomic) NSString *linkedinPublicUrl; // @dynamic linkedinPublicUrl;
@property(retain, nonatomic) NSString *linkedinReturnSignature; // @dynamic linkedinReturnSignature;
@property(retain, nonatomic) NSString *linkedinSignature; // @dynamic linkedinSignature;
@property(retain, nonatomic) NSString *nounce; // @dynamic nounce;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned int visible; // @dynamic visible;

@end

