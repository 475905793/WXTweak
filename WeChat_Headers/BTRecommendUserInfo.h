//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BTRecommendFeedbackInfo, NSString;

@interface BTRecommendUserInfo : NSObject
{
    BTRecommendFeedbackInfo *_feedbackInfo;
    NSString *_versionInfo;
}

@property(copy, nonatomic) NSString *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(retain, nonatomic) BTRecommendFeedbackInfo *feedbackInfo; // @synthesize feedbackInfo=_feedbackInfo;
- (void).cxx_destruct;

@end

