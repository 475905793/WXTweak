//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface DeviceRankItem : MMObject
{
    unsigned int _uiRankNum;
    NSString *_nsRankId;
    NSString *_nsRankTitle;
}

@property(nonatomic) unsigned int uiRankNum; // @synthesize uiRankNum=_uiRankNum;
@property(retain, nonatomic) NSString *nsRankTitle; // @synthesize nsRankTitle=_nsRankTitle;
@property(retain, nonatomic) NSString *nsRankId; // @synthesize nsRankId=_nsRankId;
- (void).cxx_destruct;

@end

