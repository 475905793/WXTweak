//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem18218 : KvReportBaseItem
{
    _Bool _FirstTimeExpose_24;
    unsigned int _ExposeTime_21;
    unsigned int _ExposePos_25;
    unsigned int _UnreadCount_27;
    NSString *_BizUserName_22;
    long long _Mid_23;
    NSString *_Desc_26;
}

@property(nonatomic) unsigned int UnreadCount_27; // @synthesize UnreadCount_27=_UnreadCount_27;
@property(copy, nonatomic) NSString *Desc_26; // @synthesize Desc_26=_Desc_26;
@property(nonatomic) unsigned int ExposePos_25; // @synthesize ExposePos_25=_ExposePos_25;
@property(nonatomic) _Bool FirstTimeExpose_24; // @synthesize FirstTimeExpose_24=_FirstTimeExpose_24;
@property(nonatomic) long long Mid_23; // @synthesize Mid_23=_Mid_23;
@property(copy, nonatomic) NSString *BizUserName_22; // @synthesize BizUserName_22=_BizUserName_22;
@property(nonatomic) unsigned int ExposeTime_21; // @synthesize ExposeTime_21=_ExposeTime_21;
- (void).cxx_destruct;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

