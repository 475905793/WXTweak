//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ExposeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumPhotoId; // @dynamic albumPhotoId;
@property(nonatomic) unsigned int albumType; // @dynamic albumType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *exposeContent; // @dynamic exposeContent;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned long long snsId; // @dynamic snsId;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

