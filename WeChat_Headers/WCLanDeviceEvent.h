//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class JSEvent, NSString;

@interface WCLanDeviceEvent : MMObject
{
    NSString *m_deviceId;
    JSEvent *m_event;
    long long m_cmd;
}

@property(nonatomic) long long m_cmd; // @synthesize m_cmd;
@property(retain, nonatomic) JSEvent *m_event; // @synthesize m_event;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
- (void).cxx_destruct;

@end

