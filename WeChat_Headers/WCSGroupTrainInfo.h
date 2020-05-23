//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface WCSGroupTrainInfo : NSObject <WCTTableCoding>
{
    unsigned int _lastSearchTime;
    NSString *_gId;
    NSData *_info;
    NSMutableArray *_arrClicks;
}

+ (void)__wcdb_column_constraint_4:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastSearchTime;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)info;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)gId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSMutableArray *arrClicks; // @synthesize arrClicks=_arrClicks;
@property(nonatomic) unsigned int lastSearchTime; // @synthesize lastSearchTime=_lastSearchTime;
@property(retain, nonatomic) NSData *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *gId; // @synthesize gId=_gId;
- (void).cxx_destruct;
- (unsigned int)getClickDaysForRecentDays:(unsigned int)arg1 nowDayOffset:(int)arg2;
- (unsigned int)getClickCountForRecentDays:(unsigned int)arg1 nowDayOffset:(int)arg2;
- (_Bool)addOneClick:(int)arg1;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

