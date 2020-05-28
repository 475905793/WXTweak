//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAJSCoreService;

@interface WAJSContextPluginScheduler : NSObject
{
    WAJSCoreService *_ownerContext;
    NSMutableDictionary *_pluginName2InstanceDic;
}

@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
@property(readonly, nonatomic) __weak WAJSCoreService *ownerContext; // @synthesize ownerContext=_ownerContext;
- (void).cxx_destruct;
- (void)setWAAppTaskRunningState:(unsigned long long)arg1;
- (void)setWAAppTaskState:(unsigned long long)arg1;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)commonCreatePluginWithPluginConfigArray:(id)arg1;
- (void)loadPluginWhenInit;
- (void)loadingInitPluginArray;
- (void)dealloc;
- (id)initWithOwnerJSContext:(id)arg1;

@end

