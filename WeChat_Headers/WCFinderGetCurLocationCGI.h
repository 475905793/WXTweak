//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@interface WCFinderGetCurLocationCGI : WCBaseCgi
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end
