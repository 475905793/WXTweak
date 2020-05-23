//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WCCommitPrivacySetting : MMObject <PBCoding>
{
    int privacy;
    NSArray *selectContacts;
    NSArray *selectTags;
    NSArray *recentSelectedChatroom;
}

+ (void)initialize;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_selectContacts;
+ (void)PBArrayAdd_privacy;
@property(retain, nonatomic) NSArray *recentSelectedChatroom; // @synthesize recentSelectedChatroom;
@property(retain, nonatomic) NSArray *selectTags; // @synthesize selectTags;
@property(retain, nonatomic) NSArray *selectContacts; // @synthesize selectContacts;
@property(nonatomic) int privacy; // @synthesize privacy;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

