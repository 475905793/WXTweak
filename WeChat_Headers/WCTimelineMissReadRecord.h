//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;

@interface WCTimelineMissReadRecord : NSObject <NSCoding>
{
    unsigned int _firstFeedCreatTime;
    unsigned long long _missReadRecordId;
    NSMutableArray *_missReadFeeds;
}

@property(nonatomic) unsigned int firstFeedCreatTime; // @synthesize firstFeedCreatTime=_firstFeedCreatTime;
@property(retain, nonatomic) NSMutableArray *missReadFeeds; // @synthesize missReadFeeds=_missReadFeeds;
@property(nonatomic) unsigned long long missReadRecordId; // @synthesize missReadRecordId=_missReadRecordId;
- (void).cxx_destruct;
- (id)description;
- (id)getFirstMissReadId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

