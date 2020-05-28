//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMDiskUsageScannerDelegate-Protocol.h"

@class MMDiskUsageScaner, NSDictionary, NSString;
@protocol MMDiskUsageRepoterDelegate, OS_dispatch_queue;

@interface MMDiskUsageReporter : NSObject <MMDiskUsageScannerDelegate>
{
    _Bool _isRunning;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <MMDiskUsageRepoterDelegate> _delegate;
    NSDictionary *_sizeReportIdKeyInfoDic;
    NSDictionary *_fileNumReportIdKeyInfoDic;
    MMDiskUsageScaner *_reportScanner;
}

@property(retain, nonatomic) MMDiskUsageScaner *reportScanner; // @synthesize reportScanner=_reportScanner;
@property(retain, nonatomic) NSDictionary *fileNumReportIdKeyInfoDic; // @synthesize fileNumReportIdKeyInfoDic=_fileNumReportIdKeyInfoDic;
@property(retain, nonatomic) NSDictionary *sizeReportIdKeyInfoDic; // @synthesize sizeReportIdKeyInfoDic=_sizeReportIdKeyInfoDic;
@property(nonatomic) __weak id <MMDiskUsageRepoterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)setupReportInfo;
- (void)reportDelFileToIDKey:(id)arg1 vecIDKey:(vector_2633e87e *)arg2;
- (void)reportFileSize:(unsigned int)arg1 andFileNum:(unsigned int)arg2 toBizType:(int)arg3 vecIDKey:(vector_2633e87e *)arg4;
- (void)callReportFinishedOnMainThread;
- (void)removeReportDataFile;
- (void)reportOnThread:(id)arg1;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanStart;
- (void)report;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

