//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSMutableArray, NSString, WCCardPkgMsgActivity, WCCardPkgMsgButton;

@interface WCCardPkgMsg : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    _Bool _bNeedCheck;
    _Bool _allUnavailable;
    _Bool _need_pull_card_entrance;
    unsigned int localID;
    unsigned int status;
    unsigned int updateTime;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int msgType;
    unsigned int jumpType;
    unsigned int reportScene;
    unsigned int getLayoutScene;
    unsigned long long svr64ID;
    NSString *contentForDB;
    NSString *cardId;
    NSString *consumedBoxId;
    NSString *StrRes1;
    NSString *StrRes2;
    long long lastInsertedRowID;
    NSString *cardTpId;
    NSString *logoUrl;
    NSString *webUrl;
    NSString *title;
    NSString *desc;
    NSString *msgID;
    WCCardPkgMsgButton *actionBtn;
    WCCardPkgMsgActivity *activity;
    NSMutableArray *acceptItemList;
    NSString *redDotWording;
    NSString *redDotIconUrl;
    NSString *redDotBuff;
    NSString *_msgTipWording;
    NSString *_msgTipIconUrl;
    NSMutableArray *_jumpUrlBtnList;
    NSString *_logoColor;
    NSMutableArray *_unavailableQrCodeList;
}

+ (void)ParseMsgXML:(id)arg1 ToMsg:(id)arg2;
+ (void)__wcdb_column_constraint_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)logoColor;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)consumedBoxId;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardId;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)contentForDB;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)svr64ID;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localID;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) _Bool need_pull_card_entrance; // @synthesize need_pull_card_entrance=_need_pull_card_entrance;
@property(retain, nonatomic) NSMutableArray *unavailableQrCodeList; // @synthesize unavailableQrCodeList=_unavailableQrCodeList;
@property(nonatomic) _Bool allUnavailable; // @synthesize allUnavailable=_allUnavailable;
@property(retain, nonatomic) NSString *logoColor; // @synthesize logoColor=_logoColor;
@property(nonatomic) _Bool bNeedCheck; // @synthesize bNeedCheck=_bNeedCheck;
@property(retain, nonatomic) NSMutableArray *jumpUrlBtnList; // @synthesize jumpUrlBtnList=_jumpUrlBtnList;
@property(retain, nonatomic) NSString *msgTipIconUrl; // @synthesize msgTipIconUrl=_msgTipIconUrl;
@property(retain, nonatomic) NSString *msgTipWording; // @synthesize msgTipWording=_msgTipWording;
@property(retain, nonatomic) NSString *redDotBuff; // @synthesize redDotBuff;
@property(retain, nonatomic) NSString *redDotIconUrl; // @synthesize redDotIconUrl;
@property(retain, nonatomic) NSString *redDotWording; // @synthesize redDotWording;
@property(nonatomic) unsigned int getLayoutScene; // @synthesize getLayoutScene;
@property(retain, nonatomic) NSMutableArray *acceptItemList; // @synthesize acceptItemList;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene;
@property(retain, nonatomic) WCCardPkgMsgActivity *activity; // @synthesize activity;
@property(retain, nonatomic) WCCardPkgMsgButton *actionBtn; // @synthesize actionBtn;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *consumedBoxId; // @synthesize consumedBoxId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *contentForDB; // @synthesize contentForDB;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned long long svr64ID; // @synthesize svr64ID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupDataFromDB;

@end

