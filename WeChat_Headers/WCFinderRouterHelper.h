//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderRouterHelper : NSObject
{
}

+ (_Bool)shouldPresentCommentLiseViewController:(id)arg1 isActiveInput:(_Bool)arg2 isCheckClose:(_Bool)arg3 isCommentClose:(_Bool)arg4 commentDetailVM:(id)arg5;
+ (void)pushContactInfoAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushScrollActionSheetItem:(id)arg1 didSelecteItem:(id)arg2 currentNavController:(id)arg3;
+ (void)pushFeedContentFeedback:(id)arg1 currentNavController:(id)arg2;
+ (void)pushProfileContact:(id)arg1 currentNavController:(id)arg2 feedID:(id)arg3 reportScene:(unsigned long long)arg4;
+ (void)pushProfileContact:(id)arg1 currentNavController:(id)arg2 reportScene:(unsigned long long)arg3;
+ (void)pushProfileUserName:(id)arg1 feedID:(id)arg2 currentNavController:(id)arg3 reportScene:(unsigned long long)arg4;
+ (void)pushProfileUserName:(id)arg1 currentNavController:(id)arg2 reportScene:(unsigned long long)arg3;
+ (void)pushPOIInfoAction:(id)arg1 userName:(id)arg2 currentNavController:(id)arg3;
+ (void)pushPOIURLAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushPOIAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushExtReadingAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushTopicAction:(id)arg1 topicType:(unsigned long long)arg2 location:(id)arg3 dataItem:(id)arg4 currentNavController:(id)arg5 fromShare:(_Bool)arg6;
+ (void)pushToMMWeb:(id)arg1 currentNavController:(id)arg2;

@end

