//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCSpeedTestResult : NSObject
{
    float _upLostRate;
    float _downLostRate;
    unsigned int _rtt;
    NSString *_ip;
    long long _quality;
}

@property(nonatomic) unsigned int rtt; // @synthesize rtt=_rtt;
@property(nonatomic) float downLostRate; // @synthesize downLostRate=_downLostRate;
@property(nonatomic) float upLostRate; // @synthesize upLostRate=_upLostRate;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (id)description;

@end

