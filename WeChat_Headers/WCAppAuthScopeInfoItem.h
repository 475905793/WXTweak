//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCAppAuthScopeInfoItem : MMObject <PBCoding>
{
    _Bool isUserEnable;
    unsigned int state;
    NSString *scope;
    NSString *scopeDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_isUserEnable;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_scopeDesc;
+ (void)PBArrayAdd_scope;
@property(nonatomic) _Bool isUserEnable; // @synthesize isUserEnable;
@property(nonatomic) unsigned int state; // @synthesize state;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc;
@property(copy, nonatomic) NSString *scope; // @synthesize scope;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

