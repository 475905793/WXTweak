//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface FakeMainFrameCellData : NSObject <PBCoding>
{
    _Bool bNormalCell;
    _Bool bTopCell;
    NSString *userName;
    NSString *textForNameLabel;
    NSString *textForTimeLabel;
    NSString *textForMessageLabel;
    double widthForNameLabel;
}

+ (void)initialize;
+ (void)PBArrayAdd_bTopCell;
+ (void)PBArrayAdd_bNormalCell;
+ (void)PBArrayAdd_widthForNameLabel;
+ (void)PBArrayAdd_textForMessageLabel;
+ (void)PBArrayAdd_textForTimeLabel;
+ (void)PBArrayAdd_textForNameLabel;
+ (void)PBArrayAdd_userName;
@property _Bool bTopCell; // @synthesize bTopCell;
@property _Bool bNormalCell; // @synthesize bNormalCell;
@property double widthForNameLabel; // @synthesize widthForNameLabel;
@property(retain) NSString *textForMessageLabel; // @synthesize textForMessageLabel;
@property(retain) NSString *textForTimeLabel; // @synthesize textForTimeLabel;
@property(retain) NSString *textForNameLabel; // @synthesize textForNameLabel;
@property(retain) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

