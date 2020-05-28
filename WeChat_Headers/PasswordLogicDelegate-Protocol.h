//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PasswordLogic;

@protocol PasswordLogicDelegate <NSObject>

@optional
- (void)passwordLogicPause:(PasswordLogic *)arg1;
- (void)passwordLogicStart:(PasswordLogic *)arg1;
- (void)passwordLogicCancel:(PasswordLogic *)arg1;
- (void)unknownFail:(PasswordLogic *)arg1;
- (void)checkHaveNotSetPassword:(PasswordLogic *)arg1;
- (void)checkHaveSetPassword:(PasswordLogic *)arg1;
- (void)setPasswordFail:(PasswordLogic *)arg1;
- (void)setPasswordOK:(PasswordLogic *)arg1;
- (void)verifyPasswordFail:(PasswordLogic *)arg1;
- (void)verifyPasswordError:(PasswordLogic *)arg1;
- (void)verifyPasswordOK:(NSString *)arg1 logic:(PasswordLogic *)arg2;
@end

