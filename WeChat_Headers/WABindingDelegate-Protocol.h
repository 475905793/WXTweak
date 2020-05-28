//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol WABindingDelegate <NSObject>

@optional
- (void)close:(NSString *)arg1 code:(unsigned int)arg2 reason:(NSString *)arg3;
- (void)send:(NSString *)arg1 data:(id)arg2;
- (NSString *)connectWebSocket:(NSString *)arg1 header:(NSDictionary *)arg2 subProtocols:(NSArray *)arg3 tcpNoDelay:(_Bool)arg4 perMessageDeflate:(_Bool)arg5 timeout:(unsigned int)arg6 openHandler:(void (^)(NSDictionary *))arg7 messageHandler:(void (^)(NSData *))arg8 closeHandler:(void (^)(unsigned int, NSString *))arg9 errorHandler:(void (^)(unsigned int, NSString *))arg10;
- (void)readFileDataSync:(NSString *)arg1 block:(void (^)(NSData *, NSString *))arg2;
- (void)readFileData:(NSString *)arg1 block:(void (^)(NSData *, NSString *))arg2;
- (NSString *)abortDownloadFile:(NSString *)arg1;
- (NSString *)downloadFile:(NSString *)arg1 header:(NSDictionary *)arg2 filePath:(NSString *)arg3 cleanMode:(_Bool)arg4 timeout:(unsigned int)arg5 complete:(void (^)(NSString *, NSString *, long long, NSString *))arg6 progress:(void (^)(float, long long, long long))arg7 header:(void (^)(NSDictionary *))arg8;
@end

