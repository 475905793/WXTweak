//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CBPeripheral, NSMutableDictionary, NSNumber, NSString, WABlueToothDeviceAdData;

@interface WABlueToothDevice : MMObject
{
    NSMutableDictionary *m_services;
    NSMutableDictionary *m_characteristics;
    NSString *_uuid;
    NSString *_name;
    NSNumber *_RSSI;
    WABlueToothDeviceAdData *_adData;
    CBPeripheral *_peripheral;
}

@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) WABlueToothDeviceAdData *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)deviceDictionary;
- (void)clearInfo;
- (id)characteristicForUUID:(id)arg1 serviceUUID:(id)arg2;
- (id)serviceForUUID:(id)arg1;
- (void)addCharacteristics:(id)arg1 forService:(id)arg2;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2;
- (void)addServices:(id)arg1;
- (void)addService:(id)arg1;
- (id)init;

@end

