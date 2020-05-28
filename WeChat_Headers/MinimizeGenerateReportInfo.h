//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MinimizeGenerateReportInfo : NSObject
{
    _Bool _isOverloaded;
    int _generateType;
    unsigned int _generateScene;
    int _taskType;
    int _bizScene;
    int _state;
    unsigned long long _clickTimeStamp;
    NSString *_miniSessionId;
    NSString *_aggreSessionId;
    long long _taskOrder;
    unsigned long long _normalTaskCnt;
    unsigned long long _passiveTaskCnt;
    NSString *_bizId;
    NSString *_bizSubId;
    NSString *_bizName;
}

@property(nonatomic) _Bool isOverloaded; // @synthesize isOverloaded=_isOverloaded;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *bizSubId; // @synthesize bizSubId=_bizSubId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) int bizScene; // @synthesize bizScene=_bizScene;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(nonatomic) unsigned long long passiveTaskCnt; // @synthesize passiveTaskCnt=_passiveTaskCnt;
@property(nonatomic) unsigned long long normalTaskCnt; // @synthesize normalTaskCnt=_normalTaskCnt;
@property(nonatomic) long long taskOrder; // @synthesize taskOrder=_taskOrder;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(retain, nonatomic) NSString *miniSessionId; // @synthesize miniSessionId=_miniSessionId;
@property(nonatomic) unsigned int generateScene; // @synthesize generateScene=_generateScene;
@property(nonatomic) int generateType; // @synthesize generateType=_generateType;
@property(nonatomic) unsigned long long clickTimeStamp; // @synthesize clickTimeStamp=_clickTimeStamp;
- (void).cxx_destruct;

@end

