//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CMailContactInfo : NSObject <NSCoding>
{
    NSString *mSyncInfo;
    NSMutableDictionary *mMailContactDic;
}

@property(retain, nonatomic) NSMutableDictionary *mMailContactDic; // @synthesize mMailContactDic;
@property(retain, nonatomic) NSString *mSyncInfo; // @synthesize mSyncInfo;
- (void).cxx_destruct;
- (void)SaveMailContactData;
- (void)LoadMailContactData;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

