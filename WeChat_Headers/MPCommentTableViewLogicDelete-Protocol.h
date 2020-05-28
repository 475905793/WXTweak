//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MPCommentMsg, MPCommentReply;

@protocol MPCommentTableViewLogicDelete <NSObject, UIScrollViewDelegate>
- (void)onRefreshCommentTableView;

@optional
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onCommentReplyClick:(MPCommentMsg *)arg1 commentReply:(MPCommentReply *)arg2;
- (void)onTopicReplyClick:(MPCommentMsg *)arg1;
- (void)onDeleteCommentMsgReply:(MPCommentMsg *)arg1 commentReply:(MPCommentReply *)arg2;
- (void)onDeleteCommentMsg:(MPCommentMsg *)arg1;
@end

