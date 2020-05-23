//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IFriendListMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AddressBookFriendMgr : MMService <MMServiceProtocol, IFriendListMgrExt>
{
    NSMutableDictionary *m_friends;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (_Bool)trySyncAddressBookFriends;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (id)getAddressBookFriends;
- (void)LoadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

