//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCFinderMentionExt <NSObject>

@optional
- (void)onFinderMentionLocalReadIdChangeWithType:(unsigned long long)arg1;
- (void)onFinderMarkAllMentionRead;
- (void)onFinderMentionCountReload:(unsigned long long)arg1;
- (void)onFinderMentionDelete:(NSArray *)arg1;
- (void)onFinderMentionAdd:(NSArray *)arg1;
@end

