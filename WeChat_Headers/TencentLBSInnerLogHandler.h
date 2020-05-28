//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TencentLBSInnerLogHandler : NSObject
{
    _Bool _isSetLogBlock;
    CDUnknownBlockType _logPrintBlock;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property _Bool isSetLogBlock; // @synthesize isSetLogBlock=_isSetLogBlock;
@property(copy, nonatomic) CDUnknownBlockType logPrintBlock; // @synthesize logPrintBlock=_logPrintBlock;
- (void).cxx_destruct;
- (void)tencentLbsPrintLogWith:(id)arg1 withString:(id)arg2;
- (void)tencentReSetLogBlock;
- (void)tencentSetLogBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

