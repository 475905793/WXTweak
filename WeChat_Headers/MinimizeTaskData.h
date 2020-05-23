//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class MinimizeTaskContainerInfo, MinimizeTaskExtInfo, NSArray, NSData, NSString;

@interface MinimizeTaskData : MMObject <PBCoding>
{
    _Bool isForeground;
    _Bool shouldIgnoreSubtitleWhenRecoverTask;
    _Bool _canMaximizeForStateView;
    _Bool _isNew;
    unsigned int _taskStateType;
    int _currentTransitionType;
    NSString *taskBizName;
    NSString *taskBizKey;
    NSData *taskContextData;
    NSString *taskDefaultIconName;
    NSData *taskIconImgData;
    NSString *taskIconUrl;
    NSString *taskTitle;
    NSString *taskSubtitle;
    NSString *taskKey;
    NSString *delegateClassName;
    NSString *taskTitleTail;
    MinimizeTaskExtInfo *taskExtInfo;
    NSArray *_taskStateList;
    NSString *_taskSubtitleTail;
    MinimizeTaskContainerInfo *_containerInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_shouldIgnoreSubtitleWhenRecoverTask;
+ (void)PBArrayAdd_taskExtInfo;
+ (void)PBArrayAdd_taskTitleTail;
+ (void)PBArrayAdd_delegateClassName;
+ (void)PBArrayAdd_taskKey;
+ (void)PBArrayAdd_isForeground;
+ (void)PBArrayAdd_taskSubtitle;
+ (void)PBArrayAdd_taskTitle;
+ (void)PBArrayAdd_taskIconUrl;
+ (void)PBArrayAdd_taskIconImgData;
+ (void)PBArrayAdd_taskDefaultIconName;
+ (void)PBArrayAdd_taskContextData;
+ (void)PBArrayAdd_taskBizKey;
+ (void)PBArrayAdd_taskBizName;
@property(nonatomic) int currentTransitionType; // @synthesize currentTransitionType=_currentTransitionType;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool canMaximizeForStateView; // @synthesize canMaximizeForStateView=_canMaximizeForStateView;
@property(retain, nonatomic) MinimizeTaskContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(retain, nonatomic) NSString *taskSubtitleTail; // @synthesize taskSubtitleTail=_taskSubtitleTail;
@property(nonatomic) unsigned int taskStateType; // @synthesize taskStateType=_taskStateType;
@property(retain, nonatomic) NSArray *taskStateList; // @synthesize taskStateList=_taskStateList;
@property(nonatomic) _Bool shouldIgnoreSubtitleWhenRecoverTask; // @synthesize shouldIgnoreSubtitleWhenRecoverTask;
@property(retain, nonatomic) MinimizeTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo;
@property(retain, nonatomic) NSString *taskTitleTail; // @synthesize taskTitleTail;
@property(retain, nonatomic) NSString *delegateClassName; // @synthesize delegateClassName;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey;
@property(nonatomic) _Bool isForeground; // @synthesize isForeground;
@property(retain, nonatomic) NSString *taskSubtitle; // @synthesize taskSubtitle;
@property(retain, nonatomic) NSString *taskTitle; // @synthesize taskTitle;
@property(retain, nonatomic) NSString *taskIconUrl; // @synthesize taskIconUrl;
@property(retain, nonatomic) NSData *taskIconImgData; // @synthesize taskIconImgData;
@property(retain, nonatomic) NSString *taskDefaultIconName; // @synthesize taskDefaultIconName;
@property(retain, nonatomic) NSData *taskContextData; // @synthesize taskContextData;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey;
@property(retain, nonatomic) NSString *taskBizName; // @synthesize taskBizName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isStateEqualTo:(id)arg1;
- (_Bool)isTaskIconEqualTo:(id)arg1;
- (void)copyInternalInfoFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

