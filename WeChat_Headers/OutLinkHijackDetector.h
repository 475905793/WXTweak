//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OutLinkHijackDetector : MMService <MMServiceProtocol, ICdnComMgrExt, IMsgExt>
{
    NSString *_uploadingFile;
    NSMutableDictionary *_fileRecord;
    _Bool _isLoadConfigFile;
    NSMutableArray *_configList;
    unsigned int _configFileExpireTime;
    NSMutableDictionary *_sucReportUrl;
    unsigned int _blockConfigFlag;
    NSArray *_blockBlackList;
    NSArray *_blockWhiteList;
    _Bool _needReportOperatorsHijack;
    NSString *_hijackUrl;
}

@property(retain, nonatomic) NSString *hijackUrl; // @synthesize hijackUrl=_hijackUrl;
@property(nonatomic) _Bool needReportOperatorsHijack; // @synthesize needReportOperatorsHijack=_needReportOperatorsHijack;
- (void).cxx_destruct;
- (void)handleBlockConfigMsg:(id)arg1;
- (void)handleDectConfigMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)reportOperatorsHijackHtmlContent:(id)arg1;
- (int)getOperatorsHijackBlockControlFlag;
- (id)getOperatorsHijackBlockBlackList;
- (_Bool)isOperatorsHijackBlockEnable:(id)arg1;
- (void)reportCdnInfoToServer:(id)arg1;
- (void)tryUploadUnFinishFile;
- (id)getHijackConfigFileDir;
- (id)getWebReportRootDir;
- (void)storageHtmlContent:(id)arg1;
- (void)startDetect:(id)arg1;
- (void)markUrlHasBeenReported:(id)arg1;
- (_Bool)urlHasBeenReported:(id)arg1;
- (void)saveHijackConfigFile;
- (void)tryloadHijackConfigFile;
- (id)init;
- (void)dealloc;
- (int)getAbtestOperatorsHijackBlockControlFlag;
- (id)getAbtestOperatorsHijackBlockBlackList;
- (id)getOperationsHijackBlockWhiteList;
- (void)tryAbTestDataMigration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

