//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPCommentBaseCellView.h"

@class MPCommentReplyCellViewModel, UIView;

@interface MPCommentReplyCellView : MPCommentBaseCellView
{
    UIView *m_authorMarkView;
}

- (void).cxx_destruct;
- (double)maskViewHeaderOffset;
- (void)layoutSubviews;
- (void)initSubViews;
- (void)updateWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MPCommentReplyCellViewModel *viewModel; // @dynamic viewModel;

@end
