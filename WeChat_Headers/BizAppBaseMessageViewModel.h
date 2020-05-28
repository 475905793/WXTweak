//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

#import "IStrangerContactMgrExt-Protocol.h"

@class CContact, NSMutableArray, NSString, UIFont;

@interface BizAppBaseMessageViewModel : CommonMessageViewModel <IStrangerContactMgrExt>
{
    struct CGSize _viewSize;
    struct CGSize _titleSize;
    struct CGSize _digestSize;
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
    double _titleMaxWidth;
    double _digestMaxWidth;
    UIFont *_titleFont;
    UIFont *_digestFont;
    unsigned int _titleMaxLines;
    unsigned int _digestMaxLines;
    _Bool _needShowSourceLine;
    CContact *_bizContact;
}

@property(retain, nonatomic) CContact *bizContact; // @synthesize bizContact=_bizContact;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) double sourceViewHeight;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) unsigned int digestMaxLines;
@property(readonly, nonatomic) unsigned int titleMaxLines;
@property(readonly, nonatomic) UIFont *digestFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) double digestMaxWidth;
@property(readonly, nonatomic) double titleMaxWidth;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) struct CGSize titleSize;
@property(readonly, nonatomic) struct CGSize viewSize;
@property(readonly, nonatomic) NSString *sourceDetailStr;
@property(readonly, nonatomic) NSString *sourceUsrname;
@property(readonly, nonatomic) NSString *sourceNickname;
@property(readonly, nonatomic) _Bool needShowSourceDividerLine;
@property(readonly, nonatomic) _Bool needShowSourceLine;
@property(readonly, nonatomic) NSString *digestStr;
@property(readonly, nonatomic) NSString *titleStr;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

