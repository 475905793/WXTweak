//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

#import "INewQQMailExt-Protocol.h"
#import "IQQMailExt-Protocol.h"

@class MMUIActivityIndicatorView, MailAttachment, UIButton, UILabel;
@protocol MailAttachmentsViewDelegate;

@interface MailAttachmentsView : MMUIButton <IQQMailExt, INewQQMailExt>
{
    MMUIActivityIndicatorView *m_loadingView;
    UILabel *m_labelName;
    UILabel *m_labelPercent;
    UILabel *m_labelUploadFail;
    UIButton *m_btnResend;
    unsigned int m_uiPercent;
    id <MailAttachmentsViewDelegate> m_delegate;
    MailAttachment *m_mailAttachment;
    _Bool m_bIsNewMail;
}

@property(nonatomic) __weak id <MailAttachmentsViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)OnNewUploadAttachmentData:(id)arg1 fileName:(id)arg2 uploadedDataSize:(unsigned int)arg3 err:(int)arg4;
- (void)OnUploadData:(id)arg1 filename:(id)arg2;
- (void)cancelUpload;
- (void)startUploadData;
- (id)initWithMailAttachment:(id)arg1 frame:(struct CGRect)arg2 isNewMail:(_Bool)arg3;
- (id)getDataName;
- (id)getDataID;
- (id)getData;
- (void)setData:(id)arg1;
- (void)setDataID:(id)arg1;
- (_Bool)isFilenameEqualToString:(id)arg1;
- (unsigned long long)attachmentSize;
- (void)initView;
- (void)OnResend:(id)arg1;
- (void)setUploadSuccessStatusForNewQQMail:(unsigned int)arg1;
- (void)updateUploadPercentForNewQQMail:(unsigned int)arg1;
- (void)setUploadingStatus;
- (void)updateUploadPercent:(unsigned int)arg1;
- (void)setUploadSuccessStatus;
- (void)setUploadFailStatus;
- (_Bool)isUploadSuccess;
- (void)initData;

@end

