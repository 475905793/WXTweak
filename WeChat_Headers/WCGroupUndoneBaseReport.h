//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGroupUndoneBaseReport : NSObject
{
    unsigned int _eRole;
    unsigned int _eMsgType;
    NSString *_todoId;
    NSString *_roomId;
    NSString *_appId;
    NSString *_appName;
}

@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int eMsgType; // @synthesize eMsgType=_eMsgType;
@property(nonatomic) unsigned int eRole; // @synthesize eRole=_eRole;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *todoId; // @synthesize todoId=_todoId;
- (void).cxx_destruct;
- (void)setRoleByContact:(id)arg1;
- (void)report;
- (void)invalidate;
- (_Bool)isValid;

@end

