//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface ResendFavItem : NSObject <PBCoding>
{
    unsigned int favId;
    unsigned int localFavId;
    unsigned int _itemStatus;
    NSMutableArray *fileIdList;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileIdList;
+ (void)PBArrayAdd_localFavId;
+ (void)PBArrayAdd_favId;
@property(nonatomic) unsigned int itemStatus; // @synthesize itemStatus=_itemStatus;
@property(retain, nonatomic) NSMutableArray *fileIdList; // @synthesize fileIdList;
@property(nonatomic) unsigned int localFavId; // @synthesize localFavId;
@property(nonatomic) unsigned int favId; // @synthesize favId;
- (void).cxx_destruct;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

