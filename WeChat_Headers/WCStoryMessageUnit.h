//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCStoryMessageUnit : NSObject
{
    unsigned int _lastCommentTime;
    NSString *_username;
    NSMutableArray *_dataItems;
    NSString *_lastCommentTid;
    NSString *_lastCommentId;
    long long _unreadCommentCount;
}

@property(nonatomic) long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(retain, nonatomic) NSString *lastCommentId; // @synthesize lastCommentId=_lastCommentId;
@property(retain, nonatomic) NSString *lastCommentTid; // @synthesize lastCommentTid=_lastCommentTid;
@property(nonatomic) unsigned int lastCommentTime; // @synthesize lastCommentTime=_lastCommentTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

@end

