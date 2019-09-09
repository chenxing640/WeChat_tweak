//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain, nonatomic) WABlueToothDeviceAdData *adData; // @synthesize adData=_adData;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2;
- (void)addCharacteristics:(id)arg1 forService:(id)arg2;
- (void)addService:(id)arg1;
- (void)addServices:(id)arg1;
- (id)characteristicForUUID:(id)arg1 serviceUUID:(id)arg2;
- (void)clearInfo;
- (id)deviceDictionary;
- (id)init;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (id)serviceForUUID:(id)arg1;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end
