//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MPLandingVideoProgressHelper : MMObject
{
}

+ (_Bool)isVideoItemInvaild:(id)arg1;
+ (void)saveVideoProgressCache;
+ (void)loadAndFilterVideoProgressCacheListIfNeed;
+ (void)clearCache;
+ (double)getVideoProgressWithBizUsername:(id)arg1 videoId:(id)arg2;
+ (_Bool)saveVideoProgress:(double)arg1 bizUsername:(id)arg2 videoId:(id)arg3;

@end

