//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TenpayCertificate : NSObject
{
    struct {
        unsigned short bits;
        unsigned char modulus[256];
        unsigned char exponent[256];
    } m_keyPublic;
    struct {
        unsigned short bits;
        unsigned char modulus[256];
        unsigned char publicExponent[256];
        unsigned char exponent[256];
        unsigned char prime[2][128];
        unsigned char primeExponent[2][128];
        unsigned char coefficient[128];
    } m_keyPrivate;
    int _lastError;
    NSString *myToken;
}

@property(nonatomic) int lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSString *myToken; // @synthesize myToken;
- (id)tokenEncode:(id)arg1 message:(id)arg2;
- (id)getToken:(id)arg1;
- (void)cleanToken:(id)arg1;
- (long long)getRemainTokenNum:(id)arg1;
- (_Bool)setToken:(id)arg1 certId:(id)arg2 useSM4:(_Bool)arg3 sm4Key:(id)arg4;
- (id)privateDecrypt:(id)arg1 message:(id)arg2;
- (_Bool)isCertExist:(id)arg1;
- (_Bool)delCert:(id)arg1;
- (id)certSign:(id)arg1 message:(id)arg2;
- (_Bool)importCert:(id)arg1;
- (id)getCSR:(id)arg1 structureName:(id)arg2 csrType:(int)arg3;
- (id)stringByEscapingForURLQuery:(id)arg1;

@end

