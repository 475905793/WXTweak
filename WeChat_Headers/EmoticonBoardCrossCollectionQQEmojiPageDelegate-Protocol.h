//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonBoardCrossCollectionBasePageDelegate-Protocol.h"

@class NSString;

@protocol EmoticonBoardCrossCollectionQQEmojiPageDelegate <EmoticonBoardCrossCollectionBasePageDelegate>
- (void)shouldHideQQEmojiPreview;
- (void)shouldShowQQEmojiPreviewForKey:(NSString *)arg1 atCenterPoint:(struct CGPoint)arg2;
- (void)onQQEmojiPageCellTapDeleteButton;
- (void)onQQEmojiPageCellTapSendButton;
- (void)onQQEmojiPageCellTapQQEmojiWithCode:(NSString *)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
@end
