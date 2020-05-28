//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface PBMainFrameCellData : NSObject <PBCoding>
{
    NSString *m_nsHeadImgUsrName;
    NSString *m_nsHeadImgUrl;
    _Bool m_timeIsMoreThanAWeek;
    float m_widthForTimeLabelText;
    float m_widthForNameLabelText;
    int m_widthCacheVersion;
    _Bool m_bIsSenderFromSelf;
    NSString *m_textForNameLabel;
    NSString *m_textForMessageLabel;
    NSString *m_textForGreenLabel;
    NSString *m_textForTimeLabel;
    NSString *m_prefixTextForQuoteMessage;
    NSString *m_subfixTextForQuoteMessage;
    float m_widthForMessageLabelText;
    float m_widthForGreenLabelText;
    _Bool m_isRealTimeTalkRoomEmpty;
    NSString *m_textForMemberCntLabel;
    unsigned int m_memberCnt;
    _Bool m_bIsRoomDisplayEmpty;
    unsigned long long m_n64MesSvrID;
    _Bool m_bContainsEmoji;
}

+ (void)deleteCellDataFromLocalWithUsrName:(id)arg1;
+ (void)deleteCellDataFromLocal:(id)arg1;
+ (void)saveCellDataToLocal:(id)arg1 nsUsrName:(id)arg2 filePath:(id)arg3;
+ (id)loadCellDataFromLocal:(id)arg1;
+ (id)dirForCellDataFile;
+ (id)pathForCellData:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_bContainsEmoji;
+ (void)PBArrayAdd_m_n64MesSvrID;
+ (void)PBArrayAdd_m_widthCacheVersion;
+ (void)PBArrayAdd_m_bIsRoomDisplayEmpty;
+ (void)PBArrayAdd_m_memberCnt;
+ (void)PBArrayAdd_m_textForMemberCntLabel;
+ (void)PBArrayAdd_m_isRealTimeTalkRoomEmpty;
+ (void)PBArrayAdd_m_widthForGreenLabelText;
+ (void)PBArrayAdd_m_widthForMessageLabelText;
+ (void)PBArrayAdd_m_subfixTextForQuoteMessage;
+ (void)PBArrayAdd_m_prefixTextForQuoteMessage;
+ (void)PBArrayAdd_m_textForTimeLabel;
+ (void)PBArrayAdd_m_textForGreenLabel;
+ (void)PBArrayAdd_m_textForMessageLabel;
+ (void)PBArrayAdd_m_textForNameLabel;
+ (void)PBArrayAdd_m_bIsSenderFromSelf;
+ (void)PBArrayAdd_m_widthForNameLabelText;
+ (void)PBArrayAdd_m_widthForTimeLabelText;
+ (void)PBArrayAdd_m_timeIsMoreThanAWeek;
+ (void)PBArrayAdd_m_nsHeadImgUrl;
+ (void)PBArrayAdd_m_nsHeadImgUsrName;
@property(nonatomic) _Bool m_bContainsEmoji; // @synthesize m_bContainsEmoji;
@property(nonatomic) unsigned long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(nonatomic) int m_widthCacheVersion; // @synthesize m_widthCacheVersion;
@property(nonatomic) _Bool m_bIsRoomDisplayEmpty; // @synthesize m_bIsRoomDisplayEmpty;
@property(nonatomic) unsigned int m_memberCnt; // @synthesize m_memberCnt;
@property(retain, nonatomic) NSString *m_textForMemberCntLabel; // @synthesize m_textForMemberCntLabel;
@property(nonatomic) _Bool m_isRealTimeTalkRoomEmpty; // @synthesize m_isRealTimeTalkRoomEmpty;
@property(nonatomic) float m_widthForGreenLabelText; // @synthesize m_widthForGreenLabelText;
@property(nonatomic) float m_widthForMessageLabelText; // @synthesize m_widthForMessageLabelText;
@property(retain, nonatomic) NSString *m_subfixTextForQuoteMessage; // @synthesize m_subfixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_prefixTextForQuoteMessage; // @synthesize m_prefixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_textForTimeLabel; // @synthesize m_textForTimeLabel;
@property(retain, nonatomic) NSString *m_textForGreenLabel; // @synthesize m_textForGreenLabel;
@property(retain, nonatomic) NSString *m_textForMessageLabel; // @synthesize m_textForMessageLabel;
@property(retain, nonatomic) NSString *m_textForNameLabel; // @synthesize m_textForNameLabel;
@property(nonatomic) _Bool m_bIsSenderFromSelf; // @synthesize m_bIsSenderFromSelf;
@property(nonatomic) float m_widthForNameLabelText; // @synthesize m_widthForNameLabelText;
@property(nonatomic) float m_widthForTimeLabelText; // @synthesize m_widthForTimeLabelText;
@property(nonatomic) _Bool m_timeIsMoreThanAWeek; // @synthesize m_timeIsMoreThanAWeek;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUsrName; // @synthesize m_nsHeadImgUsrName;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

