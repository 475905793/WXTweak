//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class TranslateLinkParameter;

@interface TranslateLinkCgiHandler : MMObject <PBMessageObserverDelegate>
{
    TranslateLinkParameter *_parameter;
    CDUnknownBlockType _completion;
    TranslateLinkCgiHandler *_selfRetain;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (void)requestWithParamter:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) TranslateLinkCgiHandler *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TranslateLinkParameter *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (void)reportReceiveResponse:(id)arg1 resp:(id)arg2;
- (void)reportSendRequest:(id)arg1;
- (void)reportTranslateLinkSuccWithResult:(id)arg1;
- (void)reportTranslateLinkFailWithResult:(id)arg1;
- (void)onTranslateLinkResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest;
- (void)callbackCompleteSuccessWithResult:(id)arg1;
- (void)callbackCompleteFail:(id)arg1 error:(id)arg2;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (id)initWithParameter:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

