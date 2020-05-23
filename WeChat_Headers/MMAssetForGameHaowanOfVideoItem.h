//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAsset.h"

#import "GameHaowanAsset-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"

@class GameHaowanAlbumVideoItem, NSString, NSURLSessionTask;

@interface MMAssetForGameHaowanOfVideoItem : MMAsset <MMImageLoaderObserver, GameHaowanAsset>
{
    GameHaowanAlbumVideoItem *_videoItem;
    CDUnknownBlockType _imageResultBlock;
    NSURLSessionTask *_sessionTask;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)getCreatedDate;
- (id)imageExifLogInfo;
- (struct CGSize)getImageRatioSize;
- (void)stopICloudActivity;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)requestThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (_Bool)getIsEdited;
- (id)videoDuration;
- (_Bool)isVideo;
- (_Bool)isPicture;
- (_Bool)isGif;
- (id)getThumbnail;
- (id)getThumbImage;
- (id)assetId;
- (id)assetUrl;
@property(readonly, nonatomic) GameHaowanAlbumVideoItem *videoItem;
- (_Bool)isOnlineVideo;
- (id)appId;
- (id)gameName;
- (id)subtitle;
- (id)title;
- (id)initWithVideoItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

