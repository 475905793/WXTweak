//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCFinderMediaInfo : NSObject <PBCoding>
{
    int videoPlayDuration;
    NSString *mediaURL;
    NSString *thumbURL;
    unsigned long long mediaType;
    double mediaWidth;
    double mediaHeight;
    unsigned long long fileSize;
    long long bitrate;
    NSMutableArray *specsArray;
    NSString *tid;
}

+ (id)finderMediaInfoFromFinderMedia:(id)arg1 tid:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_specsArray;
+ (void)PBArrayAdd_bitrate;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_thumbURL;
+ (void)PBArrayAdd_mediaURL;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
@property(retain, nonatomic) NSMutableArray *specsArray; // @synthesize specsArray;
@property(nonatomic) long long bitrate; // @synthesize bitrate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(nonatomic) double mediaHeight; // @synthesize mediaHeight;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth;
@property(nonatomic) int videoPlayDuration; // @synthesize videoPlayDuration;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)thumbPath;
- (id)mediaPath;
- (_Bool)isVideoMedia;
- (struct CGSize)mediaFeedContentHeightWith:(double)arg1;
- (unsigned long long)finderMediaSizeType;
- (unsigned long long)finderMediaType;
- (void)dealloc;
- (id)genFinderMedia;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

