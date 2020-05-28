//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, UIImage;

@protocol FaceRecogProcessorDelegate <NSObject>
- (void)faceRecogDidFinishWithError;
- (void)faceRecogDidFinishWithTrackFail;
- (void)faceRecogDidFinishWithTimeout;
- (void)procedureDidGotFrameResult:(unsigned long long)arg1 failedType:(long long)arg2;

@optional
- (void)procedureDidFailedReleaseOutResultData;
- (void)procedureDidStartUploadResultDataWithPath:(NSString *)arg1 hash:(NSData *)arg2;
- (void)procedureDidRecognizeLiveSuccess:(UIImage *)arg1;
- (void)procedureDidRecognizeFaceSuccess;
@end

