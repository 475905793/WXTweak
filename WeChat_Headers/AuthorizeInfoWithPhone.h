//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthenticNameInfo, AuthorizeWording, GetAllPhoneData, NSString, ScopeWording;

@interface AuthorizeInfoWithPhone : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GetAllPhoneData *allphoneInfo; // @dynamic allphoneInfo;
@property(retain, nonatomic) NSString *applyWording; // @dynamic applyWording;
@property(retain, nonatomic) AuthorizeWording *authorizeWording; // @dynamic authorizeWording;
@property(retain, nonatomic) NSString *phoneWording; // @dynamic phoneWording;
@property(retain, nonatomic) AuthenticNameInfo *realnameInfo; // @dynamic realnameInfo;
@property(retain, nonatomic) NSString *realnameWording; // @dynamic realnameWording;
@property(retain, nonatomic) ScopeWording *scopeWording; // @dynamic scopeWording;

@end

