//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CContact, SessionStat;
@protocol BrandServiceEnterConversationLogicDelegate;

@interface BrandServiceEnterConversationLogic : MMObject
{
    CContact *m_contact;
    SessionStat *_sessionInfo;
    id <BrandServiceEnterConversationLogicDelegate> _delegate;
    long long _subscene;
}

@property(nonatomic) long long subscene; // @synthesize subscene=_subscene;
@property(nonatomic) __weak id <BrandServiceEnterConversationLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SessionStat *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)addWuRaoSystemMessageIfNeeded:(id)arg1 clickable:(id)arg2;
- (void)reportExitConversationForContact;
- (id)getClickCommandMsgReportFromLastMsg:(id)arg1;
- (void)reportEnterConversationForContact:(id)arg1;
- (id)init;

@end

