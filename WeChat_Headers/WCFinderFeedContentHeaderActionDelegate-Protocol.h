//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderFeedContentHeaderActionDelegate <NSObject>

@optional
- (void)onHeaderMoreClickAction;
- (void)showSpamTipsWithString:(NSString *)arg1;
- (void)followStatueChanged:(NSString *)arg1 isFollow:(_Bool)arg2;
- (void)clickAvatar:(NSString *)arg1;
@end

