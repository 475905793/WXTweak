//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CameraScannerViewWrapper;

@interface ScanQRCodeLogicParams : NSObject
{
    _Bool _bNeedCameraScan;
    _Bool _bShowMyQRCodeBtn;
    int _codeType;
    unsigned int _fromScene;
    unsigned long long _enterScene;
    CameraScannerViewWrapper *_wrapper;
    unsigned long long _longPressScanScene;
}

@property(nonatomic) unsigned long long longPressScanScene; // @synthesize longPressScanScene=_longPressScanScene;
@property(retain, nonatomic) CameraScannerViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) _Bool bShowMyQRCodeBtn; // @synthesize bShowMyQRCodeBtn=_bShowMyQRCodeBtn;
@property(nonatomic) _Bool bNeedCameraScan; // @synthesize bNeedCameraScan=_bNeedCameraScan;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) int codeType; // @synthesize codeType=_codeType;
- (void).cxx_destruct;
- (id)initWithCodeType:(int)arg1 fromScene:(unsigned int)arg2 enterScene:(unsigned long long)arg3 bNeedCameraScan:(_Bool)arg4 bShowMyQRCodeBtn:(_Bool)arg5 wrapper:(id)arg6;
- (id)initWithCodeType:(int)arg1 fromScene:(unsigned int)arg2;

@end

