//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAuthenticationPayVerifyBindStruct : NSObject
{
    unsigned int m_flag;
    unsigned int m_uiPayScene;
    unsigned int m_uiPayChannel;
    NSString *m_payPassword;
    NSString *m_payKey;
    NSString *m_payToken;
    NSString *m_verifySMS;
    unsigned int _ignore_bind;
}

@property(nonatomic) unsigned int ignore_bind; // @synthesize ignore_bind=_ignore_bind;
@property(retain, nonatomic) NSString *m_verifySMS; // @synthesize m_verifySMS;
@property(retain, nonatomic) NSString *m_payToken; // @synthesize m_payToken;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(retain, nonatomic) NSString *m_payPassword; // @synthesize m_payPassword;
@property(retain, nonatomic) NSString *m_payKey; // @synthesize m_payKey;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;
- (void).cxx_destruct;
- (void)dealloc;

@end

