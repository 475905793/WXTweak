//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesModel.h"

@class NSString;

@interface FavBrandMpVideoItem : FavoritesModel
{
    NSString *_bizUsrName;
    NSString *_bizNickName;
    NSString *_mpUrl;
    NSString *_vid;
    NSString *_videoUrl;
    double _duration;
    NSString *_thumbUrl;
    double _thumbWidth;
    double _thumbHeight;
}

@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
@property(copy, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)checkData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;

@end
