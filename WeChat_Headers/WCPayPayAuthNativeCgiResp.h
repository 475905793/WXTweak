//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WalletMixSpGenprepayResp;

@interface WCPayPayAuthNativeCgiResp : NSObject
{
    unsigned int _m_wxErrorType;
    unsigned int _m_retCode;
    NSString *_m_wxErrorMsg;
    NSString *_m_retMsg;
    NSString *_m_reqKey;
    NSString *_m_appId;
    NSString *_m_appSource;
    NSString *_m_productId;
    WalletMixSpGenprepayResp *_m_walletMixSpGenprepayResp;
}

+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
@property(retain, nonatomic) WalletMixSpGenprepayResp *m_walletMixSpGenprepayResp; // @synthesize m_walletMixSpGenprepayResp=_m_walletMixSpGenprepayResp;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId=_m_productId;
@property(retain, nonatomic) NSString *m_appSource; // @synthesize m_appSource=_m_appSource;
@property(retain, nonatomic) NSString *m_appId; // @synthesize m_appId=_m_appId;
@property(retain, nonatomic) NSString *m_reqKey; // @synthesize m_reqKey=_m_reqKey;
@property(retain, nonatomic) NSString *m_retMsg; // @synthesize m_retMsg=_m_retMsg;
@property(nonatomic) unsigned int m_retCode; // @synthesize m_retCode=_m_retCode;
@property(retain, nonatomic) NSString *m_wxErrorMsg; // @synthesize m_wxErrorMsg=_m_wxErrorMsg;
@property(nonatomic) unsigned int m_wxErrorType; // @synthesize m_wxErrorType=_m_wxErrorType;
- (void).cxx_destruct;

@end

