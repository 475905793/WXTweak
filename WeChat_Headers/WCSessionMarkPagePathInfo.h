//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface WCSessionMarkPagePathInfo : MMObject <NSCopying>
{
    unsigned int _index;
    NSString *_pagePathId;
    NSString *_sessionPageId;
    unsigned long long _type;
    NSMutableArray *_pagePaths;
}

@property(retain, nonatomic) NSMutableArray *pagePaths; // @synthesize pagePaths=_pagePaths;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *sessionPageId; // @synthesize sessionPageId=_sessionPageId;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;
- (id)init;

@end

