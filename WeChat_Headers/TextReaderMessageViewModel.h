//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

#import "RichTextLayoutDelegate-Protocol.h"

@class NSMutableArray, NSString, UIFont;

@interface TextReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate>
{
    _Bool _isExpanded;
    struct CGSize _fullTitleSize;
    NSMutableArray *_fullTitleStyles;
    struct CGSize _partTitleSize;
    NSMutableArray *_partTitleStyles;
    double _viewHeight;
    double m_textViewMaxheight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)switchExpandState;
- (id)bottomStr;
- (unsigned int)maxContentLineNum;
- (id)titleStyles;
- (double)titleMaxWidth;
- (void)calTitleSizeAndTitleStyles;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) _Bool isLongText;
- (struct CGSize)titleSize;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

