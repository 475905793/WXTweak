//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayWalletLockVerifyLogic;

@protocol WCPayWalletLockVerifyLogicDelegate <NSObject>
- (void)walletLockVerifySuccess:(WCPayWalletLockVerifyLogic *)arg1;

@optional
- (void)walletLockVerifyCancel:(WCPayWalletLockVerifyLogic *)arg1;
- (_Bool)walletLockVerifyLogicNeedBlock:(WCPayWalletLockVerifyLogic *)arg1;
@end

