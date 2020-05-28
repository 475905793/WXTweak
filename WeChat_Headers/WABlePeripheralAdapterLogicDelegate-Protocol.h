//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBATTRequest, CBCentral, CBPeripheralManager, NSArray, NSString;

@protocol WABlePeripheralAdapterLogicDelegate <NSObject>
- (void)onDisconnected:(NSString *)arg1 central:(CBCentral *)arg2;
- (void)onConnected:(NSString *)arg1 central:(CBCentral *)arg2;
- (void)onReceiveWriteRequests:(NSArray *)arg1 serverID:(NSString *)arg2;
- (void)onReceiveReadRequest:(CBATTRequest *)arg1 serverID:(NSString *)arg2;
- (void)didStartAdvertising:(NSString *)arg1 errMsg:(NSString *)arg2;
- (void)didAddService:(NSString *)arg1 serverID:(NSString *)arg2 errMsg:(NSString *)arg3 errCode:(int)arg4;
- (void)onBleStateChanged:(CBPeripheralManager *)arg1;
@end

