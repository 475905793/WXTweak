//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCAppAuthAuthInfo : MMObject <PBCoding>
{
    unsigned int allScopeState;
    unsigned int isShowAllscope;
    NSMutableArray *scopes;
}

+ (void)initialize;
+ (void)PBArrayAdd_isShowAllscope;
+ (void)PBArrayAdd_allScopeState;
+ (void)PBArrayAdd_scopes;
@property(nonatomic) unsigned int isShowAllscope; // @synthesize isShowAllscope;
@property(nonatomic) unsigned int allScopeState; // @synthesize allScopeState;
@property(retain, nonatomic) NSMutableArray *scopes; // @synthesize scopes;
- (void).cxx_destruct;
- (id)getScopeItemByIdentifier:(id)arg1;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)getScopes;
- (void)dealloc;
- (id)init;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

