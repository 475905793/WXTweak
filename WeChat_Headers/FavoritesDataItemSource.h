//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesModel.h"

@class NSString;

@interface FavoritesDataItemSource : FavoritesModel
{
    int _sourceType;
    NSString *_sourceId;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    NSString *_appId;
    NSString *_brandId;
    NSString *_link;
}

+ (id)xmlAttributePropertylist;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;

@end

