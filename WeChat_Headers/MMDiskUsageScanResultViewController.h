//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMDiskUsageRepoterDelegate-Protocol.h"
#import "MMDiskUsageScannerDelegate-Protocol.h"

@class MMDiskUsageReporter, MMDiskUsageScaner, NSString, UIButton, UITextView;

@interface MMDiskUsageScanResultViewController : MMUIViewController <MMDiskUsageScannerDelegate, MMDiskUsageRepoterDelegate>
{
    unsigned int _urgentLevel;
    UIButton *_scanStartButton;
    UIButton *_scanStopButton;
    MMDiskUsageScaner *_usageScanner;
    MMDiskUsageReporter *_usageReporter;
    UITextView *_resultTextView;
    NSString *_infoString;
    UIButton *_changeLevelButton;
}

@property(nonatomic) unsigned int urgentLevel; // @synthesize urgentLevel=_urgentLevel;
@property(retain, nonatomic) UIButton *changeLevelButton; // @synthesize changeLevelButton=_changeLevelButton;
@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(retain, nonatomic) UITextView *resultTextView; // @synthesize resultTextView=_resultTextView;
@property(retain, nonatomic) MMDiskUsageReporter *usageReporter; // @synthesize usageReporter=_usageReporter;
@property(retain, nonatomic) MMDiskUsageScaner *usageScanner; // @synthesize usageScanner=_usageScanner;
@property(retain, nonatomic) UIButton *scanStopButton; // @synthesize scanStopButton=_scanStopButton;
@property(retain, nonatomic) UIButton *scanStartButton; // @synthesize scanStartButton=_scanStartButton;
- (void).cxx_destruct;
- (id)getFileInfoWithStoreTimeType:(int)arg1 withAll:(id)arg2;
- (id)getFolderInfoWithFileTyeInUse:(int)arg1 withAll:(id)arg2;
- (id)getFolderInfoWithStoreTimeType:(int)arg1 withAll:(id)arg2;
- (id)getStringWithFileTypeInUse:(int)arg1;
- (id)getStringWithStoreTimeType:(int)arg1;
- (id)getStringForFileDeleteInfo:(id)arg1;
- (id)getStringForFileInfo:(id)arg1;
- (id)getStringForFolderInfo:(id)arg1;
- (id)getSlimPath:(id)arg1;
- (void)sendDataToFileHelper;
- (id)getTextOfScanStat:(id)arg1;
- (id)getDeleteTextOfScanStat:(id)arg1;
- (id)getFileClassDetailInfoOfScanStat:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)onReportFinished;
- (void)changeLevel;
- (void)scanDiskStop;
- (void)scanDiskBegin;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

