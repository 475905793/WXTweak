//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface MemoryReportTask : NSObject <PBCoding>
{
    _Bool generateFail;
    _Bool reportSuccess;
    int reportType;
    int retryCount;
    unsigned long long recordID;
    NSData *_reportData;
}

+ (void)initialize;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_reportType;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_generateFail;
+ (void)PBArrayAdd_recordID;
@property(retain, nonatomic) NSData *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) int retryCount; // @synthesize retryCount;
@property(nonatomic) int reportType; // @synthesize reportType;
@property(nonatomic) _Bool reportSuccess; // @synthesize reportSuccess;
@property(nonatomic) _Bool generateFail; // @synthesize generateFail;
@property(nonatomic) unsigned long long recordID; // @synthesize recordID;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

