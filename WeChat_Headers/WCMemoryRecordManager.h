//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MemoryRecordInfo, NSMutableArray;

@interface WCMemoryRecordManager : NSObject
{
    NSMutableArray *m_recordList;
    MemoryRecordInfo *m_currRecord;
}

- (void).cxx_destruct;
- (id)recordListPath;
- (void)saveRecordList;
- (void)loadRecordList;
- (void)deleteAllRecords;
- (void)deleteRecord:(id)arg1;
- (void)updateRecord:(id)arg1;
- (void)insertNewRecord:(id)arg1;
- (id)getRecordByLaunchTime:(unsigned long long)arg1;
- (id)recordList;
- (id)init;

@end

