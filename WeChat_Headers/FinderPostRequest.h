//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderObjectDesc, NSMutableArray, NSString;

@interface FinderPostRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baserequest; // @dynamic baserequest;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(nonatomic) float feedLatitude; // @dynamic feedLatitude;
@property(nonatomic) float feedLongitude; // @dynamic feedLongitude;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int isCreatedInFinder; // @dynamic isCreatedInFinder;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned int originalFlag; // @dynamic originalFlag;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;
@property(retain, nonatomic) NSMutableArray *topics; // @dynamic topics;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end
