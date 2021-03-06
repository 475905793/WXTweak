//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSData, NSString;

@interface WCFinderFetchCommentListCGI : WCFinderBaseCgi
{
    _Bool _fetchObject;
    unsigned long long _objectId;
    unsigned long long _refCommentID;
    NSData *_lastBuffer;
    CDUnknownBlockType _successBlock;
    NSString *_finderUsername;
    CDUnknownBlockType _failBlock;
    unsigned long long _direction;
    unsigned long long _scene;
    NSString *_nonceID;
}

@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool fetchObject; // @synthesize fetchObject=_fetchObject;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (void)createRequest;
- (id)initWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 fetchObject:(_Bool)arg3 finderUsername:(id)arg4 reportScene:(unsigned long long)arg5 scene:(unsigned long long)arg6 lastBuffer:(id)arg7 refCommentID:(unsigned long long)arg8 direction:(unsigned long long)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;

@end

