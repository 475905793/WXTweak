//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPathViewPayload.h"

@class NSArray, UIColor, UIImage;

@interface QPolylineViewPayload : QPathViewPayload
{
    _Bool _drawSymbol;
    double _borderWidth;
    UIColor *_borderColor;
    NSArray *_lineDashPattern;
    NSArray *_segmentStyle;
    NSArray *_segmentColor;
    UIColor *_eraseColor;
    long long _drawType;
    UIImage *_styleTextureImage;
    double _footprintStep;
    UIImage *_symbolImage;
    double _symbolGap;
}

@property(nonatomic) double symbolGap; // @synthesize symbolGap=_symbolGap;
@property(retain, nonatomic) UIImage *symbolImage; // @synthesize symbolImage=_symbolImage;
@property(nonatomic) _Bool drawSymbol; // @synthesize drawSymbol=_drawSymbol;
@property(nonatomic) double footprintStep; // @synthesize footprintStep=_footprintStep;
@property(retain, nonatomic) UIImage *styleTextureImage; // @synthesize styleTextureImage=_styleTextureImage;
@property(nonatomic) long long drawType; // @synthesize drawType=_drawType;
@property(retain, nonatomic) UIColor *eraseColor; // @synthesize eraseColor=_eraseColor;
@property(copy, nonatomic) NSArray *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(copy, nonatomic) NSArray *segmentStyle; // @synthesize segmentStyle=_segmentStyle;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;

@end

