//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXCLogUtil : NSObject
{
}

+ (void)clearViewLog;
+ (id)getViewLog;
+ (_Bool)isLogUpload;
+ (void)setLogOpen:(_Bool)arg1;
+ (void)setLogLevel:(int)arg1;
+ (void)log2view:(id)arg1;
+ (void)saveLogCacheToFileExtraInfo:(id)arg1 callerName:(id)arg2;
+ (void)saveLogCacheToFile;
+ (_Bool)isTimeCheckLogExpired;
+ (void)checkAndClearExpiredLocalLog;
+ (void)log2File:(id)arg1 logLevel:(int)arg2 logCategory:(int)arg3 methodName:(id)arg4;
+ (id)getLogDirPath;
+ (void)resetLogSetting;
+ (void)initLogSetting;

@end

