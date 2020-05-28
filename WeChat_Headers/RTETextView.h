//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "NSTextStorageDelegate-Protocol.h"
#import "RTELayoutManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTextStorage, RTEAttachmentViewProvider;
@protocol RTETextViewDataDelegate, RTETextViewSectionDelegate;

@interface RTETextView : UITextView <RTELayoutManagerDelegate, NSTextStorageDelegate>
{
    NSTextStorage *m_textStorage;
    _Bool m_forBidSelectionChangeNotify;
    _Bool m_onSetContent;
    NSMutableArray *m_arrEditInfo;
    _Bool _autoResize;
    unsigned long long _sectionIndex;
    id <RTETextViewSectionDelegate> _sectionDelegate;
    id <RTETextViewDataDelegate> _dataDelegate;
    RTEAttachmentViewProvider *_attachmentViewProvider;
}

@property(nonatomic) __weak RTEAttachmentViewProvider *attachmentViewProvider; // @synthesize attachmentViewProvider=_attachmentViewProvider;
@property(nonatomic) __weak id <RTETextViewDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak id <RTETextViewSectionDelegate> sectionDelegate; // @synthesize sectionDelegate=_sectionDelegate;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool autoResize; // @synthesize autoResize=_autoResize;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRect:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2 attachment:(id)arg3;
- (id)storage;
- (id)attachmentsInRange:(struct _NSRange)arg1;
- (void)invalidateAttachmentsInRange:(struct _NSRange)arg1;
- (void)chectHeightChange;
- (void)applyEditInfo;
- (void)unmarkText;
- (_Bool)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)removeAllAttachmentViews;
- (id)getTextAttachmentForAttribute:(id)arg1;
- (void)reloadContentAtRange:(struct _NSRange)arg1;
- (id)layout;
- (void)reloadAttachment:(id)arg1;
- (void)notifyTextViewDidChange;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

