//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ABTestItem, NSArray, NSString;

@protocol EmoticonDescMgrExt

@optional
- (void)onGetEmoticonDescNoResult:(NSString *)arg1;
- (void)onGetEmoticonDesc:(NSString *)arg1 emoticonWrapList:(NSArray *)arg2 abTestItem:(ABTestItem *)arg3;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(NSString *)arg3;
- (void)onGetEmoticonDesc:(NSString *)arg1 descList:(NSArray *)arg2;
@end

